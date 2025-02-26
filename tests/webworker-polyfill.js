/**
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

const urlModule = require('url');
const URL = urlModule.URL;
const fileURLToPath = urlModule.fileURLToPath;
const pathToFileURL = urlModule.pathToFileURL;
const path = require('path');
const fs = require('fs');
const VM = require('vm');
const threads = require('worker_threads');
const resolveObjectURL = require('node:buffer').resolveObjectURL;

const isDataUrl = s => /^data:/.test(s);
const isBlobUrl = s => /^blob:/.test(s);

const WORKER = Symbol.for('worker');
const EVENTS = Symbol.for('events');

class EventTarget {
	constructor() {
		Object.defineProperty(this, EVENTS, {
			value: new Map()
		});
	}
	dispatchEvent(event) {
		event.target = event.currentTarget = this;
		if (this['on'+event.type]) {
			try {
				this['on'+event.type](event);
			}
			catch (err) {
				console.error(err);
			}
		}
		const list = this[EVENTS].get(event.type);
		if (list == null) return;
		list.forEach(handler => {
			try {
				handler.call(this, event);
			}
			catch (err) {
				console.error(err);
			}
		});
	}
	addEventListener(type, fn) {
		let events = this[EVENTS].get(type);
		if (!events) this[EVENTS].set(type, events = []);
		events.push(fn);
	}
	removeEventListener(type, fn) {
		let events = this[EVENTS].get(type);
		if (events) {
			const index = events.indexOf(fn);
			if (index !== -1) events.splice(index, 1);
		}
	}
}

function Event(type, target) {
	this.type = type;
	this.timeStamp = Date.now();
	this.target = this.currentTarget = this.data = null;
}

// this module is used self-referentially on both sides of the
// thread boundary, but behaves differently in each context.
exports.Worker = typeof Worker === 'function' ? Worker : threads.isMainThread ? mainThread() : workerThread();

const baseUrl = pathToFileURL(process.cwd() + '/');

function mainThread() {

	/**
	 * A web-compatible Worker implementation atop Node's worker_threads.
	 *  - uses DOM-style events (Event.data, Event.type, etc)
	 *  - supports event handler properties (worker.onmessage)
	 *  - Worker() constructor accepts a module URL
	 *  - accepts the {type:'module'} option
	 *  - emulates WorkerGlobalScope within the worker
	 * @param {string} url  The URL or module specifier to load
	 * @param {object} [options]  Worker construction options
	 * @param {string} [options.name]  Available as `self.name` within the Worker
	 * @param {string} [options.type="classic"]  Pass "module" to create a Module Worker.
	 */
	class Worker extends EventTarget {
		constructor(url, options) {
			super();
			const { name, type } = options || {};
			url += '';
			let mod, blobUrl;
			if (isDataUrl(url)) {
				mod = url;
			}
			else if (isBlobUrl(url)) {
				mod = url;
				blobUrl = resolveObjectURL(url);
			}
			else {
				mod = fileURLToPath(new URL(url, baseUrl));
			}
			const worker = new threads.Worker(
				//fileURLToPath(__filename),
				__filename,
				{ workerData: { mod, name, type, blobUrl } }
			);
			Object.defineProperty(this, WORKER, {
				value: worker
			});
			worker.on('message', data => {
				const event = new Event('message');
				event.data = data;
				this.dispatchEvent(event);
			});
			worker.on('error', error => {
				error.type = 'error';
				this.dispatchEvent(error);
			});
			worker.on('exit', () => {
				this.dispatchEvent(new Event('close'));
			});
		}
		postMessage(data, transferList) {
			this[WORKER].postMessage(data, transferList);
		}
		terminate() {
			this[WORKER].terminate();
		}
	}
	Worker.prototype.onmessage = Worker.prototype.onerror = Worker.prototype.onclose = null;
	return Worker;
}

async function workerThread() {
	// loaded in a real Web Worker (eg: on Electron)
	if (typeof global.WorkerGlobalScope === 'function') {
		return;
	}
	let { mod, name, type, blobUrl } = threads.workerData;
	if (!mod) return mainThread();

	// turn global into a mock WorkerGlobalScope
	const self = global.self = global;

	// enqueue messages to dispatch after modules are loaded
	let q = [];
	function flush() {
		const buffered = q;
		q = null;
		buffered.forEach(event => { self.dispatchEvent(event); });
	}
	threads.parentPort.on('message', data => {
		const event = new Event('message');
		event.data = data;
		if (q == null) self.dispatchEvent(event);
		else q.push(event);
	});
	threads.parentPort.on('error', err => {
		err.type = 'Error';
		self.dispatchEvent(err);
	});

	class WorkerGlobalScope extends EventTarget {
		postMessage(data, transferList) {
			threads.parentPort.postMessage(data, transferList);
		}
		// Emulates https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/close
		close() {
			process.exit();
		}
		importScripts() {
			for (let i = 0; i < arguments.length; i++) {
				const url = arguments[i];
				let code;
				if (/^data:/.test(url)) {
					code = parseDataUrl(url).data;
				}
				else {
					code = fs.readFileSync(
						new URL(path.posix.normalize(url), pathToFileURL(mod)),
						'utf-8'
					);
				}
				// CommonJS modules will not run in Node if the variable module is undefined in a Worker.
				VM.runInThisContext("var module={};");
				VM.runInThisContext(code, { filename: url });
			}
		}
	}
	let proto = Object.getPrototypeOf(global);
	delete proto.constructor;
	Object.defineProperties(WorkerGlobalScope.prototype, proto);
	proto = Object.setPrototypeOf(global, new WorkerGlobalScope());
	['postMessage', 'addEventListener', 'removeEventListener', 'dispatchEvent'].forEach(fn => {
		proto[fn] = proto[fn].bind(global);
	});
	global.name = name;
	global.WorkerGlobalScope = WorkerGlobalScope;

	if (type === 'module') {
		import(isDataUrl(mod) ? mod : pathToFileURL(mod))
			.catch(err => {
				if (isDataUrl(mod) && err.message === 'Not supported') {
					console.warn('Worker(): Importing data: URLs requires Node 12.10+. Falling back to classic worker.');
					 evaluateDataUrl(mod, name, blobUrl);
				}
				console.error(err);
			})
			.then(flush);
	}
	else {
		try {
			if (/^data:/.test(mod)) {
				evaluateDataUrl(mod, name);
			}
			else if (isBlobUrl(mod)) {
				evaluateDataUrl(mod, name, blobUrl);
			}
			else {
				global.importScripts(mod);
			}
		}
		catch (err) {
			console.error(err);
		}
		Promise.resolve().then(flush);
	}
}

async function evaluateDataUrl(url, name, blobUrl) {
	const { data } = await parseDataUrl(url, blobUrl);
	return VM.runInThisContext(data, {
		filename: 'worker.<'+(name || 'data:')+'>'
	});
}

async function parseDataUrl(url, blobUrl) {
	if (blobUrl) {
		return {
			type: blobUrl.type,
			data: await blobUrl.text()
		};
	}

	let [m, type, encoding, data] = url.match(/^data: *([^;,]*)(?: *; *([^,]*))? *,(.*)$/) || [];
	if (!m) throw Error('Invalid Data URL.');
	data = decodeURIComponent(data);
	if (encoding) switch (encoding.toLowerCase()) {
		case 'base64':
			data = Buffer.from(data, 'base64').toString();
			break;
		default:
			throw Error('Unknown Data URL encoding "' + encoding + '"');
	}
	return { type, data };
}
