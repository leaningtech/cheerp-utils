/****************************************************************
 *
 * Copyright (C) 2013 Alessandro Pignotti <alessandro@leaningtech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 ***************************************************************/

#ifndef _DUETTO_LIB_56a00347
#define _DUETTO_LIB_56a00347
namespace client
{
	extern double NaN;
	extern double Infinity;
	extern Object* eval(const String& x);
	extern double parseInt(const String& s);
	extern double parseInt(const String& s, double radix);
	extern double parseFloat(const String& string);
	extern bool isNaN(double number);
	extern bool isFinite(double number);
	extern String* decodeURI(const String& encodedURI);
	extern String* decodeURIComponent(const String& encodedURIComponent);
	extern String* encodeURI(const String& uri);
	extern String* encodeURIComponent(const String& uriComponent);

	class PropertyDescriptor 
	{
	public:
		void set_configurable(bool value);
		bool get_configurable();
		void set_enumerable(bool value);
		bool get_enumerable();
		void set_value(Object* value);
		Object* get_value();
		void set_writable(bool value);
		bool get_writable();
		Object* get();
		void set(Object* v);
	};

	class PropertyDescriptorMap 
	{
	public:
		PropertyDescriptor* operator[](const String& s);
	};

	class Object 
	{
	public:
		Object* operator[](const String& s);
		String* toString();
		String* toLocaleString();
		Object* valueOf();
		bool hasOwnProperty(const String& v);
		bool isPrototypeOf(Object* v);
		bool propertyIsEnumerable(const String& v);
		static Object* operator()();
		static Object* operator()(Object* value);
		Object();
		Object(Object* value);
		static void set_prototype(Object* value);
		static Object* get_prototype();
		static Object* getPrototypeOf(Object* o);
		static PropertyDescriptor* getOwnPropertyDescriptor(Object* o, const String& p);
		static String** getOwnPropertyNames(Object* o);
		static Object* create(Object* o);
		static Object* create(Object* o, PropertyDescriptorMap* properties);
		static Object* defineProperty(Object* o, const String& p, PropertyDescriptor* attributes);
		static Object* defineProperties(Object* o, PropertyDescriptorMap* properties);
		static Object* seal(Object* o);
		static Object* freeze(Object* o);
		static Object* preventExtensions(Object* o);
		static bool isSealed(Object* o);
		static bool isFrozen(Object* o);
		static bool isExtensible(Object* o);
		static String** keys(Object* o);
	};

	class Function 
	{
	public:
		Object* apply(Object* thisArg);
		Object* apply(Object* thisArg, Object* argArray);
		Object* call(Object* thisArg, Object** argArray);
		Object* bind(Object* thisArg, Object** argArray);
		void set_prototype(Object* value);
		Object* get_prototype();
		void set_length(double value);
		double get_length();
		void set_arguments(Object* value);
		Object* get_arguments();
		void set_caller(Function* value);
		Function* get_caller();
		static Function* operator()(String** args);
		Function(String** args);
		static void set_prototype(Function* value);
		static Function* get_prototype();
	};

	class IArguments 
	{
	public:
		Object* operator[](double index);
		void set_length(double value);
		double get_length();
		void set_callee(Function* value);
		Function* get_callee();
	};

	class String 
	{
	public:
		String* toString();
		String* charAt(double pos);
		double charCodeAt(double index);
		String* concat(String** strings);
		double indexOf(const String& searchString);
		double indexOf(const String& searchString, double position);
		double lastIndexOf(const String& searchString);
		double lastIndexOf(const String& searchString, double position);
		double localeCompare(const String& that);
		String** match(const String& regexp);
		String** match(RegExp* regexp);
		String* replace(const String& searchValue, const String& replaceValue);
		String* replace(const String& searchValue, String* (*replaceValue)(const String& substring, Object** args));
		String* replace(RegExp* searchValue, const String& replaceValue);
		String* replace(RegExp* searchValue, String* (*replaceValue)(const String& substring, Object** args));
		double search(const String& regexp);
		double search(RegExp* regexp);
		String* slice(double start);
		String* slice(double start, double end);
		String** split(const String& separator);
		String** split(const String& separator, double limit);
		String** split(RegExp* separator);
		String** split(RegExp* separator, double limit);
		String* substring(double start);
		String* substring(double start, double end);
		String* toLowerCase();
		String* toLocaleLowerCase();
		String* toUpperCase();
		String* toLocaleUpperCase();
		String* trim();
		void set_length(double value);
		double get_length();
		String* substr(double from);
		String* substr(double from, double length);
		static String* operator()(/*[*/Object* value/*]*/);
		String();
		String(Object* value);
		static void set_prototype(String* value);
		static String* get_prototype();
		static String* fromCharCode(double[] codes);
	};

	class Boolean 
	{
	public:
		static bool operator()(/*[*/Object* value/*]*/);
		Boolean();
		Boolean(Object* value);
		static void set_prototype(Boolean* value);
		static Boolean* get_prototype();
	};

	class Number 
	{
	public:
		String* toString();
		String* toString(double radix);
		String* toFixed();
		String* toFixed(double fractionDigits);
		String* toExponential();
		String* toExponential(double fractionDigits);
		String* toPrecision(double precision);
		static double operator()(/*[*/Object* value/*]*/);
		Number();
		Number(Object* value);
		static void set_prototype(Number* value);
		static Number* get_prototype();
		static void set_MAX_VALUE(double value);
		static double get_MAX_VALUE();
		static void set_MIN_VALUE(double value);
		static double get_MIN_VALUE();
		static void set_NaN(double value);
		static double get_NaN();
		static void set_NEGATIVE_INFINITY(double value);
		static double get_NEGATIVE_INFINITY();
		static void set_POSITIVE_INFINITY(double value);
		static double get_POSITIVE_INFINITY();
	};

	class Math 
	{
	public:
		void set_E(double value);
		double get_E();
		void set_LN10(double value);
		double get_LN10();
		void set_LN2(double value);
		double get_LN2();
		void set_LOG2E(double value);
		double get_LOG2E();
		void set_LOG10E(double value);
		double get_LOG10E();
		void set_PI(double value);
		double get_PI();
		void set_SQRT1_2(double value);
		double get_SQRT1_2();
		void set_SQRT2(double value);
		double get_SQRT2();
		double abs(double x);
		double acos(double x);
		double asin(double x);
		double atan(double x);
		double atan2(double y, double x);
		double ceil(double x);
		double cos(double x);
		double exp(double x);
		double floor(double x);
		double log(double x);
		double max(double[] values);
		double min(double[] values);
		double pow(double x, double y);
		double random();
		double round(double x);
		double sin(double x);
		double sqrt(double x);
		double tan(double x);
	};
	extern Math* Math;

	class Date 
	{
	public:
		String* toString();
		String* toDateString();
		String* toTimeString();
		String* toLocaleString();
		String* toLocaleDateString();
		String* toLocaleTimeString();
		double valueOf();
		double getTime();
		double getFullYear();
		double getUTCFullYear();
		double getMonth();
		double getUTCMonth();
		double getDate();
		double getUTCDate();
		double getDay();
		double getUTCDay();
		double getHours();
		double getUTCHours();
		double getMinutes();
		double getUTCMinutes();
		double getSeconds();
		double getUTCSeconds();
		double getMilliseconds();
		double getUTCMilliseconds();
		double getTimezoneOffset();
		void setTime(double time);
		void setMilliseconds(double ms);
		void setUTCMilliseconds(double ms);
		void setSeconds(double sec);
		void setSeconds(double sec, double ms);
		void setUTCSeconds(double sec);
		void setUTCSeconds(double sec, double ms);
		void setMinutes(double min);
		void setMinutes(double min, double sec);
		void setMinutes(double min, double sec, double ms);
		void setUTCMinutes(double min);
		void setUTCMinutes(double min, double sec);
		void setUTCMinutes(double min, double sec, double ms);
		void setHours(double hours);
		void setHours(double hours, double min);
		void setHours(double hours, double min, );
		void setHours(double hours, double min, double sec, double ms);
		void setUTCHours(double hours);
		void setUTCHours(double hours, double min);
		void setUTCHours(double hours, double min, );
		void setUTCHours(double hours, double min, double sec, double ms);
		void setDate(double date);
		void setUTCDate(double date);
		void setMonth(double month);
		void setMonth(double month, double date);
		void setUTCMonth(double month);
		void setUTCMonth(double month, double date);
		void setFullYear(double year);
		void setFullYear(double year, double month);
		void setFullYear(double year, double month, double date);
		void setUTCFullYear(double year);
		void setUTCFullYear(double year, double month);
		void setUTCFullYear(double year, double month, double date);
		String* toUTCString();
		String* toISOString();
		String* toJSON();
		String* toJSON(Object* key);
		static String* operator()();
		Date();
		Date(double value);
		Date(const String& value);
		Date(double year, double month);
		Date(double year, double month, double date);
		Date(double year, double month, double date, );
		Date(double year, double month, double date, , double hours);
		Date(double year, double month, double date, , double hours, );
		Date(double year, double month, double date, double hours, double minutes, double seconds, double ms);
		static void set_prototype(Date* value);
		static Date* get_prototype();
		static double parse(const String& s);
		static double UTC(double year, double month);
		static double UTC(double year, double month, double date);
		static double UTC(double year, double month, double date, );
		static double UTC(double year, double month, double date, , double hours);
		static double UTC(double year, double month, double date, , double hours, );
		static double UTC(double year, double month, double date, double hours, double minutes, double seconds, double ms);
		static double now();
	};

	class RegExpExecArray 
	{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		void set_index(double value);
		double get_index();
		void set_input(String* value);
		String* get_input();
		String* toString();
		String* toLocaleString();
		String** concat(String*** items);
		String* join();
		String* join(const String& seperator);
		String* pop();
		double push(String** items);
		String** reverse();
		String* shift();
		String** slice(double start);
		String** slice(double start, double end);
		String** sort(double (*compareFn)(const String& a, const String& b));
		String** splice(double start);
		String** splice(double start, double deleteCount, String** items);
		double unshift(String** items);
		double indexOf(const String& searchElement);
		double indexOf(const String& searchElement, double fromIndex);
		double lastIndexOf(const String& searchElement);
		double lastIndexOf(const String& searchElement, double fromIndex);
		bool every(bool (*callbackfn)(const String& value, double index, String** array));
		bool every(bool (*callbackfn)(const String& value, double index, String** array), Object* thisArg);
		bool some(bool (*callbackfn)(const String& value, double index, String** array));
		bool some(bool (*callbackfn)(const String& value, double index, String** array), Object* thisArg);
		void forEach(void (*callbackfn)(const String& value, double index, String** array));
		void forEach(void (*callbackfn)(const String& value, double index, String** array), Object* thisArg);
		Object** map(Object* (*callbackfn)(const String& value, double index, String** array));
		Object** map(Object* (*callbackfn)(const String& value, double index, String** array), Object* thisArg);
		String** filter(bool (*callbackfn)(const String& value, double index, String** array));
		String** filter(bool (*callbackfn)(const String& value, double index, String** array), Object* thisArg);
		Object* reduce(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, String** array));
		Object* reduce(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, String** array), Object* initialValue);
		Object* reduceRight(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, String** array));
		Object* reduceRight(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, String** array), Object* initialValue);
	};

	class RegExp 
	{
	public:
		RegExpExecArray* exec(const String& string);
		bool test(const String& string);
		void set_source(String* value);
		String* get_source();
		void set_global(bool value);
		bool get_global();
		void set_ignoreCase(bool value);
		bool get_ignoreCase();
		void set_multiline(bool value);
		bool get_multiline();
		void set_lastIndex(double value);
		double get_lastIndex();
		RegExp* compile();
		static RegExp* operator()(const String& pattern, /*[*/const String& flags/*]*/);
		RegExp(const String& pattern);
		RegExp(const String& pattern, const String& flags);
		static void set_$1(String* value);
		static String* get_$1();
		static void set_$2(String* value);
		static String* get_$2();
		static void set_$3(String* value);
		static String* get_$3();
		static void set_$4(String* value);
		static String* get_$4();
		static void set_$5(String* value);
		static String* get_$5();
		static void set_$6(String* value);
		static String* get_$6();
		static void set_$7(String* value);
		static String* get_$7();
		static void set_$8(String* value);
		static String* get_$8();
		static void set_$9(String* value);
		static String* get_$9();
		static void set_lastMatch(String* value);
		static String* get_lastMatch();
	};

	class Error 
	{
	public:
		void set_name(String* value);
		String* get_name();
		void set_message(String* value);
		String* get_message();
		static Error* operator()(/*[*/const String& message/*]*/);
		Error();
		Error(const String& message);
		static void set_prototype(Error* value);
		static Error* get_prototype();
	};

	class EvalError : Error 
	{
	public:
		static EvalError* operator()(/*[*/const String& message/*]*/);
		EvalError();
		EvalError(const String& message);
		static void set_prototype(EvalError* value);
		static EvalError* get_prototype();
	};

	class RangeError : Error 
	{
	public:
		static RangeError* operator()(/*[*/const String& message/*]*/);
		RangeError();
		RangeError(const String& message);
		static void set_prototype(RangeError* value);
		static RangeError* get_prototype();
	};

	class ReferenceError : Error 
	{
	public:
		static ReferenceError* operator()(/*[*/const String& message/*]*/);
		ReferenceError();
		ReferenceError(const String& message);
		static void set_prototype(ReferenceError* value);
		static ReferenceError* get_prototype();
	};

	class SyntaxError : Error 
	{
	public:
		static SyntaxError* operator()(/*[*/const String& message/*]*/);
		SyntaxError();
		SyntaxError(const String& message);
		static void set_prototype(SyntaxError* value);
		static SyntaxError* get_prototype();
	};

	class TypeError : Error 
	{
	public:
		static TypeError* operator()(/*[*/const String& message/*]*/);
		TypeError();
		TypeError(const String& message);
		static void set_prototype(TypeError* value);
		static TypeError* get_prototype();
	};

	class URIError : Error 
	{
	public:
		static URIError* operator()(/*[*/const String& message/*]*/);
		URIError();
		URIError(const String& message);
		static void set_prototype(URIError* value);
		static URIError* get_prototype();
	};

	class JSON 
	{
	public:
		Object* parse(const String& text, Object* (*reviver)(Object* key, Object* value));
		String* stringify(Object* value);
		String* stringify(Object* value, Object* (*replacer)(const String& key, Object* value));
		String* stringify(Object* value, Object** replacer);
		String* stringify(Object* value, Object* (*replacer)(const String& key, Object* value), Object* space);
		String* stringify(Object* value, Object** replacer, Object* space);
	};
	extern JSON* JSON;

	class Array 
	{
	public:
		String* toString();
		String* toLocaleString();
		_element* concat(_element* items);
		_element* concat(_element* items);
		String* join();
		String* join(const String& seperator);
		_element* pop();
		double push(_element* items);
		_element* reverse();
		_element* shift();
		_element* slice(double start);
		_element* slice(double start, double end);
		_element* sort(double (*compareFn)(_element* a, _element* b));
		_element* splice(double start);
		_element* splice(double start, double deleteCount, _element* items);
		double unshift(_element* items);
		double indexOf(_element* searchElement);
		double indexOf(_element* searchElement, double fromIndex);
		double lastIndexOf(_element* searchElement);
		double lastIndexOf(_element* searchElement, double fromIndex);
		bool every(bool (*callbackfn)(_element* value, double index, _element* array));
		bool every(bool (*callbackfn)(_element* value, double index, _element* array), Object* thisArg);
		bool some(bool (*callbackfn)(_element* value, double index, _element* array));
		bool some(bool (*callbackfn)(_element* value, double index, _element* array), Object* thisArg);
		void forEach(void (*callbackfn)(_element* value, double index, _element* array));
		void forEach(void (*callbackfn)(_element* value, double index, _element* array), Object* thisArg);
		Object** map(Object* (*callbackfn)(_element* value, double index, _element* array));
		Object** map(Object* (*callbackfn)(_element* value, double index, _element* array), Object* thisArg);
		_element* filter(bool (*callbackfn)(_element* value, double index, _element* array));
		_element* filter(bool (*callbackfn)(_element* value, double index, _element* array), Object* thisArg);
		Object* reduce(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, _element* array));
		Object* reduce(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, _element* array), Object* initialValue);
		Object* reduceRight(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, _element* array));
		Object* reduceRight(Object* (*callbackfn)(Object* previousValue, Object* currentValue, double currentIndex, _element* array), Object* initialValue);
		void set_length(double value);
		double get_length();
		static Object** operator()(Object** items);
		Object(Object** items);
		static bool isArray(Object* arg);
		static void set_prototype(Array* value);
		static Array* get_prototype();
	};

	class ArrayBuffer 
	{
	public:
		void set_byteLength(double value);
		double get_byteLength();
		static void set_prototype(ArrayBuffer* value);
		static ArrayBuffer* get_prototype();
		static  new(double byteLength);
	};

	class ArrayBufferView 
	{
	public:
		void set_buffer(ArrayBuffer* value);
		ArrayBuffer* get_buffer();
		void set_byteOffset(double value);
		double get_byteOffset();
		void set_byteLength(double value);
		double get_byteLength();
	};

	class Int8Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Int8Array* array);
		void set(Int8Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Int8Array* subarray(double begin);
		Int8Array* subarray(double begin, double end);
		static void set_prototype(Int8Array* value);
		static Int8Array* get_prototype();
		Int8Array(double length);
		Int8Array(Int8Array* array);
		Int8Array(double[] array);
		Int8Array(ArrayBuffer* buffer);
		Int8Array(ArrayBuffer* buffer, double byteOffset);
		Int8Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class Uint8Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Uint8Array* array);
		void set(Uint8Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Uint8Array* subarray(double begin);
		Uint8Array* subarray(double begin, double end);
		static void set_prototype(Uint8Array* value);
		static Uint8Array* get_prototype();
		Uint8Array(double length);
		Uint8Array(Uint8Array* array);
		Uint8Array(double[] array);
		Uint8Array(ArrayBuffer* buffer);
		Uint8Array(ArrayBuffer* buffer, double byteOffset);
		Uint8Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class Int16Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Int16Array* array);
		void set(Int16Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Int16Array* subarray(double begin);
		Int16Array* subarray(double begin, double end);
		static void set_prototype(Int16Array* value);
		static Int16Array* get_prototype();
		Int16Array(double length);
		Int16Array(Int16Array* array);
		Int16Array(double[] array);
		Int16Array(ArrayBuffer* buffer);
		Int16Array(ArrayBuffer* buffer, double byteOffset);
		Int16Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class Uint16Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Uint16Array* array);
		void set(Uint16Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Uint16Array* subarray(double begin);
		Uint16Array* subarray(double begin, double end);
		static void set_prototype(Uint16Array* value);
		static Uint16Array* get_prototype();
		Uint16Array(double length);
		Uint16Array(Uint16Array* array);
		Uint16Array(double[] array);
		Uint16Array(ArrayBuffer* buffer);
		Uint16Array(ArrayBuffer* buffer, double byteOffset);
		Uint16Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class Int32Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Int32Array* array);
		void set(Int32Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Int32Array* subarray(double begin);
		Int32Array* subarray(double begin, double end);
		static void set_prototype(Int32Array* value);
		static Int32Array* get_prototype();
		Int32Array(double length);
		Int32Array(Int32Array* array);
		Int32Array(double[] array);
		Int32Array(ArrayBuffer* buffer);
		Int32Array(ArrayBuffer* buffer, double byteOffset);
		Int32Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class Uint32Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Uint32Array* array);
		void set(Uint32Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Uint32Array* subarray(double begin);
		Uint32Array* subarray(double begin, double end);
		static void set_prototype(Uint32Array* value);
		static Uint32Array* get_prototype();
		Uint32Array(double length);
		Uint32Array(Uint32Array* array);
		Uint32Array(double[] array);
		Uint32Array(ArrayBuffer* buffer);
		Uint32Array(ArrayBuffer* buffer, double byteOffset);
		Uint32Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class Float32Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Float32Array* array);
		void set(Float32Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Float32Array* subarray(double begin);
		Float32Array* subarray(double begin, double end);
		static void set_prototype(Float32Array* value);
		static Float32Array* get_prototype();
		Float32Array(double length);
		Float32Array(Float32Array* array);
		Float32Array(double[] array);
		Float32Array(ArrayBuffer* buffer);
		Float32Array(ArrayBuffer* buffer, double byteOffset);
		Float32Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class Float64Array : ArrayBufferView 
	{
	public:
		double operator[](double index);
		void set_BYTES_PER_ELEMENT(double value);
		double get_BYTES_PER_ELEMENT();
		void set_length(double value);
		double get_length();
		double get(double index);
		void set(double index, double value);
		void set(Float64Array* array);
		void set(Float64Array* array, double offset);
		void set(double[] array);
		void set(double[] array, double offset);
		Float64Array* subarray(double begin);
		Float64Array* subarray(double begin, double end);
		static void set_prototype(Float64Array* value);
		static Float64Array* get_prototype();
		Float64Array(double length);
		Float64Array(Float64Array* array);
		Float64Array(double[] array);
		Float64Array(ArrayBuffer* buffer);
		Float64Array(ArrayBuffer* buffer, double byteOffset);
		Float64Array(ArrayBuffer* buffer, double byteOffset, double length);
		static void set_BYTES_PER_ELEMENT(double value);
		static double get_BYTES_PER_ELEMENT();
	};

	class DataView : ArrayBufferView 
	{
	public:
		double getInt8(double byteOffset);
		double getUint8(double byteOffset);
		double getInt16(double byteOffset);
		double getInt16(double byteOffset, bool littleEndian);
		double getUint16(double byteOffset);
		double getUint16(double byteOffset, bool littleEndian);
		double getInt32(double byteOffset);
		double getInt32(double byteOffset, bool littleEndian);
		double getUint32(double byteOffset);
		double getUint32(double byteOffset, bool littleEndian);
		double getFloat32(double byteOffset);
		double getFloat32(double byteOffset, bool littleEndian);
		double getFloat64(double byteOffset);
		double getFloat64(double byteOffset, bool littleEndian);
		void setInt8(double byteOffset, double value);
		void setUint8(double byteOffset, double value);
		void setInt16(double byteOffset, double value);
		void setInt16(double byteOffset, double value, bool littleEndian);
		void setUint16(double byteOffset, double value);
		void setUint16(double byteOffset, double value, bool littleEndian);
		void setInt32(double byteOffset, double value);
		void setInt32(double byteOffset, double value, bool littleEndian);
		void setUint32(double byteOffset, double value);
		void setUint32(double byteOffset, double value, bool littleEndian);
		void setFloat32(double byteOffset, double value);
		void setFloat32(double byteOffset, double value, bool littleEndian);
		void setFloat64(double byteOffset, double value);
		void setFloat64(double byteOffset, double value, bool littleEndian);
		static void set_prototype(DataView* value);
		static DataView* get_prototype();
		DataView(ArrayBuffer* buffer);
		DataView(ArrayBuffer* buffer, double byteOffset);
		DataView(ArrayBuffer* buffer, double byteOffset, double length);
	};

	class NavigatorID 
	{
	public:
		void set_appVersion(String* value);
		String* get_appVersion();
		void set_appName(String* value);
		String* get_appName();
		void set_userAgent(String* value);
		String* get_userAgent();
		void set_platform(String* value);
		String* get_platform();
	};

	class HTMLTableElement : HTMLElement, DOML2DeprecatedBorderStyle_HTMLTableElement, DOML2DeprecatedAlignmentStyle_HTMLTableElement, MSBorderColorStyle, MSDataBindingExtensions, MSHTMLTableElementExtensions, DOML2DeprecatedBackgroundStyle, MSBorderColorHighlightStyle, MSDataBindingTableExtensions, DOML2DeprecatedBackgroundColorStyle 
	{
	public:
		void set_tBodies(HTMLCollection* value);
		HTMLCollection* get_tBodies();
		void set_width(String* value);
		String* get_width();
		void set_tHead(HTMLTableSectionElement* value);
		HTMLTableSectionElement* get_tHead();
		void set_cellSpacing(String* value);
		String* get_cellSpacing();
		void set_tFoot(HTMLTableSectionElement* value);
		HTMLTableSectionElement* get_tFoot();
		void set_frame(String* value);
		String* get_frame();
		void set_rows(HTMLCollection* value);
		HTMLCollection* get_rows();
		void set_rules(String* value);
		String* get_rules();
		void set_cellPadding(String* value);
		String* get_cellPadding();
		void set_summary(String* value);
		String* get_summary();
		void set_caption(HTMLTableCaptionElement* value);
		HTMLTableCaptionElement* get_caption();
		void deleteRow();
		void deleteRow(double index);
		HTMLElement* createTBody();
		void deleteCaption();
		HTMLElement* insertRow();
		HTMLElement* insertRow(double index);
		void deleteTFoot();
		HTMLElement* createTHead();
		void deleteTHead();
		HTMLElement* createCaption();
		HTMLElement* createTFoot();
		static void set_prototype(HTMLTableElement* value);
		static HTMLTableElement* get_prototype();
		HTMLTableElement();
	};

	class TreeWalker 
	{
	public:
		void set_whatToShow(double value);
		double get_whatToShow();
		void set_filter(NodeFilterCallback* value);
		NodeFilterCallback* get_filter();
		void set_root(Node* value);
		Node* get_root();
		void set_currentNode(Node* value);
		Node* get_currentNode();
		void set_expandEntityReferences(bool value);
		bool get_expandEntityReferences();
		Node* previousSibling();
		Node* lastChild();
		Node* nextSibling();
		Node* nextNode();
		Node* parentNode();
		Node* firstChild();
		Node* previousNode();
		static void set_prototype(TreeWalker* value);
		static TreeWalker* get_prototype();
		TreeWalker();
	};

	class GetSVGDocument 
	{
	public:
		SVGDocument* getSVGDocument();
	};

	class HTMLHtmlElementDOML2Deprecated 
	{
	public:
		void set_version(String* value);
		String* get_version();
	};

	class SVGPathSegCurvetoQuadraticRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		static void set_prototype(SVGPathSegCurvetoQuadraticRel* value);
		static SVGPathSegCurvetoQuadraticRel* get_prototype();
		SVGPathSegCurvetoQuadraticRel();
	};

	class Performance 
	{
	public:
		void set_navigation(PerformanceNavigation* value);
		PerformanceNavigation* get_navigation();
		void set_timing(PerformanceTiming* value);
		PerformanceTiming* get_timing();
		Object* toJSON();
		static void set_prototype(Performance* value);
		static Performance* get_prototype();
		Performance();
	};

	class SVGSVGElementEventHandlers 
	{
	public:
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		typedef Object* (*callback_for_onunload)(Event* ev);
		void set_onunload(callback_for_onunload value);
		callback_for_onunload get_onunload();
		typedef Object* (*callback_for_onscroll)(UIEvent* ev);
		void set_onscroll(callback_for_onscroll value);
		callback_for_onscroll get_onscroll();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onzoom)(Object* ev);
		void set_onzoom(callback_for_onzoom value);
		callback_for_onzoom get_onzoom();
		typedef Object* (*callback_for_onabort)(UIEvent* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
	};

	class MSDataBindingTableExtensions 
	{
	public:
		void set_dataPageSize(double value);
		double get_dataPageSize();
		void nextPage();
		void firstPage();
		void refresh();
		void previousPage();
		void lastPage();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLParagraphElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class CompositionEvent : UIEvent 
	{
	public:
		void set_data(String* value);
		String* get_data();
		void set_locale(String* value);
		String* get_locale();
		void initCompositionEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, const String& dataArg, const String& locale);
		static void set_prototype(CompositionEvent* value);
		static CompositionEvent* get_prototype();
		CompositionEvent();
	};

	class SVGMarkerElement : SVGElement, SVGStylable, SVGLangSpace, SVGFitToViewBox 
	{
	public:
		void set_orientType(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_orientType();
		void set_markerUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_markerUnits();
		void set_markerWidth(SVGAnimatedLength* value);
		SVGAnimatedLength* get_markerWidth();
		void set_markerHeight(SVGAnimatedLength* value);
		SVGAnimatedLength* get_markerHeight();
		void set_orientAngle(SVGAnimatedAngle* value);
		SVGAnimatedAngle* get_orientAngle();
		void set_refY(SVGAnimatedLength* value);
		SVGAnimatedLength* get_refY();
		void set_refX(SVGAnimatedLength* value);
		SVGAnimatedLength* get_refX();
		void setOrientToAngle(SVGAngle* angle);
		void setOrientToAuto();
		void set_SVG_MARKER_ORIENT_UNKNOWN(double value);
		double get_SVG_MARKER_ORIENT_UNKNOWN();
		void set_SVG_MARKER_ORIENT_ANGLE(double value);
		double get_SVG_MARKER_ORIENT_ANGLE();
		void set_SVG_MARKERUNITS_UNKNOWN(double value);
		double get_SVG_MARKERUNITS_UNKNOWN();
		void set_SVG_MARKERUNITS_STROKEWIDTH(double value);
		double get_SVG_MARKERUNITS_STROKEWIDTH();
		void set_SVG_MARKER_ORIENT_AUTO(double value);
		double get_SVG_MARKER_ORIENT_AUTO();
		void set_SVG_MARKERUNITS_USERSPACEONUSE(double value);
		double get_SVG_MARKERUNITS_USERSPACEONUSE();
		static void set_prototype(SVGMarkerElement* value);
		static SVGMarkerElement* get_prototype();
		SVGMarkerElement();
		static void set_SVG_MARKER_ORIENT_UNKNOWN(double value);
		static double get_SVG_MARKER_ORIENT_UNKNOWN();
		static void set_SVG_MARKER_ORIENT_ANGLE(double value);
		static double get_SVG_MARKER_ORIENT_ANGLE();
		static void set_SVG_MARKERUNITS_UNKNOWN(double value);
		static double get_SVG_MARKERUNITS_UNKNOWN();
		static void set_SVG_MARKERUNITS_STROKEWIDTH(double value);
		static double get_SVG_MARKERUNITS_STROKEWIDTH();
		static void set_SVG_MARKER_ORIENT_AUTO(double value);
		static double get_SVG_MARKER_ORIENT_AUTO();
		static void set_SVG_MARKERUNITS_USERSPACEONUSE(double value);
		static double get_SVG_MARKERUNITS_USERSPACEONUSE();
	};

	class WindowTimers 
	{
	public:
		void clearTimeout(double handle);
		double setTimeout(Object* expression);
		double setTimeout(Object* expression, double msec);
		double setTimeout(Object* expression, double msec, Object* language);
		void clearInterval(double handle);
		double setInterval(Object* expression);
		double setInterval(Object* expression, double msec);
		double setInterval(Object* expression, double msec, Object* language);
	};

	class CSSStyleDeclaration : CSS3Properties, SVG1_1Properties, CSS2Properties 
	{
	public:
		String* operator[](double index);
		void set_cssText(String* value);
		String* get_cssText();
		void set_length(double value);
		double get_length();
		void set_parentRule(CSSRule* value);
		CSSRule* get_parentRule();
		String* getPropertyPriority(const String& propertyName);
		String* getPropertyValue(const String& propertyName);
		String* removeProperty(const String& propertyName);
		String* item(double index);
		void setProperty(const String& propertyName, const String& value);
		void setProperty(const String& propertyName, const String& value, const String& priority);
		static void set_prototype(CSSStyleDeclaration* value);
		static CSSStyleDeclaration* get_prototype();
		CSSStyleDeclaration();
	};

	class SVGGElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		static void set_prototype(SVGGElement* value);
		static SVGGElement* get_prototype();
		SVGGElement();
	};

	class MSStyleCSSProperties : MSCSSProperties 
	{
	public:
		void set_pixelWidth(double value);
		double get_pixelWidth();
		void set_posHeight(double value);
		double get_posHeight();
		void set_posLeft(double value);
		double get_posLeft();
		void set_pixelTop(double value);
		double get_pixelTop();
		void set_pixelBottom(double value);
		double get_pixelBottom();
		void set_textDecorationNone(bool value);
		bool get_textDecorationNone();
		void set_pixelLeft(double value);
		double get_pixelLeft();
		void set_posTop(double value);
		double get_posTop();
		void set_posBottom(double value);
		double get_posBottom();
		void set_textDecorationOverline(bool value);
		bool get_textDecorationOverline();
		void set_posWidth(double value);
		double get_posWidth();
		void set_textDecorationLineThrough(bool value);
		bool get_textDecorationLineThrough();
		void set_pixelHeight(double value);
		double get_pixelHeight();
		void set_textDecorationBlink(bool value);
		bool get_textDecorationBlink();
		void set_posRight(double value);
		double get_posRight();
		void set_pixelRight(double value);
		double get_pixelRight();
		void set_textDecorationUnderline(bool value);
		bool get_textDecorationUnderline();
		static void set_prototype(MSStyleCSSProperties* value);
		static MSStyleCSSProperties* get_prototype();
		MSStyleCSSProperties();
	};

	class MSCSSStyleSheetExtensions 
	{
	public:
		void set_owningElement(Element* value);
		Element* get_owningElement();
		void set_imports(StyleSheetList* value);
		StyleSheetList* get_imports();
		void set_isAlternate(bool value);
		bool get_isAlternate();
		void set_rules(MSCSSRuleList* value);
		MSCSSRuleList* get_rules();
		void set_isPrefAlternate(bool value);
		bool get_isPrefAlternate();
		void set_readOnly(bool value);
		bool get_readOnly();
		void set_cssText(String* value);
		String* get_cssText();
		void set_href(String* value);
		String* get_href();
		void set_id(String* value);
		String* get_id();
		void set_pages(StyleSheetPageList* value);
		StyleSheetPageList* get_pages();
		double addImport(const String& bstrURL);
		double addImport(const String& bstrURL, double lIndex);
		double addPageRule(const String& bstrSelector, const String& bstrStyle);
		double addPageRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		void removeRule(double lIndex);
		double addRule(const String& bstrSelector);
		double addRule(const String& bstrSelector, const String& bstrStyle);
		double addRule(const String& bstrSelector, const String& bstrStyle, double lIndex);
		void removeImport(double lIndex);
	};

	class Navigator : NavigatorID, NavigatorOnLine, NavigatorDoNotTrack, NavigatorAbilities, NavigatorGeolocation, MSNavigatorAbilities 
	{
	public:
		static void set_prototype(Navigator* value);
		static Navigator* get_prototype();
		Navigator();
	};

	class SVGPathSegCurvetoCubicSmoothAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicSmoothAbs* value);
		static SVGPathSegCurvetoCubicSmoothAbs* get_prototype();
		SVGPathSegCurvetoCubicSmoothAbs();
	};

	class MSBorderColorStyle_HTMLFrameSetElement 
	{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class SVGZoomEvent : UIEvent 
	{
	public:
		void set_zoomRectScreen(SVGRect* value);
		SVGRect* get_zoomRectScreen();
		void set_previousScale(double value);
		double get_previousScale();
		void set_newScale(double value);
		double get_newScale();
		void set_previousTranslate(SVGPoint* value);
		SVGPoint* get_previousTranslate();
		void set_newTranslate(SVGPoint* value);
		SVGPoint* get_newTranslate();
		static void set_prototype(SVGZoomEvent* value);
		static SVGZoomEvent* get_prototype();
		SVGZoomEvent();
	};

	class NodeSelector 
	{
	public:
		NodeList* querySelectorAll(const String& selectors);
		Element* querySelector(const String& selectors);
	};

	class HTMLTableDataCellElement : HTMLTableCellElement, MSHTMLTableDataCellElementExtensions 
	{
	public:
		static void set_prototype(HTMLTableDataCellElement* value);
		static HTMLTableDataCellElement* get_prototype();
		HTMLTableDataCellElement();
	};

	class MSHTMLDirectoryElementExtensions : DOML2DeprecatedListNumberingAndBulletStyle 
	{
	public:
	};

	class HTMLBaseElement : HTMLElement 
	{
	public:
		void set_target(String* value);
		String* get_target();
		void set_href(String* value);
		String* get_href();
		static void set_prototype(HTMLBaseElement* value);
		static HTMLBaseElement* get_prototype();
		HTMLBaseElement();
	};

	class ClientRect 
	{
	public:
		void set_left(double value);
		double get_left();
		void set_width(double value);
		double get_width();
		void set_right(double value);
		double get_right();
		void set_top(double value);
		double get_top();
		void set_bottom(double value);
		double get_bottom();
		void set_height(double value);
		double get_height();
		static void set_prototype(ClientRect* value);
		static ClientRect* get_prototype();
		ClientRect();
	};

	class PositionErrorCallback 
	{
	public:
		void operator()(PositionError* error);
	};

	class DOMImplementation : DOMHTMLImplementation 
	{
	public:
		DocumentType* createDocumentType(const String& qualifiedName, const String& publicId, const String& systemId);
		Document* createDocument(const String& namespaceURI, const String& qualifiedName, DocumentType* doctype);
		bool hasFeature(const String& feature);
		bool hasFeature(const String& feature, const String& version);
		static void set_prototype(DOMImplementation* value);
		static DOMImplementation* get_prototype();
		DOMImplementation();
	};

	class DOML2DeprecatedWidthStyle_HTMLBlockElement 
	{
	public:
		void set_width(double value);
		double get_width();
	};

	class SVGUnitTypes 
	{
	public:
		void set_SVG_UNIT_TYPE_UNKNOWN(double value);
		double get_SVG_UNIT_TYPE_UNKNOWN();
		void set_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX(double value);
		double get_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX();
		void set_SVG_UNIT_TYPE_USERSPACEONUSE(double value);
		double get_SVG_UNIT_TYPE_USERSPACEONUSE();
		static void set_prototype(SVGUnitTypes* value);
		static SVGUnitTypes* get_prototype();
		SVGUnitTypes();
		static void set_SVG_UNIT_TYPE_UNKNOWN(double value);
		static double get_SVG_UNIT_TYPE_UNKNOWN();
		static void set_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX(double value);
		static double get_SVG_UNIT_TYPE_OBJECTBOUNDINGBOX();
		static void set_SVG_UNIT_TYPE_USERSPACEONUSE(double value);
		static double get_SVG_UNIT_TYPE_USERSPACEONUSE();
	};

	class DocumentRange 
	{
	public:
		Range* createRange();
	};

	class MSHTMLDocumentExtensions 
	{
	public:
		typedef Object* (*callback_for_onrowexit)(MSEventObj* ev);
		void set_onrowexit(callback_for_onrowexit value);
		callback_for_onrowexit get_onrowexit();
		void set_compatible(MSCompatibleInfoCollection* value);
		MSCompatibleInfoCollection* get_compatible();
		typedef Object* (*callback_for_oncontrolselect)(MSEventObj* ev);
		void set_oncontrolselect(callback_for_oncontrolselect value);
		callback_for_oncontrolselect get_oncontrolselect();
		typedef Object* (*callback_for_onrowsinserted)(MSEventObj* ev);
		void set_onrowsinserted(callback_for_onrowsinserted value);
		callback_for_onrowsinserted get_onrowsinserted();
		typedef Object* (*callback_for_onpropertychange)(MSEventObj* ev);
		void set_onpropertychange(callback_for_onpropertychange value);
		callback_for_onpropertychange get_onpropertychange();
		void set_media(String* value);
		String* get_media();
		typedef Object* (*callback_for_onafterupdate)(MSEventObj* ev);
		void set_onafterupdate(callback_for_onafterupdate value);
		callback_for_onafterupdate get_onafterupdate();
		typedef Object* (*callback_for_onhelp)(Event* ev);
		void set_onhelp(callback_for_onhelp value);
		callback_for_onhelp get_onhelp();
		void set_uniqueID(String* value);
		String* get_uniqueID();
		typedef Object* (*callback_for_onbeforeactivate)(UIEvent* ev);
		void set_onbeforeactivate(callback_for_onbeforeactivate value);
		callback_for_onbeforeactivate get_onbeforeactivate();
		typedef Object* (*callback_for_onstoragecommit)(StorageEvent* ev);
		void set_onstoragecommit(callback_for_onstoragecommit value);
		callback_for_onstoragecommit get_onstoragecommit();
		typedef Object* (*callback_for_onselectionchange)(Event* ev);
		void set_onselectionchange(callback_for_onselectionchange value);
		callback_for_onselectionchange get_onselectionchange();
		void set_documentMode(double value);
		double get_documentMode();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		typedef Object* (*callback_for_ondataavailable)(MSEventObj* ev);
		void set_ondataavailable(callback_for_ondataavailable value);
		callback_for_ondataavailable get_ondataavailable();
		typedef Object* (*callback_for_onbeforeupdate)(MSEventObj* ev);
		void set_onbeforeupdate(callback_for_onbeforeupdate value);
		callback_for_onbeforeupdate get_onbeforeupdate();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		void set_security(String* value);
		String* get_security();
		void set_namespaces(MSNamespaceInfoCollection* value);
		MSNamespaceInfoCollection* get_namespaces();
		typedef Object* (*callback_for_ondatasetcomplete)(MSEventObj* ev);
		void set_ondatasetcomplete(callback_for_ondatasetcomplete value);
		callback_for_ondatasetcomplete get_ondatasetcomplete();
		typedef Object* (*callback_for_onbeforedeactivate)(UIEvent* ev);
		void set_onbeforedeactivate(callback_for_onbeforedeactivate value);
		callback_for_onbeforedeactivate get_onbeforedeactivate();
		typedef Object* (*callback_for_onstop)(Event* ev);
		void set_onstop(callback_for_onstop value);
		callback_for_onstop get_onstop();
		typedef Object* (*callback_for_onactivate)(UIEvent* ev);
		void set_onactivate(callback_for_onactivate value);
		callback_for_onactivate get_onactivate();
		typedef Object* (*callback_for_onmssitemodejumplistitemremoved)(MSSiteModeEvent* ev);
		void set_onmssitemodejumplistitemremoved(callback_for_onmssitemodejumplistitemremoved value);
		callback_for_onmssitemodejumplistitemremoved get_onmssitemodejumplistitemremoved();
		void set_frames(Window* value);
		Window* get_frames();
		typedef Object* (*callback_for_onselectstart)(Event* ev);
		void set_onselectstart(callback_for_onselectstart value);
		callback_for_onselectstart get_onselectstart();
		typedef Object* (*callback_for_onerrorupdate)(MSEventObj* ev);
		void set_onerrorupdate(callback_for_onerrorupdate value);
		callback_for_onerrorupdate get_onerrorupdate();
		void set_parentWindow(Window* value);
		Window* get_parentWindow();
		typedef Object* (*callback_for_ondeactivate)(UIEvent* ev);
		void set_ondeactivate(callback_for_ondeactivate value);
		callback_for_ondeactivate get_ondeactivate();
		typedef Object* (*callback_for_ondatasetchanged)(MSEventObj* ev);
		void set_ondatasetchanged(callback_for_ondatasetchanged value);
		callback_for_ondatasetchanged get_ondatasetchanged();
		typedef Object* (*callback_for_onrowsdelete)(MSEventObj* ev);
		void set_onrowsdelete(callback_for_onrowsdelete value);
		callback_for_onrowsdelete get_onrowsdelete();
		typedef Object* (*callback_for_onmsthumbnailclick)(MSSiteModeEvent* ev);
		void set_onmsthumbnailclick(callback_for_onmsthumbnailclick value);
		callback_for_onmsthumbnailclick get_onmsthumbnailclick();
		typedef Object* (*callback_for_onrowenter)(MSEventObj* ev);
		void set_onrowenter(callback_for_onrowenter value);
		callback_for_onrowenter get_onrowenter();
		typedef Object* (*callback_for_onbeforeeditfocus)(MSEventObj* ev);
		void set_onbeforeeditfocus(callback_for_onbeforeeditfocus value);
		callback_for_onbeforeeditfocus get_onbeforeeditfocus();
		void set_Script(MSScriptHost* value);
		MSScriptHost* get_Script();
		typedef Object* (*callback_for_oncellchange)(MSEventObj* ev);
		void set_oncellchange(callback_for_oncellchange value);
		callback_for_oncellchange get_oncellchange();
		void set_URLUnencoded(String* value);
		String* get_URLUnencoded();
		void updateSettings();
		bool execCommandShowHelp(const String& commandId);
		void releaseCapture();
		void focus();
	};

	class CSS2Properties 
	{
	public:
		void set_backgroundAttachment(String* value);
		String* get_backgroundAttachment();
		void set_visibility(String* value);
		String* get_visibility();
		void set_fontFamily(String* value);
		String* get_fontFamily();
		void set_borderRightStyle(String* value);
		String* get_borderRightStyle();
		void set_clear(String* value);
		String* get_clear();
		void set_content(String* value);
		String* get_content();
		void set_counterIncrement(String* value);
		String* get_counterIncrement();
		void set_orphans(String* value);
		String* get_orphans();
		void set_marginBottom(String* value);
		String* get_marginBottom();
		void set_borderStyle(String* value);
		String* get_borderStyle();
		void set_counterReset(String* value);
		String* get_counterReset();
		void set_outlineWidth(String* value);
		String* get_outlineWidth();
		void set_marginRight(String* value);
		String* get_marginRight();
		void set_paddingLeft(String* value);
		String* get_paddingLeft();
		void set_borderBottom(String* value);
		String* get_borderBottom();
		void set_marginTop(String* value);
		String* get_marginTop();
		void set_borderTopColor(String* value);
		String* get_borderTopColor();
		void set_top(String* value);
		String* get_top();
		void set_fontWeight(String* value);
		String* get_fontWeight();
		void set_textIndent(String* value);
		String* get_textIndent();
		void set_borderRight(String* value);
		String* get_borderRight();
		void set_width(String* value);
		String* get_width();
		void set_listStyleImage(String* value);
		String* get_listStyleImage();
		void set_cursor(String* value);
		String* get_cursor();
		void set_listStylePosition(String* value);
		String* get_listStylePosition();
		void set_borderTopStyle(String* value);
		String* get_borderTopStyle();
		void set_direction(String* value);
		String* get_direction();
		void set_maxWidth(String* value);
		String* get_maxWidth();
		void set_color(String* value);
		String* get_color();
		void set_clip(String* value);
		String* get_clip();
		void set_borderRightWidth(String* value);
		String* get_borderRightWidth();
		void set_verticalAlign(String* value);
		String* get_verticalAlign();
		void set_pageBreakAfter(String* value);
		String* get_pageBreakAfter();
		void set_overflow(String* value);
		String* get_overflow();
		void set_borderBottomStyle(String* value);
		String* get_borderBottomStyle();
		void set_borderLeftStyle(String* value);
		String* get_borderLeftStyle();
		void set_fontStretch(String* value);
		String* get_fontStretch();
		void set_emptyCells(String* value);
		String* get_emptyCells();
		void set_padding(String* value);
		String* get_padding();
		void set_paddingRight(String* value);
		String* get_paddingRight();
		void set_background(String* value);
		String* get_background();
		void set_bottom(String* value);
		String* get_bottom();
		void set_height(String* value);
		String* get_height();
		void set_paddingTop(String* value);
		String* get_paddingTop();
		void set_right(String* value);
		String* get_right();
		void set_borderLeftWidth(String* value);
		String* get_borderLeftWidth();
		void set_borderLeft(String* value);
		String* get_borderLeft();
		void set_backgroundPosition(String* value);
		String* get_backgroundPosition();
		void set_backgroundColor(String* value);
		String* get_backgroundColor();
		void set_widows(String* value);
		String* get_widows();
		void set_lineHeight(String* value);
		String* get_lineHeight();
		void set_pageBreakInside(String* value);
		String* get_pageBreakInside();
		void set_borderTopWidth(String* value);
		String* get_borderTopWidth();
		void set_left(String* value);
		String* get_left();
		void set_outlineStyle(String* value);
		String* get_outlineStyle();
		void set_borderTop(String* value);
		String* get_borderTop();
		void set_paddingBottom(String* value);
		String* get_paddingBottom();
		void set_outlineColor(String* value);
		String* get_outlineColor();
		void set_wordSpacing(String* value);
		String* get_wordSpacing();
		void set_outline(String* value);
		String* get_outline();
		void set_font(String* value);
		String* get_font();
		void set_marginLeft(String* value);
		String* get_marginLeft();
		void set_display(String* value);
		String* get_display();
		void set_maxHeight(String* value);
		String* get_maxHeight();
		void set_cssFloat(String* value);
		String* get_cssFloat();
		void set_letterSpacing(String* value);
		String* get_letterSpacing();
		void set_borderSpacing(String* value);
		String* get_borderSpacing();
		void set_backgroundRepeat(String* value);
		String* get_backgroundRepeat();
		void set_fontSizeAdjust(String* value);
		String* get_fontSizeAdjust();
		void set_borderLeftColor(String* value);
		String* get_borderLeftColor();
		void set_borderWidth(String* value);
		String* get_borderWidth();
		void set_backgroundImage(String* value);
		String* get_backgroundImage();
		void set_listStyleType(String* value);
		String* get_listStyleType();
		void set_whiteSpace(String* value);
		String* get_whiteSpace();
		void set_fontStyle(String* value);
		String* get_fontStyle();
		void set_borderBottomColor(String* value);
		String* get_borderBottomColor();
		void set_minWidth(String* value);
		String* get_minWidth();
		void set_position(String* value);
		String* get_position();
		void set_zIndex(String* value);
		String* get_zIndex();
		void set_borderColor(String* value);
		String* get_borderColor();
		void set_listStyle(String* value);
		String* get_listStyle();
		void set_captionSide(String* value);
		String* get_captionSide();
		void set_borderCollapse(String* value);
		String* get_borderCollapse();
		void set_fontVariant(String* value);
		String* get_fontVariant();
		void set_quotes(String* value);
		String* get_quotes();
		void set_tableLayout(String* value);
		String* get_tableLayout();
		void set_unicodeBidi(String* value);
		String* get_unicodeBidi();
		void set_borderBottomWidth(String* value);
		String* get_borderBottomWidth();
		void set_minHeight(String* value);
		String* get_minHeight();
		void set_textDecoration(String* value);
		String* get_textDecoration();
		void set_fontSize(String* value);
		String* get_fontSize();
		void set_border(String* value);
		String* get_border();
		void set_pageBreakBefore(String* value);
		String* get_pageBreakBefore();
		void set_textAlign(String* value);
		String* get_textAlign();
		void set_textTransform(String* value);
		String* get_textTransform();
		void set_margin(String* value);
		String* get_margin();
		void set_borderRightColor(String* value);
		String* get_borderRightColor();
	};

	class MSImageResourceExtensions_HTMLInputElement 
	{
	public:
		void set_dynsrc(String* value);
		String* get_dynsrc();
		void set_vrml(String* value);
		String* get_vrml();
		void set_lowsrc(String* value);
		String* get_lowsrc();
		void set_start(String* value);
		String* get_start();
		void set_loop(double value);
		double get_loop();
	};

	class MSHTMLEmbedElementExtensions 
	{
	public:
		void set_palette(String* value);
		String* get_palette();
		void set_hidden(String* value);
		String* get_hidden();
		void set_pluginspage(String* value);
		String* get_pluginspage();
		void set_units(String* value);
		String* get_units();
	};

	class MSHTMLModElementExtensions 
	{
	public:
	};

	class Element : Node, NodeSelector, ElementTraversal, MSElementExtensions 
	{
	public:
		void set_scrollTop(double value);
		double get_scrollTop();
		void set_clientLeft(double value);
		double get_clientLeft();
		void set_scrollLeft(double value);
		double get_scrollLeft();
		void set_tagName(String* value);
		String* get_tagName();
		void set_clientWidth(double value);
		double get_clientWidth();
		void set_scrollWidth(double value);
		double get_scrollWidth();
		void set_clientHeight(double value);
		double get_clientHeight();
		void set_clientTop(double value);
		double get_clientTop();
		void set_scrollHeight(double value);
		double get_scrollHeight();
		String* getAttribute();
		String* getAttribute(const String& name);
		NodeList* getElementsByTagNameNS(const String& namespaceURI, const String& localName);
		bool hasAttributeNS(const String& namespaceURI, const String& localName);
		ClientRect* getBoundingClientRect();
		String* getAttributeNS(const String& namespaceURI, const String& localName);
		Attr* getAttributeNodeNS(const String& namespaceURI, const String& localName);
		Attr* setAttributeNodeNS(Attr* newAttr);
		bool hasAttribute(const String& name);
		void removeAttribute();
		void removeAttribute(const String& name);
		void setAttributeNS(const String& namespaceURI, const String& qualifiedName, const String& value);
		Attr* getAttributeNode(const String& name);
		NodeList* getElementsByTagName(const String& name);
		Attr* setAttributeNode(Attr* newAttr);
		ClientRectList* getClientRects();
		Attr* removeAttributeNode(Attr* oldAttr);
		void setAttribute();
		void setAttribute(, const String& name);
		void setAttribute(const String& name, const String& value);
		void removeAttributeNS(const String& namespaceURI, const String& localName);
		static void set_prototype(Element* value);
		static Element* get_prototype();
		Element();
	};

	class SVGDocument 
	{
	public:
		void set_rootElement(SVGSVGElement* value);
		SVGSVGElement* get_rootElement();
	};

	class HTMLNextIdElement : HTMLElement 
	{
	public:
		void set_n(String* value);
		String* get_n();
		static void set_prototype(HTMLNextIdElement* value);
		static HTMLNextIdElement* get_prototype();
		HTMLNextIdElement();
	};

	class SVGPathSegMovetoRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegMovetoRel* value);
		static SVGPathSegMovetoRel* get_prototype();
		SVGPathSegMovetoRel();
	};

	class SVGLineElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		void set_y1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y1();
		void set_x2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x2();
		void set_x1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x1();
		void set_y2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y2();
		static void set_prototype(SVGLineElement* value);
		static SVGLineElement* get_prototype();
		SVGLineElement();
	};

	class HTMLParagraphElement : HTMLElement, DOML2DeprecatedAlignmentStyle_HTMLParagraphElement, MSHTMLParagraphElementExtensions 
	{
	public:
		static void set_prototype(HTMLParagraphElement* value);
		static HTMLParagraphElement* get_prototype();
		HTMLParagraphElement();
	};

	class MSHTMLTextAreaElementExtensions 
	{
	public:
		void set_status(Object* value);
		Object* get_status();
		TextRange* createTextRange();
	};

	class ErrorFunction 
	{
	public:
		Object* operator()(Object* eventOrMessage, const String& source, double fileno);
	};

	class HTMLAreasCollection : HTMLCollection 
	{
	public:
		void remove();
		void remove(double index);
		void add(HTMLElement* element);
		void add(HTMLElement* element, Object* before);
		static void set_prototype(HTMLAreasCollection* value);
		static HTMLAreasCollection* get_prototype();
		HTMLAreasCollection();
	};

	class SVGDescElement : SVGElement, SVGStylable, SVGLangSpace 
	{
	public:
		static void set_prototype(SVGDescElement* value);
		static SVGDescElement* get_prototype();
		SVGDescElement();
	};

	class Node : EventTarget 
	{
	public:
		void set_nodeType(double value);
		double get_nodeType();
		void set_previousSibling(Node* value);
		Node* get_previousSibling();
		void set_localName(String* value);
		String* get_localName();
		void set_namespaceURI(String* value);
		String* get_namespaceURI();
		void set_textContent(String* value);
		String* get_textContent();
		void set_parentNode(Node* value);
		Node* get_parentNode();
		void set_nextSibling(Node* value);
		Node* get_nextSibling();
		void set_nodeValue(String* value);
		String* get_nodeValue();
		void set_lastChild(Node* value);
		Node* get_lastChild();
		void set_childNodes(NodeList* value);
		NodeList* get_childNodes();
		void set_nodeName(String* value);
		String* get_nodeName();
		void set_ownerDocument(Document* value);
		Document* get_ownerDocument();
		void set_attributes(Attr* value);
		Attr* get_attributes();
		void set_firstChild(Node* value);
		Node* get_firstChild();
		void set_prefix(String* value);
		String* get_prefix();
		Node* removeChild(Node* oldChild);
		Node* appendChild(Node* newChild);
		bool isSupported(const String& feature, const String& version);
		bool isEqualNode(Node* arg);
		String* lookupPrefix(const String& namespaceURI);
		bool isDefaultNamespace(const String& namespaceURI);
		double compareDocumentPosition(Node* other);
		void normalize();
		bool isSameNode(Node* other);
		bool hasAttributes();
		String* lookupNamespaceURI(const String& prefix);
		Node* cloneNode();
		Node* cloneNode(bool deep);
		bool hasChildNodes();
		Node* replaceChild(Node* newChild, Node* oldChild);
		Node* insertBefore(Node* newChild);
		Node* insertBefore(Node* newChild, Node* refChild);
		void set_ENTITY_REFERENCE_NODE(double value);
		double get_ENTITY_REFERENCE_NODE();
		void set_ATTRIBUTE_NODE(double value);
		double get_ATTRIBUTE_NODE();
		void set_DOCUMENT_FRAGMENT_NODE(double value);
		double get_DOCUMENT_FRAGMENT_NODE();
		void set_TEXT_NODE(double value);
		double get_TEXT_NODE();
		void set_ELEMENT_NODE(double value);
		double get_ELEMENT_NODE();
		void set_COMMENT_NODE(double value);
		double get_COMMENT_NODE();
		void set_DOCUMENT_POSITION_DISCONNECTED(double value);
		double get_DOCUMENT_POSITION_DISCONNECTED();
		void set_DOCUMENT_POSITION_CONTAINED_BY(double value);
		double get_DOCUMENT_POSITION_CONTAINED_BY();
		void set_DOCUMENT_POSITION_CONTAINS(double value);
		double get_DOCUMENT_POSITION_CONTAINS();
		void set_DOCUMENT_TYPE_NODE(double value);
		double get_DOCUMENT_TYPE_NODE();
		void set_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC(double value);
		double get_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC();
		void set_DOCUMENT_NODE(double value);
		double get_DOCUMENT_NODE();
		void set_ENTITY_NODE(double value);
		double get_ENTITY_NODE();
		void set_PROCESSING_INSTRUCTION_NODE(double value);
		double get_PROCESSING_INSTRUCTION_NODE();
		void set_CDATA_SECTION_NODE(double value);
		double get_CDATA_SECTION_NODE();
		void set_NOTATION_NODE(double value);
		double get_NOTATION_NODE();
		void set_DOCUMENT_POSITION_FOLLOWING(double value);
		double get_DOCUMENT_POSITION_FOLLOWING();
		void set_DOCUMENT_POSITION_PRECEDING(double value);
		double get_DOCUMENT_POSITION_PRECEDING();
		static void set_prototype(Node* value);
		static Node* get_prototype();
		Node();
		static void set_ENTITY_REFERENCE_NODE(double value);
		static double get_ENTITY_REFERENCE_NODE();
		static void set_ATTRIBUTE_NODE(double value);
		static double get_ATTRIBUTE_NODE();
		static void set_DOCUMENT_FRAGMENT_NODE(double value);
		static double get_DOCUMENT_FRAGMENT_NODE();
		static void set_TEXT_NODE(double value);
		static double get_TEXT_NODE();
		static void set_ELEMENT_NODE(double value);
		static double get_ELEMENT_NODE();
		static void set_COMMENT_NODE(double value);
		static double get_COMMENT_NODE();
		static void set_DOCUMENT_POSITION_DISCONNECTED(double value);
		static double get_DOCUMENT_POSITION_DISCONNECTED();
		static void set_DOCUMENT_POSITION_CONTAINED_BY(double value);
		static double get_DOCUMENT_POSITION_CONTAINED_BY();
		static void set_DOCUMENT_POSITION_CONTAINS(double value);
		static double get_DOCUMENT_POSITION_CONTAINS();
		static void set_DOCUMENT_TYPE_NODE(double value);
		static double get_DOCUMENT_TYPE_NODE();
		static void set_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC(double value);
		static double get_DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC();
		static void set_DOCUMENT_NODE(double value);
		static double get_DOCUMENT_NODE();
		static void set_ENTITY_NODE(double value);
		static double get_ENTITY_NODE();
		static void set_PROCESSING_INSTRUCTION_NODE(double value);
		static double get_PROCESSING_INSTRUCTION_NODE();
		static void set_CDATA_SECTION_NODE(double value);
		static double get_CDATA_SECTION_NODE();
		static void set_NOTATION_NODE(double value);
		static double get_NOTATION_NODE();
		static void set_DOCUMENT_POSITION_FOLLOWING(double value);
		static double get_DOCUMENT_POSITION_FOLLOWING();
		static void set_DOCUMENT_POSITION_PRECEDING(double value);
		static double get_DOCUMENT_POSITION_PRECEDING();
	};

	class MSHTMLLegendElementExtensions 
	{
	public:
	};

	class MSCSSStyleDeclarationExtensions 
	{
	public:
		Object* getAttribute(const String& attributeName);
		Object* getAttribute(const String& attributeName, double flags);
		void setAttribute(const String& attributeName, Object* AttributeValue);
		void setAttribute(const String& attributeName, Object* AttributeValue, double flags);
		bool removeAttribute(const String& attributeName);
		bool removeAttribute(const String& attributeName, double flags);
	};

	class SVGPathSegCurvetoQuadraticSmoothRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegCurvetoQuadraticSmoothRel* value);
		static SVGPathSegCurvetoQuadraticSmoothRel* get_prototype();
		SVGPathSegCurvetoQuadraticSmoothRel();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableRowElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class DOML2DeprecatedBorderStyle_HTMLObjectElement 
	{
	public:
		void set_border(String* value);
		String* get_border();
	};

	class MSHTMLSpanElementExtensions 
	{
	public:
	};

	class MSHTMLObjectElementExtensions 
	{
	public:
		void set_object(Object* value);
		Object* get_object();
		void set_alt(String* value);
		String* get_alt();
		void set_classid(String* value);
		String* get_classid();
		void set_altHtml(String* value);
		String* get_altHtml();
		void set_BaseHref(String* value);
		String* get_BaseHref();
	};

	class DOML2DeprecatedListSpaceReduction 
	{
	public:
		void set_compact(bool value);
		bool get_compact();
	};

	class CSS3Properties 
	{
	public:
		void set_textAlignLast(String* value);
		String* get_textAlignLast();
		void set_textUnderlinePosition(String* value);
		String* get_textUnderlinePosition();
		void set_wordWrap(String* value);
		String* get_wordWrap();
		void set_borderTopLeftRadius(String* value);
		String* get_borderTopLeftRadius();
		void set_backgroundClip(String* value);
		String* get_backgroundClip();
		void set_msTransformOrigin(String* value);
		String* get_msTransformOrigin();
		void set_opacity(String* value);
		String* get_opacity();
		void set_overflowY(String* value);
		String* get_overflowY();
		void set_boxShadow(String* value);
		String* get_boxShadow();
		void set_backgroundSize(String* value);
		String* get_backgroundSize();
		void set_wordBreak(String* value);
		String* get_wordBreak();
		void set_boxSizing(String* value);
		String* get_boxSizing();
		void set_rubyOverhang(String* value);
		String* get_rubyOverhang();
		void set_rubyAlign(String* value);
		String* get_rubyAlign();
		void set_textJustify(String* value);
		String* get_textJustify();
		void set_borderRadius(String* value);
		String* get_borderRadius();
		void set_overflowX(String* value);
		String* get_overflowX();
		void set_borderTopRightRadius(String* value);
		String* get_borderTopRightRadius();
		void set_msTransform(String* value);
		String* get_msTransform();
		void set_borderBottomLeftRadius(String* value);
		String* get_borderBottomLeftRadius();
		void set_rubyPosition(String* value);
		String* get_rubyPosition();
		void set_borderBottomRightRadius(String* value);
		String* get_borderBottomRightRadius();
		void set_backgroundOrigin(String* value);
		String* get_backgroundOrigin();
		void set_textOverflow(String* value);
		String* get_textOverflow();
	};

	class MSScriptHost 
	{
	public:
		static void set_prototype(MSScriptHost* value);
		static MSScriptHost* get_prototype();
		MSScriptHost();
	};

	class SVGClipPathElement : SVGElement, SVGUnitTypes, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		void set_clipPathUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_clipPathUnits();
		static void set_prototype(SVGClipPathElement* value);
		static SVGClipPathElement* get_prototype();
		SVGClipPathElement();
	};

	class MouseEvent : UIEvent, MSMouseEventExtensions 
	{
	public:
		void set_pageX(double value);
		double get_pageX();
		void set_offsetY(double value);
		double get_offsetY();
		void set_x(double value);
		double get_x();
		void set_y(double value);
		double get_y();
		void set_altKey(bool value);
		bool get_altKey();
		void set_metaKey(bool value);
		bool get_metaKey();
		void set_ctrlKey(bool value);
		bool get_ctrlKey();
		void set_offsetX(double value);
		double get_offsetX();
		void set_screenX(double value);
		double get_screenX();
		void set_clientY(double value);
		double get_clientY();
		void set_shiftKey(bool value);
		bool get_shiftKey();
		void set_screenY(double value);
		double get_screenY();
		void set_relatedTarget(EventTarget* value);
		EventTarget* get_relatedTarget();
		void set_button(double value);
		double get_button();
		void set_pageY(double value);
		double get_pageY();
		void set_buttons(double value);
		double get_buttons();
		void set_clientX(double value);
		double get_clientX();
		void initMouseEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg);
		bool getModifierState(const String& keyArg);
		static void set_prototype(MouseEvent* value);
		static MouseEvent* get_prototype();
		MouseEvent();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class RangeException 
	{
	public:
		void set_code(double value);
		double get_code();
		void set_message(String* value);
		String* get_message();
		String* toString();
		void set_INVALID_NODE_TYPE_ERR(double value);
		double get_INVALID_NODE_TYPE_ERR();
		void set_BAD_BOUNDARYPOINTS_ERR(double value);
		double get_BAD_BOUNDARYPOINTS_ERR();
		static void set_prototype(RangeException* value);
		static RangeException* get_prototype();
		RangeException();
		static void set_INVALID_NODE_TYPE_ERR(double value);
		static double get_INVALID_NODE_TYPE_ERR();
		static void set_BAD_BOUNDARYPOINTS_ERR(double value);
		static double get_BAD_BOUNDARYPOINTS_ERR();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLHRElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class SVGTextPositioningElement : SVGTextContentElement 
	{
	public:
		void set_y(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_y();
		void set_rotate(SVGAnimatedNumberList* value);
		SVGAnimatedNumberList* get_rotate();
		void set_dy(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_dy();
		void set_x(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_x();
		void set_dx(SVGAnimatedLengthList* value);
		SVGAnimatedLengthList* get_dx();
		static void set_prototype(SVGTextPositioningElement* value);
		static SVGTextPositioningElement* get_prototype();
		SVGTextPositioningElement();
	};

	class HTMLAppletElement : HTMLElement, DOML2DeprecatedWidthStyle_HTMLAppletElement, DOML2DeprecatedMarginStyle_HTMLObjectElement, MSHTMLAppletElementExtensions, MSDataBindingExtensions, MSDataBindingRecordSetExtensions, DOML2DeprecatedAlignmentStyle_HTMLObjectElement 
	{
	public:
		void set_object(String* value);
		String* get_object();
		void set_archive(String* value);
		String* get_archive();
		void set_codeBase(String* value);
		String* get_codeBase();
		void set_alt(String* value);
		String* get_alt();
		void set_name(String* value);
		String* get_name();
		void set_height(String* value);
		String* get_height();
		void set_code(String* value);
		String* get_code();
		static void set_prototype(HTMLAppletElement* value);
		static HTMLAppletElement* get_prototype();
		HTMLAppletElement();
	};

	class MSHTMLFieldSetElementExtensions : DOML2DeprecatedAlignmentStyle_HTMLFieldSetElement 
	{
	public:
	};

	class DocumentEvent 
	{
	public:
		Event* createEvent(const String& eventInterface);
	};

	class MSHTMLUnknownElementExtensions 
	{
	public:
	};

	class TextMetrics 
	{
	public:
		void set_width(double value);
		double get_width();
		static void set_prototype(TextMetrics* value);
		static TextMetrics* get_prototype();
		TextMetrics();
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLBodyElement 
	{
	public:
		void set_noWrap(bool value);
		bool get_noWrap();
	};

	class HTMLOListElement : HTMLElement, DOML2DeprecatedListNumberingAndBulletStyle, DOML2DeprecatedListSpaceReduction, MSHTMLOListElementExtensions 
	{
	public:
		void set_start(double value);
		double get_start();
		static void set_prototype(HTMLOListElement* value);
		static HTMLOListElement* get_prototype();
		HTMLOListElement();
	};

	class MSHTMLTableCaptionElementExtensions 
	{
	public:
		void set_vAlign(String* value);
		String* get_vAlign();
	};

	class SVGAnimatedString 
	{
	public:
		void set_animVal(String* value);
		String* get_animVal();
		void set_baseVal(String* value);
		String* get_baseVal();
		static void set_prototype(SVGAnimatedString* value);
		static SVGAnimatedString* get_prototype();
		SVGAnimatedString();
	};

	class SVGPathSegLinetoVerticalRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		static void set_prototype(SVGPathSegLinetoVerticalRel* value);
		static SVGPathSegLinetoVerticalRel* get_prototype();
		SVGPathSegLinetoVerticalRel();
	};

	class CDATASection : Text 
	{
	public:
		static void set_prototype(CDATASection* value);
		static CDATASection* get_prototype();
		CDATASection();
	};

	class StyleMedia 
	{
	public:
		void set_type(String* value);
		String* get_type();
		bool matchMedium(const String& mediaquery);
		static void set_prototype(StyleMedia* value);
		static StyleMedia* get_prototype();
		StyleMedia();
	};

	class TextRange 
	{
	public:
		void set_boundingLeft(double value);
		double get_boundingLeft();
		void set_htmlText(String* value);
		String* get_htmlText();
		void set_offsetLeft(double value);
		double get_offsetLeft();
		void set_boundingWidth(double value);
		double get_boundingWidth();
		void set_boundingHeight(double value);
		double get_boundingHeight();
		void set_boundingTop(double value);
		double get_boundingTop();
		void set_text(String* value);
		String* get_text();
		void set_offsetTop(double value);
		double get_offsetTop();
		void moveToPoint(double x, double y);
		Object* queryCommandValue(const String& cmdID);
		String* getBookmark();
		double move(const String& Unit);
		double move(const String& Unit, double Count);
		bool queryCommandIndeterm(const String& cmdID);
		void scrollIntoView();
		void scrollIntoView(bool fStart);
		bool findText(const String& string);
		bool findText(const String& string, double count);
		bool findText(const String& string, double count, double flags);
		bool execCommand(const String& cmdID);
		bool execCommand(const String& cmdID, bool showUI);
		bool execCommand(const String& cmdID, bool showUI, Object* value);
		ClientRect* getBoundingClientRect();
		bool moveToBookmark(const String& Bookmark);
		bool isEqual(TextRange* range);
		TextRange* duplicate();
		void collapse();
		void collapse(bool Start);
		String* queryCommandText(const String& cmdID);
		void select();
		void pasteHTML(const String& html);
		bool inRange(TextRange* range);
		double moveEnd(const String& Unit);
		double moveEnd(const String& Unit, double Count);
		ClientRectList* getClientRects();
		double moveStart(const String& Unit);
		double moveStart(const String& Unit, double Count);
		Element* parentElement();
		bool queryCommandState(const String& cmdID);
		double compareEndPoints(const String& how, TextRange* sourceRange);
		bool execCommandShowHelp(const String& cmdID);
		void moveToElementText(Element* element);
		bool expand(const String& Unit);
		bool queryCommandSupported(const String& cmdID);
		void setEndPoint(const String& how, TextRange* SourceRange);
		bool queryCommandEnabled(const String& cmdID);
		static void set_prototype(TextRange* value);
		static TextRange* get_prototype();
		TextRange();
	};

	class HTMLSelectElement : HTMLElement, MSHTMLCollectionExtensions, MSDataBindingExtensions, MSHTMLSelectElementExtensions 
	{
	public:
		Object* operator[](const String& name);
		Object* operator()(Object* name, Object* index);
		Object* operator()(const String& name);
		void set_options(HTMLSelectElement* value);
		HTMLSelectElement* get_options();
		void set_value(String* value);
		String* get_value();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_name(String* value);
		String* get_name();
		void set_size(double value);
		double get_size();
		void set_length(double value);
		double get_length();
		void set_selectedIndex(double value);
		double get_selectedIndex();
		void set_multiple(bool value);
		bool get_multiple();
		void set_type(String* value);
		String* get_type();
		void remove();
		void remove(double index);
		void add(HTMLElement* element);
		void add(HTMLElement* element, Object* before);
		Object* item();
		Object* item(, Object* name);
		Object* item(Object* name, Object* index);
		Object* namedItem(const String& name);
		static void set_prototype(HTMLSelectElement* value);
		static HTMLSelectElement* get_prototype();
		HTMLSelectElement();
	};

	class CSSStyleSheet : StyleSheet, MSCSSStyleSheetExtensions 
	{
	public:
		void set_ownerRule(CSSRule* value);
		CSSRule* get_ownerRule();
		void set_cssRules(CSSRuleList* value);
		CSSRuleList* get_cssRules();
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void deleteRule();
		void deleteRule(double index);
		static void set_prototype(CSSStyleSheet* value);
		static CSSStyleSheet* get_prototype();
		CSSStyleSheet();
	};

	class HTMLBlockElement : HTMLElement, DOML2DeprecatedTextFlowControl_HTMLBlockElement, DOML2DeprecatedWidthStyle_HTMLBlockElement 
	{
	public:
		void set_cite(String* value);
		String* get_cite();
		static void set_prototype(HTMLBlockElement* value);
		static HTMLBlockElement* get_prototype();
		HTMLBlockElement();
	};

	class SVGTests 
	{
	public:
		void set_requiredFeatures(SVGStringList* value);
		SVGStringList* get_requiredFeatures();
		void set_requiredExtensions(SVGStringList* value);
		SVGStringList* get_requiredExtensions();
		void set_systemLanguage(SVGStringList* value);
		SVGStringList* get_systemLanguage();
		bool hasExtension(const String& extension);
	};

	class MSSelection 
	{
	public:
		void set_type(String* value);
		String* get_type();
		void set_typeDetail(String* value);
		String* get_typeDetail();
		TextRange* createRange();
		void clear();
		TextRangeCollection* createRangeCollection();
		void empty();
		static void set_prototype(MSSelection* value);
		static MSSelection* get_prototype();
		MSSelection();
	};

	class MSHTMLDListElementExtensions 
	{
	public:
	};

	class HTMLMetaElement : HTMLElement, MSHTMLMetaElementExtensions 
	{
	public:
		void set_httpEquiv(String* value);
		String* get_httpEquiv();
		void set_name(String* value);
		String* get_name();
		void set_content(String* value);
		String* get_content();
		void set_scheme(String* value);
		String* get_scheme();
		static void set_prototype(HTMLMetaElement* value);
		static HTMLMetaElement* get_prototype();
		HTMLMetaElement();
	};

	class Selection 
	{
	public:
		void set_isCollapsed(bool value);
		bool get_isCollapsed();
		void set_anchorNode(Node* value);
		Node* get_anchorNode();
		void set_focusNode(Node* value);
		Node* get_focusNode();
		void set_anchorOffset(double value);
		double get_anchorOffset();
		void set_focusOffset(double value);
		double get_focusOffset();
		void set_rangeCount(double value);
		double get_rangeCount();
		void addRange(Range* range);
		void collapseToEnd();
		String* toString();
		void selectAllChildren(Node* parentNode);
		Range* getRangeAt(double index);
		void collapse(Node* parentNode, double offset);
		void removeAllRanges();
		void collapseToStart();
		void deleteFromDocument();
		void removeRange(Range* range);
		static void set_prototype(Selection* value);
		static Selection* get_prototype();
		Selection();
	};

	class SVGAnimatedAngle 
	{
	public:
		void set_animVal(SVGAngle* value);
		SVGAngle* get_animVal();
		void set_baseVal(SVGAngle* value);
		SVGAngle* get_baseVal();
		static void set_prototype(SVGAnimatedAngle* value);
		static SVGAnimatedAngle* get_prototype();
		SVGAnimatedAngle();
	};

	class SVGPatternElement : SVGElement, SVGUnitTypes, SVGStylable, SVGLangSpace, SVGTests, SVGFitToViewBox, SVGURIReference 
	{
	public:
		void set_patternUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_patternUnits();
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_patternContentUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_patternContentUnits();
		void set_patternTransform(SVGAnimatedTransformList* value);
		SVGAnimatedTransformList* get_patternTransform();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGPatternElement* value);
		static SVGPatternElement* get_prototype();
		SVGPatternElement();
	};

	class SVGScriptElement : SVGElement, SVGURIReference 
	{
	public:
		void set_type(String* value);
		String* get_type();
		static void set_prototype(SVGScriptElement* value);
		static SVGScriptElement* get_prototype();
		SVGScriptElement();
	};

	class HTMLDDElement : HTMLElement, DOML2DeprecatedWordWrapSuppression_HTMLDDElement 
	{
	public:
		static void set_prototype(HTMLDDElement* value);
		static HTMLDDElement* get_prototype();
		HTMLDDElement();
	};

	class NodeIterator 
	{
	public:
		void set_whatToShow(double value);
		double get_whatToShow();
		void set_filter(NodeFilterCallback* value);
		NodeFilterCallback* get_filter();
		void set_root(Node* value);
		Node* get_root();
		void set_expandEntityReferences(bool value);
		bool get_expandEntityReferences();
		Node* nextNode();
		void detach();
		Node* previousNode();
		static void set_prototype(NodeIterator* value);
		static NodeIterator* get_prototype();
		NodeIterator();
	};

	class CSSStyleRule : CSSRule, MSCSSStyleRuleExtensions 
	{
	public:
		void set_selectorText(String* value);
		String* get_selectorText();
		void set_style(MSStyleCSSProperties* value);
		MSStyleCSSProperties* get_style();
		static void set_prototype(CSSStyleRule* value);
		static CSSStyleRule* get_prototype();
		CSSStyleRule();
	};

	class MSDataBindingRecordSetReadonlyExtensions 
	{
	public:
		void set_recordset(Object* value);
		Object* get_recordset();
		Object* namedRecordset(const String& dataMember);
		Object* namedRecordset(const String& dataMember, Object* hierarchy);
	};

	class HTMLLinkElement : HTMLElement, MSLinkStyleExtensions, LinkStyle 
	{
	public:
		void set_rel(String* value);
		String* get_rel();
		void set_target(String* value);
		String* get_target();
		void set_href(String* value);
		String* get_href();
		void set_media(String* value);
		String* get_media();
		void set_rev(String* value);
		String* get_rev();
		void set_type(String* value);
		String* get_type();
		void set_charset(String* value);
		String* get_charset();
		void set_hreflang(String* value);
		String* get_hreflang();
		static void set_prototype(HTMLLinkElement* value);
		static HTMLLinkElement* get_prototype();
		HTMLLinkElement();
	};

	class SVGViewElement : SVGElement, SVGZoomAndPan, SVGFitToViewBox 
	{
	public:
		void set_viewTarget(SVGStringList* value);
		SVGStringList* get_viewTarget();
		static void set_prototype(SVGViewElement* value);
		static SVGViewElement* get_prototype();
		SVGViewElement();
	};

	class MSHTMLAppletElementExtensions : DOML2DeprecatedBorderStyle_HTMLObjectElement 
	{
	public:
		void set_codeType(String* value);
		String* get_codeType();
		void set_standby(String* value);
		String* get_standby();
		void set_classid(String* value);
		String* get_classid();
		void set_useMap(String* value);
		String* get_useMap();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_data(String* value);
		String* get_data();
		void set_contentDocument(Document* value);
		Document* get_contentDocument();
		void set_altHtml(String* value);
		String* get_altHtml();
		void set_declare(bool value);
		bool get_declare();
		void set_type(String* value);
		String* get_type();
		void set_BaseHref(String* value);
		String* get_BaseHref();
	};

	class SVGLocatable 
	{
	public:
		void set_farthestViewportElement(SVGElement* value);
		SVGElement* get_farthestViewportElement();
		void set_nearestViewportElement(SVGElement* value);
		SVGElement* get_nearestViewportElement();
		SVGRect* getBBox();
		SVGMatrix* getTransformToElement(SVGElement* element);
		SVGMatrix* getCTM();
		SVGMatrix* getScreenCTM();
	};

	class HTMLFontElement : HTMLElement, DOML2DeprecatedColorProperty, MSHTMLFontElementExtensions, DOML2DeprecatedSizeProperty 
	{
	public:
		void set_face(String* value);
		String* get_face();
		static void set_prototype(HTMLFontElement* value);
		static HTMLFontElement* get_prototype();
		HTMLFontElement();
	};

	class MSHTMLTableElementExtensions 
	{
	public:
		void set_cells(HTMLCollection* value);
		HTMLCollection* get_cells();
		void set_height(Object* value);
		Object* get_height();
		void set_cols(double value);
		double get_cols();
		Object* moveRow();
		Object* moveRow(, double indexFrom);
		Object* moveRow(double indexFrom, double indexTo);
	};

	class SVGTitleElement : SVGElement, SVGStylable, SVGLangSpace 
	{
	public:
		static void set_prototype(SVGTitleElement* value);
		static SVGTitleElement* get_prototype();
		SVGTitleElement();
	};

	class ControlRangeCollection 
	{
	public:
		Element* operator[](double index);
		void set_length(double value);
		double get_length();
		Object* queryCommandValue(const String& cmdID);
		void remove(double index);
		void add(Element* item);
		bool queryCommandIndeterm(const String& cmdID);
		void scrollIntoView();
		void scrollIntoView(Object* varargStart);
		Element* item(double index);
		bool execCommand(const String& cmdID);
		bool execCommand(const String& cmdID, bool showUI);
		bool execCommand(const String& cmdID, bool showUI, Object* value);
		void addElement(Element* item);
		bool queryCommandState(const String& cmdID);
		bool queryCommandSupported(const String& cmdID);
		bool queryCommandEnabled(const String& cmdID);
		String* queryCommandText(const String& cmdID);
		void select();
		static void set_prototype(ControlRangeCollection* value);
		static ControlRangeCollection* get_prototype();
		ControlRangeCollection();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLImageElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class MSHTMLFrameElementExtensions 
	{
	public:
		void set_width(Object* value);
		Object* get_width();
		void set_contentWindow(Window* value);
		Window* get_contentWindow();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		void set_frameBorder(String* value);
		String* get_frameBorder();
		void set_height(Object* value);
		Object* get_height();
		void set_border(String* value);
		String* get_border();
		void set_frameSpacing(Object* value);
		Object* get_frameSpacing();
	};

	class MSNamespaceInfo : MSEventAttachmentTarget 
	{
	public:
		void set_urn(String* value);
		String* get_urn();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		void set_name(String* value);
		String* get_name();
		void set_readyState(String* value);
		String* get_readyState();
		void doImport(const String& implementationUrl);
		static void set_prototype(MSNamespaceInfo* value);
		static MSNamespaceInfo* get_prototype();
		MSNamespaceInfo();
	};

	class WindowSessionStorage 
	{
	public:
		void set_sessionStorage(Storage* value);
		Storage* get_sessionStorage();
	};

	class SVGAnimatedTransformList 
	{
	public:
		void set_animVal(SVGTransformList* value);
		SVGTransformList* get_animVal();
		void set_baseVal(SVGTransformList* value);
		SVGTransformList* get_baseVal();
		static void set_prototype(SVGAnimatedTransformList* value);
		static SVGAnimatedTransformList* get_prototype();
		SVGAnimatedTransformList();
	};

	class HTMLTableCaptionElement : HTMLElement, MSHTMLTableCaptionElementExtensions, DOML2DeprecatedAlignmentStyle_HTMLTableCaptionElement 
	{
	public:
		static void set_prototype(HTMLTableCaptionElement* value);
		static HTMLTableCaptionElement* get_prototype();
		HTMLTableCaptionElement();
	};

	class HTMLOptionElement : HTMLElement, MSDataBindingExtensions 
	{
	public:
		void set_index(double value);
		double get_index();
		void set_defaultSelected(bool value);
		bool get_defaultSelected();
		void set_value(String* value);
		String* get_value();
		void set_text(String* value);
		String* get_text();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_label(String* value);
		String* get_label();
		void set_selected(bool value);
		bool get_selected();
		static void set_prototype(HTMLOptionElement* value);
		static HTMLOptionElement* get_prototype();
		HTMLOptionElement();
	};

	class HTMLMapElement : HTMLElement 
	{
	public:
		void set_name(String* value);
		String* get_name();
		void set_areas(HTMLAreasCollection* value);
		HTMLAreasCollection* get_areas();
		static void set_prototype(HTMLMapElement* value);
		static HTMLMapElement* get_prototype();
		HTMLMapElement();
	};

	class HTMLMenuElement : HTMLElement, DOML2DeprecatedListSpaceReduction, MSHTMLMenuElementExtensions 
	{
	public:
		void set_type(String* value);
		String* get_type();
		static void set_prototype(HTMLMenuElement* value);
		static HTMLMenuElement* get_prototype();
		HTMLMenuElement();
	};

	class MouseWheelEvent : MouseEvent 
	{
	public:
		void set_wheelDelta(double value);
		double get_wheelDelta();
		void initMouseWheelEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double wheelDeltaArg);
		static void set_prototype(MouseWheelEvent* value);
		static MouseWheelEvent* get_prototype();
		MouseWheelEvent();
	};

	class SVGFitToViewBox 
	{
	public:
		void set_viewBox(SVGAnimatedRect* value);
		SVGAnimatedRect* get_viewBox();
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio* value);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
	};

	class MSHTMLAnchorElementExtensions 
	{
	public:
		void set_nameProp(String* value);
		String* get_nameProp();
		void set_protocolLong(String* value);
		String* get_protocolLong();
		void set_urn(String* value);
		String* get_urn();
		void set_mimeType(String* value);
		String* get_mimeType();
		void set_Methods(String* value);
		String* get_Methods();
	};

	class SVGPointList 
	{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGPoint* replaceItem(SVGPoint* newItem, double index);
		SVGPoint* getItem(double index);
		void clear();
		SVGPoint* appendItem(SVGPoint* newItem);
		SVGPoint* initialize(SVGPoint* newItem);
		SVGPoint* removeItem(double index);
		SVGPoint* insertItemBefore(SVGPoint* newItem, double index);
		static void set_prototype(SVGPointList* value);
		static SVGPointList* get_prototype();
		SVGPointList();
	};

	class MSElementCSSInlineStyleExtensions 
	{
	public:
		void doScroll();
		void doScroll(Object* component);
		String* componentFromPoint(double x, double y);
	};

	class SVGAnimatedLengthList 
	{
	public:
		void set_animVal(SVGLengthList* value);
		SVGLengthList* get_animVal();
		void set_baseVal(SVGLengthList* value);
		SVGLengthList* get_baseVal();
		static void set_prototype(SVGAnimatedLengthList* value);
		static SVGAnimatedLengthList* get_prototype();
		SVGAnimatedLengthList();
	};

	class MSHTMLTableDataCellElementExtensions 
	{
	public:
	};

	class Window : ViewCSS, MSEventAttachmentTarget, MSWindowExtensions, WindowPerformance, ScreenView, EventTarget, WindowLocalStorage, WindowSessionStorage, WindowTimers 
	{
	public:
		typedef Object* (*callback_for_ondragend)(DragEvent* ev);
		void set_ondragend(callback_for_ondragend value);
		callback_for_ondragend get_ondragend();
		typedef Object* (*callback_for_onkeydown)(KeyboardEvent* ev);
		void set_onkeydown(callback_for_onkeydown value);
		callback_for_onkeydown get_onkeydown();
		typedef Object* (*callback_for_ondragover)(DragEvent* ev);
		void set_ondragover(callback_for_ondragover value);
		callback_for_ondragover get_ondragover();
		typedef Object* (*callback_for_onkeyup)(KeyboardEvent* ev);
		void set_onkeyup(callback_for_onkeyup value);
		callback_for_onkeyup get_onkeyup();
		typedef Object* (*callback_for_onreset)(Event* ev);
		void set_onreset(callback_for_onreset value);
		callback_for_onreset get_onreset();
		typedef Object* (*callback_for_onmouseup)(MouseEvent* ev);
		void set_onmouseup(callback_for_onmouseup value);
		callback_for_onmouseup get_onmouseup();
		typedef Object* (*callback_for_ondragstart)(DragEvent* ev);
		void set_ondragstart(callback_for_ondragstart value);
		callback_for_ondragstart get_ondragstart();
		typedef Object* (*callback_for_ondrag)(DragEvent* ev);
		void set_ondrag(callback_for_ondrag value);
		callback_for_ondrag get_ondrag();
		typedef Object* (*callback_for_onmouseover)(MouseEvent* ev);
		void set_onmouseover(callback_for_onmouseover value);
		callback_for_onmouseover get_onmouseover();
		typedef Object* (*callback_for_ondragleave)(DragEvent* ev);
		void set_ondragleave(callback_for_ondragleave value);
		callback_for_ondragleave get_ondragleave();
		void set_history(History* value);
		History* get_history();
		void set_name(String* value);
		String* get_name();
		typedef Object* (*callback_for_onafterprint)(Event* ev);
		void set_onafterprint(callback_for_onafterprint value);
		callback_for_onafterprint get_onafterprint();
		typedef Object* (*callback_for_onpause)(Event* ev);
		void set_onpause(callback_for_onpause value);
		callback_for_onpause get_onpause();
		typedef Object* (*callback_for_onbeforeprint)(Event* ev);
		void set_onbeforeprint(callback_for_onbeforeprint value);
		callback_for_onbeforeprint get_onbeforeprint();
		void set_top(Window* value);
		Window* get_top();
		typedef Object* (*callback_for_onmousedown)(MouseEvent* ev);
		void set_onmousedown(callback_for_onmousedown value);
		callback_for_onmousedown get_onmousedown();
		typedef Object* (*callback_for_onseeked)(Event* ev);
		void set_onseeked(callback_for_onseeked value);
		callback_for_onseeked get_onseeked();
		void set_opener(Window* value);
		Window* get_opener();
		typedef Object* (*callback_for_onclick)(MouseEvent* ev);
		void set_onclick(callback_for_onclick value);
		callback_for_onclick get_onclick();
		typedef Object* (*callback_for_onwaiting)(Event* ev);
		void set_onwaiting(callback_for_onwaiting value);
		callback_for_onwaiting get_onwaiting();
		typedef Object* (*callback_for_ononline)(Event* ev);
		void set_ononline(callback_for_ononline value);
		callback_for_ononline get_ononline();
		typedef Object* (*callback_for_ondurationchange)(Event* ev);
		void set_ondurationchange(callback_for_ondurationchange value);
		callback_for_ondurationchange get_ondurationchange();
		void set_frames(Window* value);
		Window* get_frames();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		typedef Object* (*callback_for_onemptied)(Event* ev);
		void set_onemptied(callback_for_onemptied value);
		callback_for_onemptied get_onemptied();
		typedef Object* (*callback_for_onseeking)(Event* ev);
		void set_onseeking(callback_for_onseeking value);
		callback_for_onseeking get_onseeking();
		typedef Object* (*callback_for_oncanplay)(Event* ev);
		void set_oncanplay(callback_for_oncanplay value);
		callback_for_oncanplay get_oncanplay();
		typedef Object* (*callback_for_onstalled)(Event* ev);
		void set_onstalled(callback_for_onstalled value);
		callback_for_onstalled get_onstalled();
		typedef Object* (*callback_for_onmousemove)(MouseEvent* ev);
		void set_onmousemove(callback_for_onmousemove value);
		callback_for_onmousemove get_onmousemove();
		typedef Object* (*callback_for_onoffline)(Event* ev);
		void set_onoffline(callback_for_onoffline value);
		callback_for_onoffline get_onoffline();
		void set_length(double value);
		double get_length();
		typedef Object* (*callback_for_onbeforeunload)(BeforeUnloadEvent* ev);
		void set_onbeforeunload(callback_for_onbeforeunload value);
		callback_for_onbeforeunload get_onbeforeunload();
		typedef Object* (*callback_for_onratechange)(Event* ev);
		void set_onratechange(callback_for_onratechange value);
		callback_for_onratechange get_onratechange();
		typedef Object* (*callback_for_onstorage)(StorageEvent* ev);
		void set_onstorage(callback_for_onstorage value);
		callback_for_onstorage get_onstorage();
		typedef Object* (*callback_for_onloadstart)(Event* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		typedef Object* (*callback_for_ondragenter)(DragEvent* ev);
		void set_ondragenter(callback_for_ondragenter value);
		callback_for_ondragenter get_ondragenter();
		typedef Object* (*callback_for_onsubmit)(Event* ev);
		void set_onsubmit(callback_for_onsubmit value);
		callback_for_onsubmit get_onsubmit();
		void set_self(Window* value);
		Window* get_self();
		typedef Object* (*callback_for_onprogress)(Object* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_ondblclick)(MouseEvent* ev);
		void set_ondblclick(callback_for_ondblclick value);
		callback_for_ondblclick get_ondblclick();
		typedef Object* (*callback_for_oncontextmenu)(MouseEvent* ev);
		void set_oncontextmenu(callback_for_oncontextmenu value);
		callback_for_oncontextmenu get_oncontextmenu();
		typedef Object* (*callback_for_onchange)(Event* ev);
		void set_onchange(callback_for_onchange value);
		callback_for_onchange get_onchange();
		typedef Object* (*callback_for_onloadedmetadata)(Event* ev);
		void set_onloadedmetadata(callback_for_onloadedmetadata value);
		callback_for_onloadedmetadata get_onloadedmetadata();
		typedef Object* (*callback_for_onplay)(Event* ev);
		void set_onplay(callback_for_onplay value);
		callback_for_onplay get_onplay();
		void set_onerror(ErrorFunction* value);
		ErrorFunction* get_onerror();
		typedef Object* (*callback_for_onplaying)(Event* ev);
		void set_onplaying(callback_for_onplaying value);
		callback_for_onplaying get_onplaying();
		void set_parent(Window* value);
		Window* get_parent();
		void set_location(Location* value);
		Location* get_location();
		typedef Object* (*callback_for_oncanplaythrough)(Event* ev);
		void set_oncanplaythrough(callback_for_oncanplaythrough value);
		callback_for_oncanplaythrough get_oncanplaythrough();
		typedef Object* (*callback_for_onabort)(UIEvent* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		typedef Object* (*callback_for_onkeypress)(KeyboardEvent* ev);
		void set_onkeypress(callback_for_onkeypress value);
		callback_for_onkeypress get_onkeypress();
		void set_frameElement(Element* value);
		Element* get_frameElement();
		typedef Object* (*callback_for_onloadeddata)(Event* ev);
		void set_onloadeddata(callback_for_onloadeddata value);
		callback_for_onloadeddata get_onloadeddata();
		typedef Object* (*callback_for_onsuspend)(Event* ev);
		void set_onsuspend(callback_for_onsuspend value);
		callback_for_onsuspend get_onsuspend();
		void set_window(Window* value);
		Window* get_window();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		typedef Object* (*callback_for_onmessage)(MessageEvent* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		typedef Object* (*callback_for_ontimeupdate)(Event* ev);
		void set_ontimeupdate(callback_for_ontimeupdate value);
		callback_for_ontimeupdate get_ontimeupdate();
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		void set_navigator(Navigator* value);
		Navigator* get_navigator();
		typedef Object* (*callback_for_onselect)(UIEvent* ev);
		void set_onselect(callback_for_onselect value);
		callback_for_onselect get_onselect();
		typedef Object* (*callback_for_ondrop)(DragEvent* ev);
		void set_ondrop(callback_for_ondrop value);
		callback_for_ondrop get_ondrop();
		typedef Object* (*callback_for_onmouseout)(MouseEvent* ev);
		void set_onmouseout(callback_for_onmouseout value);
		callback_for_onmouseout get_onmouseout();
		typedef Object* (*callback_for_onended)(Event* ev);
		void set_onended(callback_for_onended value);
		callback_for_onended get_onended();
		typedef Object* (*callback_for_onhashchange)(Event* ev);
		void set_onhashchange(callback_for_onhashchange value);
		callback_for_onhashchange get_onhashchange();
		typedef Object* (*callback_for_onunload)(Event* ev);
		void set_onunload(callback_for_onunload value);
		callback_for_onunload get_onunload();
		typedef Object* (*callback_for_onscroll)(UIEvent* ev);
		void set_onscroll(callback_for_onscroll value);
		callback_for_onscroll get_onscroll();
		typedef Object* (*callback_for_onmousewheel)(MouseWheelEvent* ev);
		void set_onmousewheel(callback_for_onmousewheel value);
		callback_for_onmousewheel get_onmousewheel();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onvolumechange)(Event* ev);
		void set_onvolumechange(callback_for_onvolumechange value);
		callback_for_onvolumechange get_onvolumechange();
		typedef Object* (*callback_for_oninput)(Event* ev);
		void set_oninput(callback_for_oninput value);
		callback_for_oninput get_oninput();
		void alert();
		void alert(const String& message);
		void focus();
		void print();
		String* prompt();
		String* prompt(, const String& message);
		String* prompt(const String& message, const String& defaul);
		String* toString();
		Window* open();
		Window* open(, const String& url);
		Window* open(, const String& url, );
		Window* open(, const String& url, , const String& target);
		Window* open(const String& url, const String& target, const String& features, bool replace);
		void close();
		bool confirm();
		bool confirm(const String& message);
		void postMessage(Object* message, const String& targetOrigin);
		void postMessage(Object* message, const String& targetOrigin, Object* ports);
		Object* showModalDialog();
		Object* showModalDialog(, const String& url);
		Object* showModalDialog(, const String& url, );
		Object* showModalDialog(const String& url, Object* argument, Object* options);
		void blur();
		Selection* getSelection();
		static void set_prototype(Window* value);
		static Window* get_prototype();
		Window();
	};

	class SVGAnimatedPreserveAspectRatio 
	{
	public:
		void set_animVal(SVGPreserveAspectRatio* value);
		SVGPreserveAspectRatio* get_animVal();
		void set_baseVal(SVGPreserveAspectRatio* value);
		SVGPreserveAspectRatio* get_baseVal();
		static void set_prototype(SVGAnimatedPreserveAspectRatio* value);
		static SVGAnimatedPreserveAspectRatio* get_prototype();
		SVGAnimatedPreserveAspectRatio();
	};

	class MSSiteModeEvent : Event 
	{
	public:
		void set_buttonID(double value);
		double get_buttonID();
		void set_actionURL(String* value);
		String* get_actionURL();
		static void set_prototype(MSSiteModeEvent* value);
		static MSSiteModeEvent* get_prototype();
		MSSiteModeEvent();
	};

	class MSCSSStyleRuleExtensions 
	{
	public:
		void set_readOnly(bool value);
		bool get_readOnly();
	};

	class StyleSheetPageList 
	{
	public:
		StyleSheetPage* operator[](double index);
		void set_length(double value);
		double get_length();
		StyleSheetPage* item(double index);
		static void set_prototype(StyleSheetPageList* value);
		static StyleSheetPageList* get_prototype();
		StyleSheetPageList();
	};

	class HTMLCollection : MSHTMLCollectionExtensions 
	{
	public:
		Element* operator[](double index);
		Element* operator[](const String& name);
		Element* operator()(Object* nameOrIndex, Object* optionalIndex);
		Element* operator()(const String& name);
		void set_length(double value);
		double get_length();
		Element* item();
		Element* item(, Object* nameOrIndex);
		Element* item(Object* nameOrIndex, Object* optionalIndex);
		Element* namedItem(const String& name);
		static void set_prototype(HTMLCollection* value);
		static HTMLCollection* get_prototype();
		HTMLCollection();
	};

	class MSCSSProperties : CSSStyleDeclaration, MSCSSStyleDeclarationExtensions 
	{
	public:
		void set_scrollbarShadowColor(String* value);
		String* get_scrollbarShadowColor();
		void set_scrollbarHighlightColor(String* value);
		String* get_scrollbarHighlightColor();
		void set_layoutGridChar(String* value);
		String* get_layoutGridChar();
		void set_layoutGridType(String* value);
		String* get_layoutGridType();
		void set_textAutospace(String* value);
		String* get_textAutospace();
		void set_textKashidaSpace(String* value);
		String* get_textKashidaSpace();
		void set_writingMode(String* value);
		String* get_writingMode();
		void set_scrollbarFaceColor(String* value);
		String* get_scrollbarFaceColor();
		void set_backgroundPositionY(String* value);
		String* get_backgroundPositionY();
		void set_lineBreak(String* value);
		String* get_lineBreak();
		void set_imeMode(String* value);
		String* get_imeMode();
		void set_msBlockProgression(String* value);
		String* get_msBlockProgression();
		void set_layoutGridLine(String* value);
		String* get_layoutGridLine();
		void set_scrollbarBaseColor(String* value);
		String* get_scrollbarBaseColor();
		void set_layoutGrid(String* value);
		String* get_layoutGrid();
		void set_layoutFlow(String* value);
		String* get_layoutFlow();
		void set_textKashida(String* value);
		String* get_textKashida();
		void set_filter(String* value);
		String* get_filter();
		void set_zoom(String* value);
		String* get_zoom();
		void set_scrollbarArrowColor(String* value);
		String* get_scrollbarArrowColor();
		void set_behavior(String* value);
		String* get_behavior();
		void set_backgroundPositionX(String* value);
		String* get_backgroundPositionX();
		void set_accelerator(String* value);
		String* get_accelerator();
		void set_layoutGridMode(String* value);
		String* get_layoutGridMode();
		void set_textJustifyTrim(String* value);
		String* get_textJustifyTrim();
		void set_scrollbar3dLightColor(String* value);
		String* get_scrollbar3dLightColor();
		void set_msInterpolationMode(String* value);
		String* get_msInterpolationMode();
		void set_scrollbarTrackColor(String* value);
		String* get_scrollbarTrackColor();
		void set_scrollbarDarkShadowColor(String* value);
		String* get_scrollbarDarkShadowColor();
		void set_styleFloat(String* value);
		String* get_styleFloat();
		static void set_prototype(MSCSSProperties* value);
		static MSCSSProperties* get_prototype();
		MSCSSProperties();
	};

	class HTMLImageElement : HTMLElement, DOML2DeprecatedMarginStyle, DOML2DeprecatedBorderStyle, DOML2DeprecatedAlignmentStyle_HTMLImageElement, MSImageResourceExtensions, MSHTMLImageElementExtensions, MSDataBindingExtensions, MSResourceMetadata 
	{
	public:
		void set_width(double value);
		double get_width();
		void set_naturalHeight(double value);
		double get_naturalHeight();
		void set_alt(String* value);
		String* get_alt();
		void set_src(String* value);
		String* get_src();
		void set_useMap(String* value);
		String* get_useMap();
		void set_naturalWidth(double value);
		double get_naturalWidth();
		void set_name(String* value);
		String* get_name();
		void set_height(double value);
		double get_height();
		void set_longDesc(String* value);
		String* get_longDesc();
		void set_isMap(bool value);
		bool get_isMap();
		void set_complete(bool value);
		bool get_complete();
		static void set_prototype(HTMLImageElement* value);
		static HTMLImageElement* get_prototype();
		HTMLImageElement();
	};

	class HTMLAreaElement : HTMLElement, MSHTMLAreaElementExtensions 
	{
	public:
		void set_protocol(String* value);
		String* get_protocol();
		void set_search(String* value);
		String* get_search();
		void set_alt(String* value);
		String* get_alt();
		void set_coords(String* value);
		String* get_coords();
		void set_hostname(String* value);
		String* get_hostname();
		void set_port(String* value);
		String* get_port();
		void set_pathname(String* value);
		String* get_pathname();
		void set_host(String* value);
		String* get_host();
		void set_hash(String* value);
		String* get_hash();
		void set_target(String* value);
		String* get_target();
		void set_href(String* value);
		String* get_href();
		void set_noHref(bool value);
		bool get_noHref();
		void set_shape(String* value);
		String* get_shape();
		String* toString();
		static void set_prototype(HTMLAreaElement* value);
		static HTMLAreaElement* get_prototype();
		HTMLAreaElement();
	};

	class EventTarget 
	{
	public:
		void removeEventListener(const String& type, EventListener* listener);
		void removeEventListener(const String& type, EventListener* listener, bool useCapture);
		void addEventListener(const String& type, EventListener* listener);
		void addEventListener(const String& type, EventListener* listener, bool useCapture);
		bool dispatchEvent(Event* evt);
	};

	class SVGAngle 
	{
	public:
		void set_valueAsString(String* value);
		String* get_valueAsString();
		void set_valueInSpecifiedUnits(double value);
		double get_valueInSpecifiedUnits();
		void set_value(double value);
		double get_value();
		void set_unitType(double value);
		double get_unitType();
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
		void set_SVG_ANGLETYPE_RAD(double value);
		double get_SVG_ANGLETYPE_RAD();
		void set_SVG_ANGLETYPE_UNKNOWN(double value);
		double get_SVG_ANGLETYPE_UNKNOWN();
		void set_SVG_ANGLETYPE_UNSPECIFIED(double value);
		double get_SVG_ANGLETYPE_UNSPECIFIED();
		void set_SVG_ANGLETYPE_DEG(double value);
		double get_SVG_ANGLETYPE_DEG();
		void set_SVG_ANGLETYPE_GRAD(double value);
		double get_SVG_ANGLETYPE_GRAD();
		static void set_prototype(SVGAngle* value);
		static SVGAngle* get_prototype();
		SVGAngle();
		static void set_SVG_ANGLETYPE_RAD(double value);
		static double get_SVG_ANGLETYPE_RAD();
		static void set_SVG_ANGLETYPE_UNKNOWN(double value);
		static double get_SVG_ANGLETYPE_UNKNOWN();
		static void set_SVG_ANGLETYPE_UNSPECIFIED(double value);
		static double get_SVG_ANGLETYPE_UNSPECIFIED();
		static void set_SVG_ANGLETYPE_DEG(double value);
		static double get_SVG_ANGLETYPE_DEG();
		static void set_SVG_ANGLETYPE_GRAD(double value);
		static double get_SVG_ANGLETYPE_GRAD();
	};

	class HTMLButtonElement : HTMLElement, MSHTMLButtonElementExtensions, MSDataBindingExtensions 
	{
	public:
		void set_value(String* value);
		String* get_value();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_name(String* value);
		String* get_name();
		void set_type(String* value);
		String* get_type();
		static void set_prototype(HTMLButtonElement* value);
		static HTMLButtonElement* get_prototype();
		HTMLButtonElement();
	};

	class MSHTMLLabelElementExtensions 
	{
	public:
	};

	class HTMLSourceElement : HTMLElement 
	{
	public:
		void set_src(String* value);
		String* get_src();
		void set_media(String* value);
		String* get_media();
		void set_type(String* value);
		String* get_type();
		static void set_prototype(HTMLSourceElement* value);
		static HTMLSourceElement* get_prototype();
		HTMLSourceElement();
	};

	class CanvasGradient 
	{
	public:
		void addColorStop(double offset, const String& color);
		static void set_prototype(CanvasGradient* value);
		static CanvasGradient* get_prototype();
		CanvasGradient();
	};

	class KeyboardEvent : UIEvent, KeyboardEventExtensions 
	{
	public:
		void set_location(double value);
		double get_location();
		void set_shiftKey(bool value);
		bool get_shiftKey();
		void set_locale(String* value);
		String* get_locale();
		void set_key(String* value);
		String* get_key();
		void set_altKey(bool value);
		bool get_altKey();
		void set_metaKey(bool value);
		bool get_metaKey();
		void set_char(String* value);
		String* get_char();
		void set_ctrlKey(bool value);
		bool get_ctrlKey();
		void set_repeat(bool value);
		bool get_repeat();
		bool getModifierState(const String& keyArg);
		void initKeyboardEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, const String& keyArg, double locationArg, const String& modifiersListArg, bool repeat, const String& locale);
		void set_DOM_KEY_LOCATION_RIGHT(double value);
		double get_DOM_KEY_LOCATION_RIGHT();
		void set_DOM_KEY_LOCATION_STANDARD(double value);
		double get_DOM_KEY_LOCATION_STANDARD();
		void set_DOM_KEY_LOCATION_LEFT(double value);
		double get_DOM_KEY_LOCATION_LEFT();
		void set_DOM_KEY_LOCATION_NUMPAD(double value);
		double get_DOM_KEY_LOCATION_NUMPAD();
		void set_DOM_KEY_LOCATION_JOYSTICK(double value);
		double get_DOM_KEY_LOCATION_JOYSTICK();
		void set_DOM_KEY_LOCATION_MOBILE(double value);
		double get_DOM_KEY_LOCATION_MOBILE();
		static void set_prototype(KeyboardEvent* value);
		static KeyboardEvent* get_prototype();
		KeyboardEvent();
		static void set_DOM_KEY_LOCATION_RIGHT(double value);
		static double get_DOM_KEY_LOCATION_RIGHT();
		static void set_DOM_KEY_LOCATION_STANDARD(double value);
		static double get_DOM_KEY_LOCATION_STANDARD();
		static void set_DOM_KEY_LOCATION_LEFT(double value);
		static double get_DOM_KEY_LOCATION_LEFT();
		static void set_DOM_KEY_LOCATION_NUMPAD(double value);
		static double get_DOM_KEY_LOCATION_NUMPAD();
		static void set_DOM_KEY_LOCATION_JOYSTICK(double value);
		static double get_DOM_KEY_LOCATION_JOYSTICK();
		static void set_DOM_KEY_LOCATION_MOBILE(double value);
		static double get_DOM_KEY_LOCATION_MOBILE();
	};

	class Document : Node, DocumentStyle, DocumentRange, HTMLDocument, NodeSelector, DocumentEvent, DocumentTraversal, DocumentView, SVGDocument 
	{
	public:
		void set_doctype(DocumentType* value);
		DocumentType* get_doctype();
		void set_xmlVersion(String* value);
		String* get_xmlVersion();
		void set_implementation(DOMImplementation* value);
		DOMImplementation* get_implementation();
		void set_xmlEncoding(String* value);
		String* get_xmlEncoding();
		void set_xmlStandalone(bool value);
		bool get_xmlStandalone();
		void set_documentElement(HTMLElement* value);
		HTMLElement* get_documentElement();
		void set_inputEncoding(String* value);
		String* get_inputEncoding();
		HTMLElement* createElement(const String& tagName);
		Node* adoptNode(Node* source);
		Comment* createComment(const String& data);
		DocumentFragment* createDocumentFragment();
		NodeList* getElementsByTagName(const String& tagname);
		NodeList* getElementsByTagNameNS(const String& namespaceURI, const String& localName);
		ProcessingInstruction* createProcessingInstruction(const String& target, const String& data);
		Element* createElementNS(const String& namespaceURI, const String& qualifiedName);
		Attr* createAttribute(const String& name);
		Text* createTextNode(const String& data);
		Node* importNode(Node* importedNode, bool deep);
		CDATASection* createCDATASection(const String& data);
		Attr* createAttributeNS(const String& namespaceURI, const String& qualifiedName);
		HTMLElement* getElementById(const String& elementId);
		static void set_prototype(Document* value);
		static Document* get_prototype();
		Document();
	};

	class MessageEvent : Event 
	{
	public:
		void set_source(Window* value);
		Window* get_source();
		void set_origin(String* value);
		String* get_origin();
		void set_data(Object* value);
		Object* get_data();
		void initMessageEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Object* dataArg, const String& originArg, const String& lastEventIdArg, Window* sourceArg);
		static void set_prototype(MessageEvent* value);
		static MessageEvent* get_prototype();
		MessageEvent();
	};

	class SVGElement : Element, SVGElementEventHandlers 
	{
	public:
		void set_xmlbase(String* value);
		String* get_xmlbase();
		void set_viewportElement(SVGElement* value);
		SVGElement* get_viewportElement();
		void set_id(String* value);
		String* get_id();
		void set_ownerSVGElement(SVGSVGElement* value);
		SVGSVGElement* get_ownerSVGElement();
		static void set_prototype(SVGElement* value);
		static SVGElement* get_prototype();
		SVGElement();
	};

	class HTMLScriptElement : HTMLElement 
	{
	public:
		void set_defer(bool value);
		bool get_defer();
		void set_text(String* value);
		String* get_text();
		void set_src(String* value);
		String* get_src();
		void set_htmlFor(String* value);
		String* get_htmlFor();
		void set_charset(String* value);
		String* get_charset();
		void set_type(String* value);
		String* get_type();
		void set_event(String* value);
		String* get_event();
		static void set_prototype(HTMLScriptElement* value);
		static HTMLScriptElement* get_prototype();
		HTMLScriptElement();
	};

	class MSHTMLBodyElementExtensions : DOML2DeprecatedWordWrapSuppression_HTMLBodyElement 
	{
	public:
		void set_scroll(String* value);
		String* get_scroll();
		void set_bottomMargin(Object* value);
		Object* get_bottomMargin();
		void set_topMargin(Object* value);
		Object* get_topMargin();
		void set_rightMargin(Object* value);
		Object* get_rightMargin();
		void set_bgProperties(String* value);
		String* get_bgProperties();
		void set_leftMargin(Object* value);
		Object* get_leftMargin();
		TextRange* createTextRange();
	};

	class HTMLTableRowElement : HTMLElement, MSBorderColorHighlightStyle_HTMLTableRowElement, HTMLTableAlignment, MSBorderColorStyle_HTMLTableRowElement, DOML2DeprecatedAlignmentStyle_HTMLTableRowElement, DOML2DeprecatedBackgroundColorStyle, MSHTMLTableRowElementExtensions 
	{
	public:
		void set_rowIndex(double value);
		double get_rowIndex();
		void set_cells(HTMLCollection* value);
		HTMLCollection* get_cells();
		void set_sectionRowIndex(double value);
		double get_sectionRowIndex();
		void deleteCell();
		void deleteCell(double index);
		HTMLElement* insertCell();
		HTMLElement* insertCell(double index);
		static void set_prototype(HTMLTableRowElement* value);
		static HTMLTableRowElement* get_prototype();
		HTMLTableRowElement();
	};

	class MSCommentExtensions 
	{
	public:
		void set_text(String* value);
		String* get_text();
	};

	class DOML2DeprecatedMarginStyle_HTMLMarqueeElement 
	{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class MSCSSRuleList 
	{
	public:
		CSSStyleRule* operator[](double index);
		void set_length(double value);
		double get_length();
		CSSStyleRule* item();
		CSSStyleRule* item(double index);
		static void set_prototype(MSCSSRuleList* value);
		static MSCSSRuleList* get_prototype();
		MSCSSRuleList();
	};

	class CanvasRenderingContext2D 
	{
	public:
		void set_shadowOffsetX(double value);
		double get_shadowOffsetX();
		void set_lineWidth(double value);
		double get_lineWidth();
		void set_miterLimit(double value);
		double get_miterLimit();
		void set_canvas(HTMLCanvasElement* value);
		HTMLCanvasElement* get_canvas();
		void set_strokeStyle(Object* value);
		Object* get_strokeStyle();
		void set_font(String* value);
		String* get_font();
		void set_globalAlpha(double value);
		double get_globalAlpha();
		void set_globalCompositeOperation(String* value);
		String* get_globalCompositeOperation();
		void set_shadowOffsetY(double value);
		double get_shadowOffsetY();
		void set_fillStyle(Object* value);
		Object* get_fillStyle();
		void set_lineCap(String* value);
		String* get_lineCap();
		void set_shadowBlur(double value);
		double get_shadowBlur();
		void set_textAlign(String* value);
		String* get_textAlign();
		void set_textBaseline(String* value);
		String* get_textBaseline();
		void set_shadowColor(String* value);
		String* get_shadowColor();
		void set_lineJoin(String* value);
		String* get_lineJoin();
		void restore();
		void setTransform(double m11, double m12, double m21, double m22, double dx, double dy);
		void save();
		void arc(double x, double y, double radius, double startAngle, double endAngle);
		void arc(double x, double y, double radius, double startAngle, double endAngle, bool anticlockwise);
		TextMetrics* measureText(const String& text);
		bool isPointInPath(double x, double y);
		void quadraticCurveTo(double cpx, double cpy, double x, double y);
		void putImageData(ImageData* imagedata, double dx, double dy);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, );
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, , double dirtyY);
		void putImageData(ImageData* imagedata, double dx, double dy, double dirtyX, double dirtyY, double dirtyWidth, double dirtyHeight);
		void rotate(double angle);
		void fillText(const String& text, double x, double y);
		void fillText(const String& text, double x, double y, double maxWidth);
		void translate(double x, double y);
		void scale(double x, double y);
		CanvasGradient* createRadialGradient(double x0, double y0, double r0, double x1, double y1, double r1);
		void lineTo(double x, double y);
		void fill();
		CanvasPattern* createPattern(HTMLElement* image, const String& repetition);
		void closePath();
		void rect(double x, double y, double w, double h);
		void clip();
		ImageData* createImageData(Object* imageDataOrSw);
		ImageData* createImageData(Object* imageDataOrSw, double sh);
		void clearRect(double x, double y, double w, double h);
		void moveTo(double x, double y);
		ImageData* getImageData(double sx, double sy, double sw, double sh);
		void fillRect(double x, double y, double w, double h);
		void bezierCurveTo(double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);
		void drawImage(HTMLElement* image, double offsetX, double offsetY);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, );
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, , double height);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, , double height, );
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, , double height, , double canvasOffsetX);
		void drawImage(HTMLElement* image, double offsetX, double offsetY, double width, double height, double canvasOffsetX, double canvasOffsetY, double canvasImageWidth, double canvasImageHeight);
		void transform(double m11, double m12, double m21, double m22, double dx, double dy);
		void stroke();
		void strokeRect(double x, double y, double w, double h);
		void strokeText(const String& text, double x, double y);
		void strokeText(const String& text, double x, double y, double maxWidth);
		void beginPath();
		void arcTo(double x1, double y1, double x2, double y2, double radius);
		CanvasGradient* createLinearGradient(double x0, double y0, double x1, double y1);
		static void set_prototype(CanvasRenderingContext2D* value);
		static CanvasRenderingContext2D* get_prototype();
		CanvasRenderingContext2D();
	};

	class SVGPathSegLinetoHorizontalAbs : SVGPathSeg 
	{
	public:
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoHorizontalAbs* value);
		static SVGPathSegLinetoHorizontalAbs* get_prototype();
		SVGPathSegLinetoHorizontalAbs();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLObjectElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class DOML2DeprecatedBorderStyle_MSHTMLIFrameElementExtensions 
	{
	public:
		void set_border(String* value);
		String* get_border();
	};

	class MSHTMLElementRangeExtensions 
	{
	public:
		ControlRangeCollection* createControlRange();
	};

	class SVGPathSegArcAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_sweepFlag(bool value);
		bool get_sweepFlag();
		void set_r2(double value);
		double get_r2();
		void set_x(double value);
		double get_x();
		void set_angle(double value);
		double get_angle();
		void set_r1(double value);
		double get_r1();
		void set_largeArcFlag(bool value);
		bool get_largeArcFlag();
		static void set_prototype(SVGPathSegArcAbs* value);
		static SVGPathSegArcAbs* get_prototype();
		SVGPathSegArcAbs();
	};

	class MSScreenExtensions 
	{
	public:
		void set_deviceXDPI(double value);
		double get_deviceXDPI();
		void set_fontSmoothingEnabled(bool value);
		bool get_fontSmoothingEnabled();
		void set_bufferDepth(double value);
		double get_bufferDepth();
		void set_logicalXDPI(double value);
		double get_logicalXDPI();
		void set_systemXDPI(double value);
		double get_systemXDPI();
		void set_logicalYDPI(double value);
		double get_logicalYDPI();
		void set_systemYDPI(double value);
		double get_systemYDPI();
		void set_updateInterval(double value);
		double get_updateInterval();
		void set_deviceYDPI(double value);
		double get_deviceYDPI();
	};

	class HTMLHtmlElement : HTMLElement, HTMLHtmlElementDOML2Deprecated 
	{
	public:
		static void set_prototype(HTMLHtmlElement* value);
		static HTMLHtmlElement* get_prototype();
		HTMLHtmlElement();
	};

	class MSBorderColorStyle 
	{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class SVGTransformList 
	{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGTransform* getItem(double index);
		SVGTransform* consolidate();
		void clear();
		SVGTransform* appendItem(SVGTransform* newItem);
		SVGTransform* initialize(SVGTransform* newItem);
		SVGTransform* removeItem(double index);
		SVGTransform* insertItemBefore(SVGTransform* newItem, double index);
		SVGTransform* replaceItem(SVGTransform* newItem, double index);
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		static void set_prototype(SVGTransformList* value);
		static SVGTransformList* get_prototype();
		SVGTransformList();
	};

	class SVGPathSegClosePath : SVGPathSeg 
	{
	public:
		static void set_prototype(SVGPathSegClosePath* value);
		static SVGPathSegClosePath* get_prototype();
		SVGPathSegClosePath();
	};

	class DOML2DeprecatedMarginStyle_MSHTMLIFrameElementExtensions 
	{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class HTMLFrameElement : HTMLElement, GetSVGDocument, MSHTMLFrameElementExtensions, MSDataBindingExtensions, MSBorderColorStyle_HTMLFrameElement 
	{
	public:
		void set_scrolling(String* value);
		String* get_scrolling();
		void set_marginHeight(String* value);
		String* get_marginHeight();
		void set_src(String* value);
		String* get_src();
		void set_name(String* value);
		String* get_name();
		void set_marginWidth(String* value);
		String* get_marginWidth();
		void set_contentDocument(Document* value);
		Document* get_contentDocument();
		void set_longDesc(String* value);
		String* get_longDesc();
		void set_noResize(bool value);
		bool get_noResize();
		static void set_prototype(HTMLFrameElement* value);
		static HTMLFrameElement* get_prototype();
		HTMLFrameElement();
	};

	class SVGAnimatedLength 
	{
	public:
		void set_animVal(SVGLength* value);
		SVGLength* get_animVal();
		void set_baseVal(SVGLength* value);
		SVGLength* get_baseVal();
		static void set_prototype(SVGAnimatedLength* value);
		static SVGAnimatedLength* get_prototype();
		SVGAnimatedLength();
	};

	class CSSMediaRule : CSSRule 
	{
	public:
		void set_media(MediaList* value);
		MediaList* get_media();
		void set_cssRules(CSSRuleList* value);
		CSSRuleList* get_cssRules();
		double insertRule(const String& rule);
		double insertRule(const String& rule, double index);
		void deleteRule();
		void deleteRule(double index);
		static void set_prototype(CSSMediaRule* value);
		static CSSMediaRule* get_prototype();
		CSSMediaRule();
	};

	class HTMLQuoteElement : HTMLElement, MSHTMLQuoteElementExtensions 
	{
	public:
		void set_cite(String* value);
		String* get_cite();
		static void set_prototype(HTMLQuoteElement* value);
		static HTMLQuoteElement* get_prototype();
		HTMLQuoteElement();
	};

	class SVGDefsElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		static void set_prototype(SVGDefsElement* value);
		static SVGDefsElement* get_prototype();
		SVGDefsElement();
	};

	class SVGAnimatedPoints 
	{
	public:
		void set_points(SVGPointList* value);
		SVGPointList* get_points();
		void set_animatedPoints(SVGPointList* value);
		SVGPointList* get_animatedPoints();
	};

	class WindowModal 
	{
	public:
		void set_dialogArguments(Object* value);
		Object* get_dialogArguments();
		void set_returnValue(Object* value);
		Object* get_returnValue();
	};

	class MSHTMLButtonElementExtensions 
	{
	public:
		void set_status(Object* value);
		Object* get_status();
		TextRange* createTextRange();
	};

	class XMLHttpRequest : EventTarget, MSXMLHttpRequestExtensions 
	{
	public:
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		void set_status(double value);
		double get_status();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		void set_readyState(double value);
		double get_readyState();
		void set_responseText(String* value);
		String* get_responseText();
		void set_responseXML(Document* value);
		Document* get_responseXML();
		void set_statusText(String* value);
		String* get_statusText();
		void open(const String& method, const String& url);
		void open(const String& method, const String& url, bool async);
		void open(const String& method, const String& url, bool async, );
		void open(const String& method, const String& url, bool async, const String& user, const String& password);
		void send();
		void send(Object* data);
		void abort();
		String* getAllResponseHeaders();
		void setRequestHeader(const String& header, const String& value);
		String* getResponseHeader(const String& header);
		void set_LOADING(double value);
		double get_LOADING();
		void set_DONE(double value);
		double get_DONE();
		void set_UNSENT(double value);
		double get_UNSENT();
		void set_OPENED(double value);
		double get_OPENED();
		void set_HEADERS_RECEIVED(double value);
		double get_HEADERS_RECEIVED();
		static void set_prototype(XMLHttpRequest* value);
		static XMLHttpRequest* get_prototype();
		XMLHttpRequest();
		static void set_LOADING(double value);
		static double get_LOADING();
		static void set_DONE(double value);
		static double get_DONE();
		static void set_UNSENT(double value);
		static double get_UNSENT();
		static void set_OPENED(double value);
		static double get_OPENED();
		static void set_HEADERS_RECEIVED(double value);
		static double get_HEADERS_RECEIVED();
	};

	class HTMLTableHeaderCellElement : HTMLTableCellElement, HTMLTableHeaderCellScope 
	{
	public:
		static void set_prototype(HTMLTableHeaderCellElement* value);
		static HTMLTableHeaderCellElement* get_prototype();
		HTMLTableHeaderCellElement();
	};

	class HTMLDListElement : HTMLElement, DOML2DeprecatedListSpaceReduction, MSHTMLDListElementExtensions 
	{
	public:
		static void set_prototype(HTMLDListElement* value);
		static HTMLDListElement* get_prototype();
		HTMLDListElement();
	};

	class MSDataBindingExtensions 
	{
	public:
		void set_dataSrc(String* value);
		String* get_dataSrc();
		void set_dataFormatAs(String* value);
		String* get_dataFormatAs();
		void set_dataFld(String* value);
		String* get_dataFld();
	};

	class SVGEllipseElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		void set_ry(SVGAnimatedLength* value);
		SVGAnimatedLength* get_ry();
		void set_cx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cx();
		void set_rx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_rx();
		void set_cy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cy();
		static void set_prototype(SVGEllipseElement* value);
		static SVGEllipseElement* get_prototype();
		SVGEllipseElement();
	};

	class SVGPathSegLinetoHorizontalRel : SVGPathSeg 
	{
	public:
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoHorizontalRel* value);
		static SVGPathSegLinetoHorizontalRel* get_prototype();
		SVGPathSegLinetoHorizontalRel();
	};

	class SVGAElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests, SVGURIReference 
	{
	public:
		void set_target(SVGAnimatedString* value);
		SVGAnimatedString* get_target();
		static void set_prototype(SVGAElement* value);
		static SVGAElement* get_prototype();
		SVGAElement();
	};

	class MSHTMLMetaElementExtensions 
	{
	public:
		void set_url(String* value);
		String* get_url();
		void set_charset(String* value);
		String* get_charset();
	};

	class SVGStylable 
	{
	public:
		void set_className(SVGAnimatedString* value);
		SVGAnimatedString* get_className();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
	};

	class MSHTMLTableCellElementExtensions 
	{
	public:
	};

	class HTMLFrameSetElement : HTMLElement, MSHTMLFrameSetElementExtensions, MSBorderColorStyle_HTMLFrameSetElement 
	{
	public:
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		typedef Object* (*callback_for_ononline)(Event* ev);
		void set_ononline(callback_for_ononline value);
		callback_for_ononline get_ononline();
		typedef Object* (*callback_for_onafterprint)(Event* ev);
		void set_onafterprint(callback_for_onafterprint value);
		callback_for_onafterprint get_onafterprint();
		typedef Object* (*callback_for_onbeforeprint)(Event* ev);
		void set_onbeforeprint(callback_for_onbeforeprint value);
		callback_for_onbeforeprint get_onbeforeprint();
		typedef Object* (*callback_for_onoffline)(Event* ev);
		void set_onoffline(callback_for_onoffline value);
		callback_for_onoffline get_onoffline();
		void set_rows(String* value);
		String* get_rows();
		void set_cols(String* value);
		String* get_cols();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		typedef Object* (*callback_for_onunload)(Event* ev);
		void set_onunload(callback_for_onunload value);
		callback_for_onunload get_onunload();
		typedef Object* (*callback_for_onhashchange)(Event* ev);
		void set_onhashchange(callback_for_onhashchange value);
		callback_for_onhashchange get_onhashchange();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		typedef Object* (*callback_for_onmessage)(MessageEvent* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onbeforeunload)(BeforeUnloadEvent* ev);
		void set_onbeforeunload(callback_for_onbeforeunload value);
		callback_for_onbeforeunload get_onbeforeunload();
		typedef Object* (*callback_for_onstorage)(StorageEvent* ev);
		void set_onstorage(callback_for_onstorage value);
		callback_for_onstorage get_onstorage();
		static void set_prototype(HTMLFrameSetElement* value);
		static HTMLFrameSetElement* get_prototype();
		HTMLFrameSetElement();
	};

	class SVGTransformable : SVGLocatable 
	{
	public:
		void set_transform(SVGAnimatedTransformList* value);
		SVGAnimatedTransformList* get_transform();
	};

	class Screen : MSScreenExtensions 
	{
	public:
		void set_width(double value);
		double get_width();
		void set_colorDepth(double value);
		double get_colorDepth();
		void set_availWidth(double value);
		double get_availWidth();
		void set_pixelDepth(double value);
		double get_pixelDepth();
		void set_availHeight(double value);
		double get_availHeight();
		void set_height(double value);
		double get_height();
		static void set_prototype(Screen* value);
		static Screen* get_prototype();
		Screen();
	};

	class NavigatorGeolocation 
	{
	public:
		void set_geolocation(Geolocation* value);
		Geolocation* get_geolocation();
	};

	class Coordinates 
	{
	public:
		void set_altitudeAccuracy(double value);
		double get_altitudeAccuracy();
		void set_longitude(double value);
		double get_longitude();
		void set_latitude(double value);
		double get_latitude();
		void set_speed(double value);
		double get_speed();
		void set_heading(double value);
		double get_heading();
		void set_altitude(double value);
		double get_altitude();
		void set_accuracy(double value);
		double get_accuracy();
		static void set_prototype(Coordinates* value);
		static Coordinates* get_prototype();
		Coordinates();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableColElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class EventListener 
	{
	public:
		void operator()(Event* evt);
	};

	class SVGLangSpace 
	{
	public:
		void set_xmllang(String* value);
		String* get_xmllang();
		void set_xmlspace(String* value);
		String* get_xmlspace();
	};

	class DataTransfer 
	{
	public:
		void set_effectAllowed(String* value);
		String* get_effectAllowed();
		void set_dropEffect(String* value);
		String* get_dropEffect();
		bool clearData();
		bool clearData(const String& format);
		bool setData(const String& format, const String& data);
		String* getData(const String& format);
		static void set_prototype(DataTransfer* value);
		static DataTransfer* get_prototype();
		DataTransfer();
	};

	class FocusEvent : UIEvent 
	{
	public:
		void set_relatedTarget(EventTarget* value);
		EventTarget* get_relatedTarget();
		void initFocusEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, EventTarget* relatedTargetArg);
		static void set_prototype(FocusEvent* value);
		static FocusEvent* get_prototype();
		FocusEvent();
	};

	class Range 
	{
	public:
		void set_startOffset(double value);
		double get_startOffset();
		void set_collapsed(bool value);
		bool get_collapsed();
		void set_endOffset(double value);
		double get_endOffset();
		void set_startContainer(Node* value);
		Node* get_startContainer();
		void set_endContainer(Node* value);
		Node* get_endContainer();
		void set_commonAncestorContainer(Node* value);
		Node* get_commonAncestorContainer();
		void setStart(Node* refNode, double offset);
		void setEndBefore(Node* refNode);
		void setStartBefore(Node* refNode);
		void selectNode(Node* refNode);
		void detach();
		ClientRect* getBoundingClientRect();
		String* toString();
		double compareBoundaryPoints(double how, Range* sourceRange);
		void insertNode(Node* newNode);
		void collapse(bool toStart);
		void selectNodeContents(Node* refNode);
		DocumentFragment* cloneContents();
		void setEnd(Node* refNode, double offset);
		Range* cloneRange();
		ClientRectList* getClientRects();
		void surroundContents(Node* newParent);
		void deleteContents();
		void setStartAfter(Node* refNode);
		DocumentFragment* extractContents();
		void setEndAfter(Node* refNode);
		void set_END_TO_END(double value);
		double get_END_TO_END();
		void set_START_TO_START(double value);
		double get_START_TO_START();
		void set_START_TO_END(double value);
		double get_START_TO_END();
		void set_END_TO_START(double value);
		double get_END_TO_START();
		static void set_prototype(Range* value);
		static Range* get_prototype();
		Range();
		static void set_END_TO_END(double value);
		static double get_END_TO_END();
		static void set_START_TO_START(double value);
		static double get_START_TO_START();
		static void set_START_TO_END(double value);
		static double get_START_TO_END();
		static void set_END_TO_START(double value);
		static double get_END_TO_START();
	};

	class MSHTMLPreElementExtensions : DOML2DeprecatedTextFlowControl_HTMLBlockElement 
	{
	public:
		void set_cite(String* value);
		String* get_cite();
	};

	class SVGPoint 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		SVGPoint* matrixTransform(SVGMatrix* matrix);
		static void set_prototype(SVGPoint* value);
		static SVGPoint* get_prototype();
		SVGPoint();
	};

	class MSPluginsCollection 
	{
	public:
		void set_length(double value);
		double get_length();
		void refresh();
		void refresh(bool reload);
		static void set_prototype(MSPluginsCollection* value);
		static MSPluginsCollection* get_prototype();
		MSPluginsCollection();
	};

	class MSHTMLFontElementExtensions 
	{
	public:
	};

	class SVGAnimatedNumberList 
	{
	public:
		void set_animVal(SVGNumberList* value);
		SVGNumberList* get_animVal();
		void set_baseVal(SVGNumberList* value);
		SVGNumberList* get_baseVal();
		static void set_prototype(SVGAnimatedNumberList* value);
		static SVGAnimatedNumberList* get_prototype();
		SVGAnimatedNumberList();
	};

	class SVGSVGElement : SVGElement, SVGZoomAndPan, SVGLangSpace, SVGLocatable, SVGTests, SVGFitToViewBox, SVGSVGElementEventHandlers, SVGStylable, DocumentEvent, ViewCSS_SVGSVGElement 
	{
	public:
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_contentStyleType(String* value);
		String* get_contentStyleType();
		void set_screenPixelToMillimeterY(double value);
		double get_screenPixelToMillimeterY();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		void set_contentScriptType(String* value);
		String* get_contentScriptType();
		void set_pixelUnitToMillimeterX(double value);
		double get_pixelUnitToMillimeterX();
		void set_currentTranslate(SVGPoint* value);
		SVGPoint* get_currentTranslate();
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_viewport(SVGRect* value);
		SVGRect* get_viewport();
		void set_currentScale(double value);
		double get_currentScale();
		void set_screenPixelToMillimeterX(double value);
		double get_screenPixelToMillimeterX();
		void set_pixelUnitToMillimeterY(double value);
		double get_pixelUnitToMillimeterY();
		void setCurrentTime(double seconds);
		SVGLength* createSVGLength();
		NodeList* getIntersectionList(SVGRect* rect, SVGElement* referenceElement);
		void unpauseAnimations();
		SVGRect* createSVGRect();
		bool checkIntersection(SVGElement* element, SVGRect* rect);
		void unsuspendRedrawAll();
		void pauseAnimations();
		double suspendRedraw(double maxWaitMilliseconds);
		void deselectAll();
		SVGAngle* createSVGAngle();
		NodeList* getEnclosureList(SVGRect* rect, SVGElement* referenceElement);
		SVGTransform* createSVGTransform();
		void unsuspendRedraw(double suspendHandleID);
		void forceRedraw();
		double getCurrentTime();
		bool checkEnclosure(SVGElement* element, SVGRect* rect);
		SVGMatrix* createSVGMatrix();
		SVGPoint* createSVGPoint();
		SVGNumber* createSVGNumber();
		SVGTransform* createSVGTransformFromMatrix(SVGMatrix* matrix);
		Element* getElementById(const String& elementId);
		static void set_prototype(SVGSVGElement* value);
		static SVGSVGElement* get_prototype();
		SVGSVGElement();
	};

	class HTMLLabelElement : HTMLElement, MSDataBindingExtensions, MSHTMLLabelElementExtensions 
	{
	public:
		void set_htmlFor(String* value);
		String* get_htmlFor();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		static void set_prototype(HTMLLabelElement* value);
		static HTMLLabelElement* get_prototype();
		HTMLLabelElement();
	};

	class MSResourceMetadata 
	{
	public:
		void set_protocol(String* value);
		String* get_protocol();
		void set_fileSize(String* value);
		String* get_fileSize();
		void set_fileUpdatedDate(String* value);
		String* get_fileUpdatedDate();
		void set_nameProp(String* value);
		String* get_nameProp();
		void set_fileCreatedDate(String* value);
		String* get_fileCreatedDate();
		void set_fileModifiedDate(String* value);
		String* get_fileModifiedDate();
		void set_mimeType(String* value);
		String* get_mimeType();
	};

	class MSHTMLQuoteElementExtensions 
	{
	public:
		void set_dateTime(String* value);
		String* get_dateTime();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLIFrameElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class HTMLLegendElement : HTMLElement, DOML2DeprecatedAlignmentStyle_HTMLLegendElement, MSDataBindingExtensions, MSHTMLLegendElementExtensions 
	{
	public:
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		static void set_prototype(HTMLLegendElement* value);
		static HTMLLegendElement* get_prototype();
		HTMLLegendElement();
	};

	class HTMLDirectoryElement : HTMLElement, DOML2DeprecatedListSpaceReduction, MSHTMLDirectoryElementExtensions 
	{
	public:
		static void set_prototype(HTMLDirectoryElement* value);
		static HTMLDirectoryElement* get_prototype();
		HTMLDirectoryElement();
	};

	class NavigatorAbilities 
	{
	public:
	};

	class MSHTMLImageElementExtensions 
	{
	public:
		void set_href(String* value);
		String* get_href();
	};

	class SVGAnimatedInteger 
	{
	public:
		void set_animVal(double value);
		double get_animVal();
		void set_baseVal(double value);
		double get_baseVal();
		static void set_prototype(SVGAnimatedInteger* value);
		static SVGAnimatedInteger* get_prototype();
		SVGAnimatedInteger();
	};

	class SVGTextElement : SVGTextPositioningElement, SVGTransformable 
	{
	public:
		static void set_prototype(SVGTextElement* value);
		static SVGTextElement* get_prototype();
		SVGTextElement();
	};

	class SVGTSpanElement : SVGTextPositioningElement 
	{
	public:
		static void set_prototype(SVGTSpanElement* value);
		static SVGTSpanElement* get_prototype();
		SVGTSpanElement();
	};

	class HTMLLIElement : HTMLElement, DOML2DeprecatedListNumberingAndBulletStyle, MSHTMLLIElementExtensions 
	{
	public:
		void set_value(double value);
		double get_value();
		static void set_prototype(HTMLLIElement* value);
		static HTMLLIElement* get_prototype();
		HTMLLIElement();
	};

	class SVGPathSegLinetoVerticalAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		static void set_prototype(SVGPathSegLinetoVerticalAbs* value);
		static SVGPathSegLinetoVerticalAbs* get_prototype();
		SVGPathSegLinetoVerticalAbs();
	};

	class ViewCSS 
	{
	public:
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	};

	class MSAttrExtensions 
	{
	public:
		void set_expando(bool value);
		bool get_expando();
	};

	class MSStorageExtensions 
	{
	public:
		void set_remainingSpace(double value);
		double get_remainingSpace();
	};

	class SVGStyleElement : SVGElement, SVGLangSpace 
	{
	public:
		void set_media(String* value);
		String* get_media();
		void set_type(String* value);
		String* get_type();
		void set_title(String* value);
		String* get_title();
		static void set_prototype(SVGStyleElement* value);
		static SVGStyleElement* get_prototype();
		SVGStyleElement();
	};

	class MSCurrentStyleCSSProperties : MSCSSProperties 
	{
	public:
		void set_blockDirection(String* value);
		String* get_blockDirection();
		void set_clipBottom(String* value);
		String* get_clipBottom();
		void set_clipLeft(String* value);
		String* get_clipLeft();
		void set_clipRight(String* value);
		String* get_clipRight();
		void set_clipTop(String* value);
		String* get_clipTop();
		void set_hasLayout(String* value);
		String* get_hasLayout();
		static void set_prototype(MSCurrentStyleCSSProperties* value);
		static MSCurrentStyleCSSProperties* get_prototype();
		MSCurrentStyleCSSProperties();
	};

	class MSLinkStyleExtensions 
	{
	public:
		void set_styleSheet(StyleSheet* value);
		StyleSheet* get_styleSheet();
	};

	class MSHTMLCollectionExtensions 
	{
	public:
		Object* urns(Object* urn);
		Object* tags(Object* tagName);
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDivElement 
	{
	public:
		void set_noWrap(bool value);
		bool get_noWrap();
	};

	class DocumentTraversal 
	{
	public:
		NodeIterator* createNodeIterator(Node* root, double whatToShow, NodeFilterCallback* filter, bool entityReferenceExpansion);
		TreeWalker* createTreeWalker(Node* root, double whatToShow, NodeFilterCallback* filter, bool entityReferenceExpansion);
	};

	class Storage : MSStorageExtensions 
	{
	public:
		Object* operator[](const String& key);
		Object* operator[](double index);
		void set_length(double value);
		double get_length();
		Object* getItem(const String& key);
		void setItem(const String& key, const String& data);
		void clear();
		void removeItem(const String& key);
		String* key(double index);
		static void set_prototype(Storage* value);
		static Storage* get_prototype();
		Storage();
	};

	class HTMLTableHeaderCellScope 
	{
	public:
		void set_scope(String* value);
		String* get_scope();
	};

	class HTMLIFrameElement : HTMLElement, GetSVGDocument, MSHTMLIFrameElementExtensions, MSDataBindingExtensions, DOML2DeprecatedAlignmentStyle_HTMLIFrameElement 
	{
	public:
		void set_width(String* value);
		String* get_width();
		void set_contentWindow(Window* value);
		Window* get_contentWindow();
		void set_scrolling(String* value);
		String* get_scrolling();
		void set_src(String* value);
		String* get_src();
		void set_marginHeight(String* value);
		String* get_marginHeight();
		void set_name(String* value);
		String* get_name();
		void set_marginWidth(String* value);
		String* get_marginWidth();
		void set_height(String* value);
		String* get_height();
		void set_contentDocument(Document* value);
		Document* get_contentDocument();
		void set_longDesc(String* value);
		String* get_longDesc();
		void set_frameBorder(String* value);
		String* get_frameBorder();
		static void set_prototype(HTMLIFrameElement* value);
		static HTMLIFrameElement* get_prototype();
		HTMLIFrameElement();
	};

	class MSNavigatorAbilities 
	{
	public:
		void set_userLanguage(String* value);
		String* get_userLanguage();
		void set_plugins(MSPluginsCollection* value);
		MSPluginsCollection* get_plugins();
		void set_cookieEnabled(bool value);
		bool get_cookieEnabled();
		void set_appCodeName(String* value);
		String* get_appCodeName();
		void set_cpuClass(String* value);
		String* get_cpuClass();
		void set_appMinorVersion(String* value);
		String* get_appMinorVersion();
		void set_connectionSpeed(double value);
		double get_connectionSpeed();
		void set_browserLanguage(String* value);
		String* get_browserLanguage();
		void set_mimeTypes(MSMimeTypesCollection* value);
		MSMimeTypesCollection* get_mimeTypes();
		void set_product(String* value);
		String* get_product();
		void set_systemLanguage(String* value);
		String* get_systemLanguage();
		bool javaEnabled();
		bool taintEnabled();
	};

	class TextRangeCollection 
	{
	public:
		TextRange* operator[](double index);
		void set_length(double value);
		double get_length();
		TextRange* item(double index);
		static void set_prototype(TextRangeCollection* value);
		static TextRangeCollection* get_prototype();
		TextRangeCollection();
	};

	class HTMLBodyElement : HTMLElement, HTMLBodyElementDOML2Deprecated, MSHTMLBodyElementExtensions, DOML2DeprecatedBackgroundStyle, DOML2DeprecatedBackgroundColorStyle 
	{
	public:
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		typedef Object* (*callback_for_ononline)(Event* ev);
		void set_ononline(callback_for_ononline value);
		callback_for_ononline get_ononline();
		typedef Object* (*callback_for_onafterprint)(Event* ev);
		void set_onafterprint(callback_for_onafterprint value);
		callback_for_onafterprint get_onafterprint();
		typedef Object* (*callback_for_onbeforeprint)(Event* ev);
		void set_onbeforeprint(callback_for_onbeforeprint value);
		callback_for_onbeforeprint get_onbeforeprint();
		typedef Object* (*callback_for_onoffline)(Event* ev);
		void set_onoffline(callback_for_onoffline value);
		callback_for_onoffline get_onoffline();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		typedef Object* (*callback_for_onhashchange)(Event* ev);
		void set_onhashchange(callback_for_onhashchange value);
		callback_for_onhashchange get_onhashchange();
		typedef Object* (*callback_for_onunload)(Event* ev);
		void set_onunload(callback_for_onunload value);
		callback_for_onunload get_onunload();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		typedef Object* (*callback_for_onmessage)(MessageEvent* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onbeforeunload)(BeforeUnloadEvent* ev);
		void set_onbeforeunload(callback_for_onbeforeunload value);
		callback_for_onbeforeunload get_onbeforeunload();
		typedef Object* (*callback_for_onstorage)(StorageEvent* ev);
		void set_onstorage(callback_for_onstorage value);
		callback_for_onstorage get_onstorage();
		static void set_prototype(HTMLBodyElement* value);
		static HTMLBodyElement* get_prototype();
		HTMLBodyElement();
	};

	class DocumentType : Node 
	{
	public:
		void set_name(String* value);
		String* get_name();
		void set_notations(NamedNodeMap* value);
		NamedNodeMap* get_notations();
		void set_systemId(String* value);
		String* get_systemId();
		void set_internalSubset(String* value);
		String* get_internalSubset();
		void set_entities(NamedNodeMap* value);
		NamedNodeMap* get_entities();
		void set_publicId(String* value);
		String* get_publicId();
		static void set_prototype(DocumentType* value);
		static DocumentType* get_prototype();
		DocumentType();
	};

	class MSHTMLInputElementExtensions : DOML2DeprecatedMarginStyle_HTMLInputElement, DOML2DeprecatedBorderStyle_HTMLInputElement 
	{
	public:
		void set_status(bool value);
		bool get_status();
		void set_complete(bool value);
		bool get_complete();
		TextRange* createTextRange();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLLegendElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class SVGRadialGradientElement : SVGGradientElement 
	{
	public:
		void set_cx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cx();
		void set_r(SVGAnimatedLength* value);
		SVGAnimatedLength* get_r();
		void set_cy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cy();
		void set_fx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_fx();
		void set_fy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_fy();
		static void set_prototype(SVGRadialGradientElement* value);
		static SVGRadialGradientElement* get_prototype();
		SVGRadialGradientElement();
	};

	class MutationEvent : Event 
	{
	public:
		void set_newValue(String* value);
		String* get_newValue();
		void set_attrChange(double value);
		double get_attrChange();
		void set_attrName(String* value);
		String* get_attrName();
		void set_prevValue(String* value);
		String* get_prevValue();
		void set_relatedNode(Node* value);
		Node* get_relatedNode();
		void initMutationEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Node* relatedNodeArg, const String& prevValueArg, const String& newValueArg, const String& attrNameArg, double attrChangeArg);
		void set_MODIFICATION(double value);
		double get_MODIFICATION();
		void set_REMOVAL(double value);
		double get_REMOVAL();
		void set_ADDITION(double value);
		double get_ADDITION();
		static void set_prototype(MutationEvent* value);
		static MutationEvent* get_prototype();
		MutationEvent();
		static void set_MODIFICATION(double value);
		static double get_MODIFICATION();
		static void set_REMOVAL(double value);
		static double get_REMOVAL();
		static void set_ADDITION(double value);
		static double get_ADDITION();
	};

	class DragEvent : MouseEvent 
	{
	public:
		void set_dataTransfer(DataTransfer* value);
		DataTransfer* get_dataTransfer();
		void initDragEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, DataTransfer* dataTransferArg);
		static void set_prototype(DragEvent* value);
		static DragEvent* get_prototype();
		DragEvent();
	};

	class DOML2DeprecatedWidthStyle_HTMLTableCellElement 
	{
	public:
		void set_width(double value);
		double get_width();
	};

	class HTMLTableSectionElement : HTMLElement, MSHTMLTableSectionElementExtensions, DOML2DeprecatedAlignmentStyle_HTMLTableSectionElement, HTMLTableAlignment 
	{
	public:
		void set_rows(HTMLCollection* value);
		HTMLCollection* get_rows();
		void deleteRow();
		void deleteRow(double index);
		HTMLElement* insertRow();
		HTMLElement* insertRow(double index);
		static void set_prototype(HTMLTableSectionElement* value);
		static HTMLTableSectionElement* get_prototype();
		HTMLTableSectionElement();
	};

	class DOML2DeprecatedListNumberingAndBulletStyle 
	{
	public:
		void set_type(String* value);
		String* get_type();
	};

	class HTMLInputElement : HTMLElement, DOML2DeprecatedAlignmentStyle_HTMLInputElement, MSImageResourceExtensions_HTMLInputElement, MSHTMLInputElementExtensions, MSDataBindingExtensions 
	{
	public:
		void set_width(String* value);
		String* get_width();
		void set_defaultChecked(bool value);
		bool get_defaultChecked();
		void set_alt(String* value);
		String* get_alt();
		void set_accept(String* value);
		String* get_accept();
		void set_value(String* value);
		String* get_value();
		void set_src(String* value);
		String* get_src();
		void set_useMap(String* value);
		String* get_useMap();
		void set_name(String* value);
		String* get_name();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_selectionStart(double value);
		double get_selectionStart();
		void set_height(String* value);
		String* get_height();
		void set_indeterminate(bool value);
		bool get_indeterminate();
		void set_readOnly(bool value);
		bool get_readOnly();
		void set_size(double value);
		double get_size();
		void set_checked(bool value);
		bool get_checked();
		void set_maxLength(double value);
		double get_maxLength();
		void set_selectionEnd(double value);
		double get_selectionEnd();
		void set_type(String* value);
		String* get_type();
		void set_defaultValue(String* value);
		String* get_defaultValue();
		void setSelectionRange(double start, double end);
		void select();
		static void set_prototype(HTMLInputElement* value);
		static HTMLInputElement* get_prototype();
		HTMLInputElement();
	};

	class HTMLAnchorElement : HTMLElement, MSHTMLAnchorElementExtensions, MSDataBindingExtensions 
	{
	public:
		void set_rel(String* value);
		String* get_rel();
		void set_protocol(String* value);
		String* get_protocol();
		void set_search(String* value);
		String* get_search();
		void set_coords(String* value);
		String* get_coords();
		void set_hostname(String* value);
		String* get_hostname();
		void set_pathname(String* value);
		String* get_pathname();
		void set_target(String* value);
		String* get_target();
		void set_href(String* value);
		String* get_href();
		void set_name(String* value);
		String* get_name();
		void set_charset(String* value);
		String* get_charset();
		void set_hreflang(String* value);
		String* get_hreflang();
		void set_port(String* value);
		String* get_port();
		void set_host(String* value);
		String* get_host();
		void set_hash(String* value);
		String* get_hash();
		void set_rev(String* value);
		String* get_rev();
		void set_type(String* value);
		String* get_type();
		void set_shape(String* value);
		String* get_shape();
		String* toString();
		static void set_prototype(HTMLAnchorElement* value);
		static HTMLAnchorElement* get_prototype();
		HTMLAnchorElement();
	};

	class SVGImageElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests, SVGURIReference 
	{
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio* value);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGImageElement* value);
		static SVGImageElement* get_prototype();
		SVGImageElement();
	};

	class MSElementExtensions 
	{
	public:
		bool msMatchesSelector(const String& selectors);
		bool fireEvent(const String& eventName);
		bool fireEvent(const String& eventName, Object* eventObj);
	};

	class HTMLParamElement : HTMLElement 
	{
	public:
		void set_value(String* value);
		String* get_value();
		void set_name(String* value);
		String* get_name();
		void set_type(String* value);
		String* get_type();
		void set_valueType(String* value);
		String* get_valueType();
		static void set_prototype(HTMLParamElement* value);
		static HTMLParamElement* get_prototype();
		HTMLParamElement();
	};

	class MSHTMLDocumentViewExtensions 
	{
	public:
		CSSStyleSheet* createStyleSheet();
		CSSStyleSheet* createStyleSheet(, const String& href);
		CSSStyleSheet* createStyleSheet(const String& href, double index);
	};

	class SVGAnimatedNumber 
	{
	public:
		void set_animVal(double value);
		double get_animVal();
		void set_baseVal(double value);
		double get_baseVal();
		static void set_prototype(SVGAnimatedNumber* value);
		static SVGAnimatedNumber* get_prototype();
		SVGAnimatedNumber();
	};

	class PerformanceTiming 
	{
	public:
		void set_redirectStart(double value);
		double get_redirectStart();
		void set_domainLookupEnd(double value);
		double get_domainLookupEnd();
		void set_responseStart(double value);
		double get_responseStart();
		void set_domComplete(double value);
		double get_domComplete();
		void set_domainLookupStart(double value);
		double get_domainLookupStart();
		void set_loadEventStart(double value);
		double get_loadEventStart();
		void set_msFirstPaint(double value);
		double get_msFirstPaint();
		void set_unloadEventEnd(double value);
		double get_unloadEventEnd();
		void set_fetchStart(double value);
		double get_fetchStart();
		void set_requestStart(double value);
		double get_requestStart();
		void set_domInteractive(double value);
		double get_domInteractive();
		void set_navigationStart(double value);
		double get_navigationStart();
		void set_connectEnd(double value);
		double get_connectEnd();
		void set_loadEventEnd(double value);
		double get_loadEventEnd();
		void set_connectStart(double value);
		double get_connectStart();
		void set_responseEnd(double value);
		double get_responseEnd();
		void set_domLoading(double value);
		double get_domLoading();
		void set_redirectEnd(double value);
		double get_redirectEnd();
		void set_unloadEventStart(double value);
		double get_unloadEventStart();
		void set_domContentLoadedEventStart(double value);
		double get_domContentLoadedEventStart();
		void set_domContentLoadedEventEnd(double value);
		double get_domContentLoadedEventEnd();
		Object* toJSON();
		static void set_prototype(PerformanceTiming* value);
		static PerformanceTiming* get_prototype();
		PerformanceTiming();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLInputElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class HTMLPreElement : HTMLElement, DOML2DeprecatedWidthStyle, MSHTMLPreElementExtensions 
	{
	public:
		static void set_prototype(HTMLPreElement* value);
		static HTMLPreElement* get_prototype();
		HTMLPreElement();
	};

	class EventException 
	{
	public:
		void set_code(double value);
		double get_code();
		void set_message(String* value);
		String* get_message();
		String* toString();
		void set_DISPATCH_REQUEST_ERR(double value);
		double get_DISPATCH_REQUEST_ERR();
		void set_UNSPECIFIED_EVENT_TYPE_ERR(double value);
		double get_UNSPECIFIED_EVENT_TYPE_ERR();
		static void set_prototype(EventException* value);
		static EventException* get_prototype();
		EventException();
		static void set_DISPATCH_REQUEST_ERR(double value);
		static double get_DISPATCH_REQUEST_ERR();
		static void set_UNSPECIFIED_EVENT_TYPE_ERR(double value);
		static double get_UNSPECIFIED_EVENT_TYPE_ERR();
	};

	class MSBorderColorHighlightStyle_HTMLTableCellElement 
	{
	public:
		void set_borderColorLight(Object* value);
		Object* get_borderColorLight();
		void set_borderColorDark(Object* value);
		Object* get_borderColorDark();
	};

	class DOMHTMLImplementation 
	{
	public:
		Document* createHTMLDocument(const String& title);
	};

	class NavigatorOnLine 
	{
	public:
		void set_onLine(bool value);
		bool get_onLine();
	};

	class SVGElementEventHandlers 
	{
	public:
		typedef Object* (*callback_for_onmouseover)(MouseEvent* ev);
		void set_onmouseover(callback_for_onmouseover value);
		callback_for_onmouseover get_onmouseover();
		typedef Object* (*callback_for_onmousemove)(MouseEvent* ev);
		void set_onmousemove(callback_for_onmousemove value);
		callback_for_onmousemove get_onmousemove();
		typedef Object* (*callback_for_onmouseout)(MouseEvent* ev);
		void set_onmouseout(callback_for_onmouseout value);
		callback_for_onmouseout get_onmouseout();
		typedef Object* (*callback_for_ondblclick)(MouseEvent* ev);
		void set_ondblclick(callback_for_ondblclick value);
		callback_for_ondblclick get_ondblclick();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		typedef Object* (*callback_for_onmousedown)(MouseEvent* ev);
		void set_onmousedown(callback_for_onmousedown value);
		callback_for_onmousedown get_onmousedown();
		typedef Object* (*callback_for_onmouseup)(MouseEvent* ev);
		void set_onmouseup(callback_for_onmouseup value);
		callback_for_onmouseup get_onmouseup();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onclick)(MouseEvent* ev);
		void set_onclick(callback_for_onclick value);
		callback_for_onclick get_onclick();
	};

	class WindowLocalStorage 
	{
	public:
		void set_localStorage(Storage* value);
		Storage* get_localStorage();
	};

	class SVGMetadataElement : SVGElement 
	{
	public:
		static void set_prototype(SVGMetadataElement* value);
		static SVGMetadataElement* get_prototype();
		SVGMetadataElement();
	};

	class SVGPathSegArcRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_sweepFlag(bool value);
		bool get_sweepFlag();
		void set_r2(double value);
		double get_r2();
		void set_x(double value);
		double get_x();
		void set_angle(double value);
		double get_angle();
		void set_r1(double value);
		double get_r1();
		void set_largeArcFlag(bool value);
		bool get_largeArcFlag();
		static void set_prototype(SVGPathSegArcRel* value);
		static SVGPathSegArcRel* get_prototype();
		SVGPathSegArcRel();
	};

	class SVGPathSegMovetoAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegMovetoAbs* value);
		static SVGPathSegMovetoAbs* get_prototype();
		SVGPathSegMovetoAbs();
	};

	class SVGStringList 
	{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		String* replaceItem(const String& newItem, double index);
		String* getItem(double index);
		void clear();
		String* appendItem(const String& newItem);
		String* initialize(const String& newItem);
		String* removeItem(double index);
		String* insertItemBefore(const String& newItem, double index);
		static void set_prototype(SVGStringList* value);
		static SVGStringList* get_prototype();
		SVGStringList();
	};

	class XDomainRequest 
	{
	public:
		void set_timeout(double value);
		double get_timeout();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onprogress)(Object* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_ontimeout)(Event* ev);
		void set_ontimeout(callback_for_ontimeout value);
		callback_for_ontimeout get_ontimeout();
		void set_responseText(String* value);
		String* get_responseText();
		void set_contentType(String* value);
		String* get_contentType();
		void open(const String& method, const String& url);
		void abort();
		void send();
		void send(Object* data);
		static void set_prototype(XDomainRequest* value);
		static XDomainRequest* get_prototype();
		XDomainRequest();
	};

	class DOML2DeprecatedBackgroundColorStyle 
	{
	public:
		void set_bgColor(Object* value);
		Object* get_bgColor();
	};

	class ElementTraversal 
	{
	public:
		void set_childElementCount(double value);
		double get_childElementCount();
		void set_previousElementSibling(Element* value);
		Element* get_previousElementSibling();
		void set_lastElementChild(Element* value);
		Element* get_lastElementChild();
		void set_nextElementSibling(Element* value);
		Element* get_nextElementSibling();
		void set_firstElementChild(Element* value);
		Element* get_firstElementChild();
	};

	class SVGLength 
	{
	public:
		void set_valueAsString(String* value);
		String* get_valueAsString();
		void set_valueInSpecifiedUnits(double value);
		double get_valueInSpecifiedUnits();
		void set_value(double value);
		double get_value();
		void set_unitType(double value);
		double get_unitType();
		void newValueSpecifiedUnits(double unitType, double valueInSpecifiedUnits);
		void convertToSpecifiedUnits(double unitType);
		void set_SVG_LENGTHTYPE_NUMBER(double value);
		double get_SVG_LENGTHTYPE_NUMBER();
		void set_SVG_LENGTHTYPE_CM(double value);
		double get_SVG_LENGTHTYPE_CM();
		void set_SVG_LENGTHTYPE_PC(double value);
		double get_SVG_LENGTHTYPE_PC();
		void set_SVG_LENGTHTYPE_PERCENTAGE(double value);
		double get_SVG_LENGTHTYPE_PERCENTAGE();
		void set_SVG_LENGTHTYPE_MM(double value);
		double get_SVG_LENGTHTYPE_MM();
		void set_SVG_LENGTHTYPE_PT(double value);
		double get_SVG_LENGTHTYPE_PT();
		void set_SVG_LENGTHTYPE_IN(double value);
		double get_SVG_LENGTHTYPE_IN();
		void set_SVG_LENGTHTYPE_EMS(double value);
		double get_SVG_LENGTHTYPE_EMS();
		void set_SVG_LENGTHTYPE_PX(double value);
		double get_SVG_LENGTHTYPE_PX();
		void set_SVG_LENGTHTYPE_UNKNOWN(double value);
		double get_SVG_LENGTHTYPE_UNKNOWN();
		void set_SVG_LENGTHTYPE_EXS(double value);
		double get_SVG_LENGTHTYPE_EXS();
		static void set_prototype(SVGLength* value);
		static SVGLength* get_prototype();
		SVGLength();
		static void set_SVG_LENGTHTYPE_NUMBER(double value);
		static double get_SVG_LENGTHTYPE_NUMBER();
		static void set_SVG_LENGTHTYPE_CM(double value);
		static double get_SVG_LENGTHTYPE_CM();
		static void set_SVG_LENGTHTYPE_PC(double value);
		static double get_SVG_LENGTHTYPE_PC();
		static void set_SVG_LENGTHTYPE_PERCENTAGE(double value);
		static double get_SVG_LENGTHTYPE_PERCENTAGE();
		static void set_SVG_LENGTHTYPE_MM(double value);
		static double get_SVG_LENGTHTYPE_MM();
		static void set_SVG_LENGTHTYPE_PT(double value);
		static double get_SVG_LENGTHTYPE_PT();
		static void set_SVG_LENGTHTYPE_IN(double value);
		static double get_SVG_LENGTHTYPE_IN();
		static void set_SVG_LENGTHTYPE_EMS(double value);
		static double get_SVG_LENGTHTYPE_EMS();
		static void set_SVG_LENGTHTYPE_PX(double value);
		static double get_SVG_LENGTHTYPE_PX();
		static void set_SVG_LENGTHTYPE_UNKNOWN(double value);
		static double get_SVG_LENGTHTYPE_UNKNOWN();
		static void set_SVG_LENGTHTYPE_EXS(double value);
		static double get_SVG_LENGTHTYPE_EXS();
	};

	class SVGPolygonElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGAnimatedPoints, SVGTests 
	{
	public:
		static void set_prototype(SVGPolygonElement* value);
		static SVGPolygonElement* get_prototype();
		SVGPolygonElement();
	};

	class HTMLPhraseElement : HTMLElement 
	{
	public:
		void set_dateTime(String* value);
		String* get_dateTime();
		void set_cite(String* value);
		String* get_cite();
		static void set_prototype(HTMLPhraseElement* value);
		static HTMLPhraseElement* get_prototype();
		HTMLPhraseElement();
	};

	class MSHTMLAreaElementExtensions 
	{
	public:
	};

	class SVGPathSegCurvetoCubicRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicRel* value);
		static SVGPathSegCurvetoCubicRel* get_prototype();
		SVGPathSegCurvetoCubicRel();
	};

	class MSEventObj 
	{
	public:
		void set_nextPage(String* value);
		String* get_nextPage();
		void set_keyCode(double value);
		double get_keyCode();
		void set_toElement(Element* value);
		Element* get_toElement();
		void set_returnValue(Object* value);
		Object* get_returnValue();
		void set_dataFld(String* value);
		String* get_dataFld();
		void set_y(double value);
		double get_y();
		void set_dataTransfer(DataTransfer* value);
		DataTransfer* get_dataTransfer();
		void set_propertyName(String* value);
		String* get_propertyName();
		void set_url(String* value);
		String* get_url();
		void set_offsetX(double value);
		double get_offsetX();
		void set_recordset(Object* value);
		Object* get_recordset();
		void set_screenX(double value);
		double get_screenX();
		void set_buttonID(double value);
		double get_buttonID();
		void set_wheelDelta(double value);
		double get_wheelDelta();
		void set_reason(double value);
		double get_reason();
		void set_origin(String* value);
		String* get_origin();
		void set_data(String* value);
		String* get_data();
		void set_srcFilter(Object* value);
		Object* get_srcFilter();
		void set_boundElements(HTMLCollection* value);
		HTMLCollection* get_boundElements();
		void set_cancelBubble(bool value);
		bool get_cancelBubble();
		void set_altLeft(bool value);
		bool get_altLeft();
		void set_behaviorCookie(double value);
		double get_behaviorCookie();
		void set_bookmarks(BookmarkCollection* value);
		BookmarkCollection* get_bookmarks();
		void set_type(String* value);
		String* get_type();
		void set_repeat(bool value);
		bool get_repeat();
		void set_srcElement(Element* value);
		Element* get_srcElement();
		void set_source(Window* value);
		Window* get_source();
		void set_fromElement(Element* value);
		Element* get_fromElement();
		void set_offsetY(double value);
		double get_offsetY();
		void set_x(double value);
		double get_x();
		void set_behaviorPart(double value);
		double get_behaviorPart();
		void set_qualifier(String* value);
		String* get_qualifier();
		void set_altKey(bool value);
		bool get_altKey();
		void set_ctrlKey(bool value);
		bool get_ctrlKey();
		void set_clientY(double value);
		double get_clientY();
		void set_shiftKey(bool value);
		bool get_shiftKey();
		void set_shiftLeft(bool value);
		bool get_shiftLeft();
		void set_contentOverflow(bool value);
		bool get_contentOverflow();
		void set_screenY(double value);
		double get_screenY();
		void set_ctrlLeft(bool value);
		bool get_ctrlLeft();
		void set_button(double value);
		double get_button();
		void set_srcUrn(String* value);
		String* get_srcUrn();
		void set_clientX(double value);
		double get_clientX();
		void set_actionURL(String* value);
		String* get_actionURL();
		Object* getAttribute(const String& strAttributeName);
		Object* getAttribute(const String& strAttributeName, double lFlags);
		void setAttribute(const String& strAttributeName, Object* AttributeValue);
		void setAttribute(const String& strAttributeName, Object* AttributeValue, double lFlags);
		bool removeAttribute(const String& strAttributeName);
		bool removeAttribute(const String& strAttributeName, double lFlags);
		static void set_prototype(MSEventObj* value);
		static MSEventObj* get_prototype();
		MSEventObj();
	};

	class SVGTextContentElement : SVGElement, SVGStylable, SVGLangSpace, SVGTests 
	{
	public:
		void set_textLength(SVGAnimatedLength* value);
		SVGAnimatedLength* get_textLength();
		void set_lengthAdjust(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_lengthAdjust();
		double getCharNumAtPosition(SVGPoint* point);
		SVGPoint* getStartPositionOfChar(double charnum);
		SVGRect* getExtentOfChar(double charnum);
		double getComputedTextLength();
		double getSubStringLength(double charnum, double nchars);
		void selectSubString(double charnum, double nchars);
		double getNumberOfChars();
		double getRotationOfChar(double charnum);
		SVGPoint* getEndPositionOfChar(double charnum);
		void set_LENGTHADJUST_SPACING(double value);
		double get_LENGTHADJUST_SPACING();
		void set_LENGTHADJUST_SPACINGANDGLYPHS(double value);
		double get_LENGTHADJUST_SPACINGANDGLYPHS();
		void set_LENGTHADJUST_UNKNOWN(double value);
		double get_LENGTHADJUST_UNKNOWN();
		static void set_prototype(SVGTextContentElement* value);
		static SVGTextContentElement* get_prototype();
		SVGTextContentElement();
		static void set_LENGTHADJUST_SPACING(double value);
		static double get_LENGTHADJUST_SPACING();
		static void set_LENGTHADJUST_SPACINGANDGLYPHS(double value);
		static double get_LENGTHADJUST_SPACINGANDGLYPHS();
		static void set_LENGTHADJUST_UNKNOWN(double value);
		static double get_LENGTHADJUST_UNKNOWN();
	};

	class DOML2DeprecatedColorProperty 
	{
	public:
		void set_color(String* value);
		String* get_color();
	};

	class MSHTMLLIElementExtensions 
	{
	public:
	};

	class HTMLCanvasElement : HTMLElement 
	{
	public:
		void set_width(double value);
		double get_width();
		void set_height(double value);
		double get_height();
		String* toDataURL();
		String* toDataURL(const String& type, Object** args);
		CanvasRenderingContext2D* getContext(const String& contextId);
		static void set_prototype(HTMLCanvasElement* value);
		static HTMLCanvasElement* get_prototype();
		HTMLCanvasElement();
	};

	class HTMLTitleElement : HTMLElement 
	{
	public:
		void set_text(String* value);
		String* get_text();
		static void set_prototype(HTMLTitleElement* value);
		static HTMLTitleElement* get_prototype();
		HTMLTitleElement();
	};

	class Location 
	{
	public:
		void set_hash(String* value);
		String* get_hash();
		void set_protocol(String* value);
		String* get_protocol();
		void set_search(String* value);
		String* get_search();
		void set_href(String* value);
		String* get_href();
		void set_hostname(String* value);
		String* get_hostname();
		void set_port(String* value);
		String* get_port();
		void set_pathname(String* value);
		String* get_pathname();
		void set_host(String* value);
		String* get_host();
		void reload();
		void reload(bool flag);
		void replace(const String& url);
		void assign(const String& url);
		String* toString();
		static void set_prototype(Location* value);
		static Location* get_prototype();
		Location();
	};

	class HTMLStyleElement : HTMLElement, MSLinkStyleExtensions, LinkStyle 
	{
	public:
		void set_media(String* value);
		String* get_media();
		void set_type(String* value);
		String* get_type();
		static void set_prototype(HTMLStyleElement* value);
		static HTMLStyleElement* get_prototype();
		HTMLStyleElement();
	};

	class MSHTMLOptGroupElementExtensions 
	{
	public:
		void set_index(double value);
		double get_index();
		void set_defaultSelected(bool value);
		bool get_defaultSelected();
		void set_text(String* value);
		String* get_text();
		void set_value(String* value);
		String* get_value();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_selected(bool value);
		bool get_selected();
	};

	class MSBorderColorHighlightStyle 
	{
	public:
		void set_borderColorLight(Object* value);
		Object* get_borderColorLight();
		void set_borderColorDark(Object* value);
		Object* get_borderColorDark();
	};

	class DOML2DeprecatedSizeProperty_HTMLBaseFontElement 
	{
	public:
		void set_size(double value);
		double get_size();
	};

	class SVGTransform 
	{
	public:
		void set_type(double value);
		double get_type();
		void set_angle(double value);
		double get_angle();
		void set_matrix(SVGMatrix* value);
		SVGMatrix* get_matrix();
		void setTranslate(double tx, double ty);
		void setScale(double sx, double sy);
		void setMatrix(SVGMatrix* matrix);
		void setSkewY(double angle);
		void setRotate(double angle, double cx, double cy);
		void setSkewX(double angle);
		void set_SVG_TRANSFORM_SKEWX(double value);
		double get_SVG_TRANSFORM_SKEWX();
		void set_SVG_TRANSFORM_UNKNOWN(double value);
		double get_SVG_TRANSFORM_UNKNOWN();
		void set_SVG_TRANSFORM_SCALE(double value);
		double get_SVG_TRANSFORM_SCALE();
		void set_SVG_TRANSFORM_TRANSLATE(double value);
		double get_SVG_TRANSFORM_TRANSLATE();
		void set_SVG_TRANSFORM_MATRIX(double value);
		double get_SVG_TRANSFORM_MATRIX();
		void set_SVG_TRANSFORM_ROTATE(double value);
		double get_SVG_TRANSFORM_ROTATE();
		void set_SVG_TRANSFORM_SKEWY(double value);
		double get_SVG_TRANSFORM_SKEWY();
		static void set_prototype(SVGTransform* value);
		static SVGTransform* get_prototype();
		SVGTransform();
		static void set_SVG_TRANSFORM_SKEWX(double value);
		static double get_SVG_TRANSFORM_SKEWX();
		static void set_SVG_TRANSFORM_UNKNOWN(double value);
		static double get_SVG_TRANSFORM_UNKNOWN();
		static void set_SVG_TRANSFORM_SCALE(double value);
		static double get_SVG_TRANSFORM_SCALE();
		static void set_SVG_TRANSFORM_TRANSLATE(double value);
		static double get_SVG_TRANSFORM_TRANSLATE();
		static void set_SVG_TRANSFORM_MATRIX(double value);
		static double get_SVG_TRANSFORM_MATRIX();
		static void set_SVG_TRANSFORM_ROTATE(double value);
		static double get_SVG_TRANSFORM_ROTATE();
		static void set_SVG_TRANSFORM_SKEWY(double value);
		static double get_SVG_TRANSFORM_SKEWY();
	};

	class MSCSSFilter 
	{
	public:
		void set_Percent(double value);
		double get_Percent();
		void set_Enabled(bool value);
		bool get_Enabled();
		void set_Duration(double value);
		double get_Duration();
		void Play(double Duration);
		void Apply();
		void Stop();
		static void set_prototype(MSCSSFilter* value);
		static MSCSSFilter* get_prototype();
		MSCSSFilter();
	};

	class UIEvent : Event 
	{
	public:
		void set_detail(double value);
		double get_detail();
		void set_view(AbstractView* value);
		AbstractView* get_view();
		void initUIEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg);
		static void set_prototype(UIEvent* value);
		static UIEvent* get_prototype();
		UIEvent();
	};

	class ViewCSS_SVGSVGElement 
	{
	public:
		CSSStyleDeclaration* getComputedStyle(Element* elt);
		CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	};

	class SVGURIReference 
	{
	public:
		void set_href(SVGAnimatedString* value);
		SVGAnimatedString* get_href();
	};

	class SVGPathSeg 
	{
	public:
		void set_pathSegType(double value);
		double get_pathSegType();
		void set_pathSegTypeAsLetter(String* value);
		String* get_pathSegTypeAsLetter();
		void set_PATHSEG_MOVETO_REL(double value);
		double get_PATHSEG_MOVETO_REL();
		void set_PATHSEG_LINETO_VERTICAL_REL(double value);
		double get_PATHSEG_LINETO_VERTICAL_REL();
		void set_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS(double value);
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS();
		void set_PATHSEG_CURVETO_QUADRATIC_REL(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_REL();
		void set_PATHSEG_CURVETO_CUBIC_ABS(double value);
		double get_PATHSEG_CURVETO_CUBIC_ABS();
		void set_PATHSEG_LINETO_HORIZONTAL_ABS(double value);
		double get_PATHSEG_LINETO_HORIZONTAL_ABS();
		void set_PATHSEG_CURVETO_QUADRATIC_ABS(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_ABS();
		void set_PATHSEG_LINETO_ABS(double value);
		double get_PATHSEG_LINETO_ABS();
		void set_PATHSEG_CLOSEPATH(double value);
		double get_PATHSEG_CLOSEPATH();
		void set_PATHSEG_LINETO_HORIZONTAL_REL(double value);
		double get_PATHSEG_LINETO_HORIZONTAL_REL();
		void set_PATHSEG_CURVETO_CUBIC_SMOOTH_REL(double value);
		double get_PATHSEG_CURVETO_CUBIC_SMOOTH_REL();
		void set_PATHSEG_LINETO_REL(double value);
		double get_PATHSEG_LINETO_REL();
		void set_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS();
		void set_PATHSEG_ARC_REL(double value);
		double get_PATHSEG_ARC_REL();
		void set_PATHSEG_CURVETO_CUBIC_REL(double value);
		double get_PATHSEG_CURVETO_CUBIC_REL();
		void set_PATHSEG_UNKNOWN(double value);
		double get_PATHSEG_UNKNOWN();
		void set_PATHSEG_LINETO_VERTICAL_ABS(double value);
		double get_PATHSEG_LINETO_VERTICAL_ABS();
		void set_PATHSEG_ARC_ABS(double value);
		double get_PATHSEG_ARC_ABS();
		void set_PATHSEG_MOVETO_ABS(double value);
		double get_PATHSEG_MOVETO_ABS();
		void set_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL(double value);
		double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL();
		static void set_PATHSEG_MOVETO_REL(double value);
		static double get_PATHSEG_MOVETO_REL();
		static void set_PATHSEG_LINETO_VERTICAL_REL(double value);
		static double get_PATHSEG_LINETO_VERTICAL_REL();
		static void set_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS(double value);
		static double get_PATHSEG_CURVETO_CUBIC_SMOOTH_ABS();
		static void set_PATHSEG_CURVETO_QUADRATIC_REL(double value);
		static double get_PATHSEG_CURVETO_QUADRATIC_REL();
		static void set_PATHSEG_CURVETO_CUBIC_ABS(double value);
		static double get_PATHSEG_CURVETO_CUBIC_ABS();
		static void set_PATHSEG_LINETO_HORIZONTAL_ABS(double value);
		static double get_PATHSEG_LINETO_HORIZONTAL_ABS();
		static void set_PATHSEG_CURVETO_QUADRATIC_ABS(double value);
		static double get_PATHSEG_CURVETO_QUADRATIC_ABS();
		static void set_PATHSEG_LINETO_ABS(double value);
		static double get_PATHSEG_LINETO_ABS();
		static void set_PATHSEG_CLOSEPATH(double value);
		static double get_PATHSEG_CLOSEPATH();
		static void set_PATHSEG_LINETO_HORIZONTAL_REL(double value);
		static double get_PATHSEG_LINETO_HORIZONTAL_REL();
		static void set_PATHSEG_CURVETO_CUBIC_SMOOTH_REL(double value);
		static double get_PATHSEG_CURVETO_CUBIC_SMOOTH_REL();
		static void set_PATHSEG_LINETO_REL(double value);
		static double get_PATHSEG_LINETO_REL();
		static void set_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS(double value);
		static double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS();
		static void set_PATHSEG_ARC_REL(double value);
		static double get_PATHSEG_ARC_REL();
		static void set_PATHSEG_CURVETO_CUBIC_REL(double value);
		static double get_PATHSEG_CURVETO_CUBIC_REL();
		static void set_PATHSEG_UNKNOWN(double value);
		static double get_PATHSEG_UNKNOWN();
		static void set_PATHSEG_LINETO_VERTICAL_ABS(double value);
		static double get_PATHSEG_LINETO_VERTICAL_ABS();
		static void set_PATHSEG_ARC_ABS(double value);
		static double get_PATHSEG_ARC_ABS();
		static void set_PATHSEG_MOVETO_ABS(double value);
		static double get_PATHSEG_MOVETO_ABS();
		static void set_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL(double value);
		static double get_PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL();
	};

	class WheelEvent : MouseEvent 
	{
	public:
		void set_deltaZ(double value);
		double get_deltaZ();
		void set_deltaX(double value);
		double get_deltaX();
		void set_deltaMode(double value);
		double get_deltaMode();
		void set_deltaY(double value);
		double get_deltaY();
		void initWheelEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double buttonArg, EventTarget* relatedTargetArg, const String& modifiersListArg, double deltaXArg, double deltaYArg, double deltaZArg, double deltaMode);
		void set_DOM_DELTA_PIXEL(double value);
		double get_DOM_DELTA_PIXEL();
		void set_DOM_DELTA_LINE(double value);
		double get_DOM_DELTA_LINE();
		void set_DOM_DELTA_PAGE(double value);
		double get_DOM_DELTA_PAGE();
		static void set_prototype(WheelEvent* value);
		static WheelEvent* get_prototype();
		WheelEvent();
		static void set_DOM_DELTA_PIXEL(double value);
		static double get_DOM_DELTA_PIXEL();
		static void set_DOM_DELTA_LINE(double value);
		static double get_DOM_DELTA_LINE();
		static void set_DOM_DELTA_PAGE(double value);
		static double get_DOM_DELTA_PAGE();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLDivElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class MSEventAttachmentTarget 
	{
	public:
		bool attachEvent(const String& event, EventListener* listener);
		void detachEvent(const String& event, EventListener* listener);
	};

	class SVGNumber 
	{
	public:
		void set_value(double value);
		double get_value();
		static void set_prototype(SVGNumber* value);
		static SVGNumber* get_prototype();
		SVGNumber();
	};

	class SVGPathElement : SVGElement, SVGStylable, SVGAnimatedPathData, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		double getPathSegAtLength(double distance);
		SVGPoint* getPointAtLength(double distance);
		SVGPathSegCurvetoQuadraticAbs* createSVGPathSegCurvetoQuadraticAbs(double x, double y, double x1, double y1);
		SVGPathSegLinetoRel* createSVGPathSegLinetoRel(double x, double y);
		SVGPathSegCurvetoQuadraticRel* createSVGPathSegCurvetoQuadraticRel(double x, double y, double x1, double y1);
		SVGPathSegCurvetoCubicAbs* createSVGPathSegCurvetoCubicAbs(double x, double y, double x1, double y1, double x2, double y2);
		SVGPathSegLinetoAbs* createSVGPathSegLinetoAbs(double x, double y);
		SVGPathSegClosePath* createSVGPathSegClosePath();
		SVGPathSegCurvetoCubicRel* createSVGPathSegCurvetoCubicRel(double x, double y, double x1, double y1, double x2, double y2);
		SVGPathSegCurvetoQuadraticSmoothRel* createSVGPathSegCurvetoQuadraticSmoothRel(double x, double y);
		SVGPathSegMovetoRel* createSVGPathSegMovetoRel(double x, double y);
		SVGPathSegCurvetoCubicSmoothAbs* createSVGPathSegCurvetoCubicSmoothAbs(double x, double y, double x2, double y2);
		SVGPathSegMovetoAbs* createSVGPathSegMovetoAbs(double x, double y);
		SVGPathSegLinetoVerticalRel* createSVGPathSegLinetoVerticalRel(double y);
		SVGPathSegArcRel* createSVGPathSegArcRel(double x, double y, double r1, double r2, double angle, bool largeArcFlag, bool sweepFlag);
		SVGPathSegCurvetoQuadraticSmoothAbs* createSVGPathSegCurvetoQuadraticSmoothAbs(double x, double y);
		SVGPathSegLinetoHorizontalRel* createSVGPathSegLinetoHorizontalRel(double x);
		double getTotalLength();
		SVGPathSegCurvetoCubicSmoothRel* createSVGPathSegCurvetoCubicSmoothRel(double x, double y, double x2, double y2);
		SVGPathSegLinetoHorizontalAbs* createSVGPathSegLinetoHorizontalAbs(double x);
		SVGPathSegLinetoVerticalAbs* createSVGPathSegLinetoVerticalAbs(double y);
		SVGPathSegArcAbs* createSVGPathSegArcAbs(double x, double y, double r1, double r2, double angle, bool largeArcFlag, bool sweepFlag);
		static void set_prototype(SVGPathElement* value);
		static SVGPathElement* get_prototype();
		SVGPathElement();
	};

	class MSCompatibleInfo 
	{
	public:
		void set_version(String* value);
		String* get_version();
		void set_userAgent(String* value);
		String* get_userAgent();
		static void set_prototype(MSCompatibleInfo* value);
		static MSCompatibleInfo* get_prototype();
		MSCompatibleInfo();
	};

	class MSHTMLDocumentEventExtensions 
	{
	public:
		MSEventObj* createEventObject();
		MSEventObj* createEventObject(Object* eventObj);
		bool fireEvent(const String& eventName);
		bool fireEvent(const String& eventName, Object* eventObj);
	};

	class Text : CharacterData, MSNodeExtensions 
	{
	public:
		void set_wholeText(String* value);
		String* get_wholeText();
		Text* splitText(double offset);
		Text* replaceWholeText(const String& content);
		static void set_prototype(Text* value);
		static Text* get_prototype();
		Text();
	};

	class SVGAnimatedRect 
	{
	public:
		void set_animVal(SVGRect* value);
		SVGRect* get_animVal();
		void set_baseVal(SVGRect* value);
		SVGRect* get_baseVal();
		static void set_prototype(SVGAnimatedRect* value);
		static SVGAnimatedRect* get_prototype();
		SVGAnimatedRect();
	};

	class CSSNamespaceRule : CSSRule 
	{
	public:
		void set_namespaceURI(String* value);
		String* get_namespaceURI();
		void set_prefix(String* value);
		String* get_prefix();
		static void set_prototype(CSSNamespaceRule* value);
		static CSSNamespaceRule* get_prototype();
		CSSNamespaceRule();
	};

	class HTMLUnknownElement : HTMLElement, MSDataBindingRecordSetReadonlyExtensions, MSHTMLUnknownElementExtensions 
	{
	public:
		static void set_prototype(HTMLUnknownElement* value);
		static HTMLUnknownElement* get_prototype();
		HTMLUnknownElement();
	};

	class SVGPathSegList 
	{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGPathSeg* replaceItem(SVGPathSeg* newItem, double index);
		SVGPathSeg* getItem(double index);
		void clear();
		SVGPathSeg* appendItem(SVGPathSeg* newItem);
		SVGPathSeg* initialize(SVGPathSeg* newItem);
		SVGPathSeg* removeItem(double index);
		SVGPathSeg* insertItemBefore(SVGPathSeg* newItem, double index);
		static void set_prototype(SVGPathSegList* value);
		static SVGPathSegList* get_prototype();
		SVGPathSegList();
	};

	class HTMLAudioElement : HTMLMediaElement 
	{
	public:
		static void set_prototype(HTMLAudioElement* value);
		static HTMLAudioElement* get_prototype();
		HTMLAudioElement();
	};

	class MSImageResourceExtensions 
	{
	public:
		void set_dynsrc(String* value);
		String* get_dynsrc();
		void set_vrml(String* value);
		String* get_vrml();
		void set_lowsrc(String* value);
		String* get_lowsrc();
		void set_start(String* value);
		String* get_start();
		void set_loop(double value);
		double get_loop();
	};

	class MSBorderColorHighlightStyle_HTMLTableRowElement 
	{
	public:
		void set_borderColorLight(Object* value);
		Object* get_borderColorLight();
		void set_borderColorDark(Object* value);
		Object* get_borderColorDark();
	};

	class PositionError 
	{
	public:
		void set_code(double value);
		double get_code();
		void set_message(String* value);
		String* get_message();
		String* toString();
		void set_POSITION_UNAVAILABLE(double value);
		double get_POSITION_UNAVAILABLE();
		void set_PERMISSION_DENIED(double value);
		double get_PERMISSION_DENIED();
		void set_TIMEOUT(double value);
		double get_TIMEOUT();
		static void set_POSITION_UNAVAILABLE(double value);
		static double get_POSITION_UNAVAILABLE();
		static void set_PERMISSION_DENIED(double value);
		static double get_PERMISSION_DENIED();
		static void set_TIMEOUT(double value);
		static double get_TIMEOUT();
	};

	class BrowserPublic 
	{
	public:
		static void set_prototype(BrowserPublic* value);
		static BrowserPublic* get_prototype();
		BrowserPublic();
	};

	class HTMLTableCellElement : HTMLElement, DOML2DeprecatedTableCellHeight, HTMLTableAlignment, MSBorderColorHighlightStyle_HTMLTableCellElement, DOML2DeprecatedWidthStyle_HTMLTableCellElement, DOML2DeprecatedBackgroundStyle, MSBorderColorStyle_HTMLTableCellElement, MSHTMLTableCellElementExtensions, DOML2DeprecatedAlignmentStyle_HTMLTableCellElement, HTMLTableHeaderCellScope, DOML2DeprecatedWordWrapSuppression, DOML2DeprecatedBackgroundColorStyle 
	{
	public:
		void set_headers(String* value);
		String* get_headers();
		void set_abbr(String* value);
		String* get_abbr();
		void set_rowSpan(double value);
		double get_rowSpan();
		void set_cellIndex(double value);
		double get_cellIndex();
		void set_colSpan(double value);
		double get_colSpan();
		void set_axis(String* value);
		String* get_axis();
		static void set_prototype(HTMLTableCellElement* value);
		static HTMLTableCellElement* get_prototype();
		HTMLTableCellElement();
	};

	class MSNamespaceInfoCollection 
	{
	public:
		Object* operator[](const String& index);
		Object* operator()(Object* index);
		void set_length(double value);
		double get_length();
		Object* add();
		Object* add(, const String& namespace);
		Object* add(, const String& namespace, );
		Object* add(const String& namespace, const String& urn, Object* implementationUrl);
		Object* item(Object* index);
		static void set_prototype(MSNamespaceInfoCollection* value);
		static MSNamespaceInfoCollection* get_prototype();
		MSNamespaceInfoCollection();
	};

	class SVGElementInstance : EventTarget 
	{
	public:
		void set_previousSibling(SVGElementInstance* value);
		SVGElementInstance* get_previousSibling();
		void set_parentNode(SVGElementInstance* value);
		SVGElementInstance* get_parentNode();
		void set_lastChild(SVGElementInstance* value);
		SVGElementInstance* get_lastChild();
		void set_nextSibling(SVGElementInstance* value);
		SVGElementInstance* get_nextSibling();
		void set_childNodes(SVGElementInstanceList* value);
		SVGElementInstanceList* get_childNodes();
		void set_correspondingUseElement(SVGUseElement* value);
		SVGUseElement* get_correspondingUseElement();
		void set_correspondingElement(SVGElement* value);
		SVGElement* get_correspondingElement();
		void set_firstChild(SVGElementInstance* value);
		SVGElementInstance* get_firstChild();
		static void set_prototype(SVGElementInstance* value);
		static SVGElementInstance* get_prototype();
		SVGElementInstance();
	};

	class MSHTMLUListElementExtensions 
	{
	public:
	};

	class SVGCircleElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		void set_cx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cx();
		void set_r(SVGAnimatedLength* value);
		SVGAnimatedLength* get_r();
		void set_cy(SVGAnimatedLength* value);
		SVGAnimatedLength* get_cy();
		static void set_prototype(SVGCircleElement* value);
		static SVGCircleElement* get_prototype();
		SVGCircleElement();
	};

	class HTMLBaseFontElement : HTMLElement, DOML2DeprecatedSizeProperty_HTMLBaseFontElement, DOML2DeprecatedColorProperty 
	{
	public:
		void set_face(String* value);
		String* get_face();
		static void set_prototype(HTMLBaseFontElement* value);
		static HTMLBaseFontElement* get_prototype();
		HTMLBaseFontElement();
	};

	class CustomEvent : Event 
	{
	public:
		void set_detail(Object* value);
		Object* get_detail();
		void initCustomEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Object* detailArg);
		static void set_prototype(CustomEvent* value);
		static CustomEvent* get_prototype();
		CustomEvent();
	};

	class CSSImportRule : CSSRule 
	{
	public:
		void set_styleSheet(CSSStyleSheet* value);
		CSSStyleSheet* get_styleSheet();
		void set_href(String* value);
		String* get_href();
		void set_media(MediaList* value);
		MediaList* get_media();
		static void set_prototype(CSSImportRule* value);
		static CSSImportRule* get_prototype();
		CSSImportRule();
	};

	class StyleSheetList 
	{
	public:
		StyleSheet* operator[](double index);
		void set_length(double value);
		double get_length();
		StyleSheet* item();
		StyleSheet* item(double index);
		static void set_prototype(StyleSheetList* value);
		static StyleSheetList* get_prototype();
		StyleSheetList();
	};

	class HTMLTextAreaElement : HTMLElement, MSDataBindingExtensions, MSHTMLTextAreaElementExtensions 
	{
	public:
		void set_value(String* value);
		String* get_value();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_name(String* value);
		String* get_name();
		void set_selectionStart(double value);
		double get_selectionStart();
		void set_rows(double value);
		double get_rows();
		void set_cols(double value);
		double get_cols();
		void set_readOnly(bool value);
		bool get_readOnly();
		void set_wrap(String* value);
		String* get_wrap();
		void set_selectionEnd(double value);
		double get_selectionEnd();
		void set_type(String* value);
		String* get_type();
		void set_defaultValue(String* value);
		String* get_defaultValue();
		void setSelectionRange(double start, double end);
		void select();
		static void set_prototype(HTMLTextAreaElement* value);
		static HTMLTextAreaElement* get_prototype();
		HTMLTextAreaElement();
	};

	class MSHTMLFormElementExtensions 
	{
	public:
		void set_encoding(String* value);
		String* get_encoding();
	};

	class DOML2DeprecatedMarginStyle 
	{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class Geolocation 
	{
	public:
		void clearWatch(double watchId);
		void getCurrentPosition(PositionCallback* successCallback);
		void getCurrentPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback);
		void getCurrentPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback, PositionOptions* options);
		double watchPosition(PositionCallback* successCallback);
		double watchPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback);
		double watchPosition(PositionCallback* successCallback, PositionErrorCallback* errorCallback, PositionOptions* options);
		static void set_prototype(Geolocation* value);
		static Geolocation* get_prototype();
		Geolocation();
	};

	class MSWindowModeless 
	{
	public:
		void set_dialogTop(Object* value);
		Object* get_dialogTop();
		void set_dialogLeft(Object* value);
		Object* get_dialogLeft();
		void set_dialogWidth(Object* value);
		Object* get_dialogWidth();
		void set_dialogHeight(Object* value);
		Object* get_dialogHeight();
		void set_menuArguments(Object* value);
		Object* get_menuArguments();
	};

	class HTMLMarqueeElement : HTMLElement, DOML2DeprecatedMarginStyle_HTMLMarqueeElement, MSDataBindingExtensions, MSHTMLMarqueeElementExtensions, DOML2DeprecatedBackgroundColorStyle 
	{
	public:
		void set_width(String* value);
		String* get_width();
		typedef Object* (*callback_for_onbounce)(Event* ev);
		void set_onbounce(callback_for_onbounce value);
		callback_for_onbounce get_onbounce();
		void set_trueSpeed(bool value);
		bool get_trueSpeed();
		void set_scrollAmount(double value);
		double get_scrollAmount();
		void set_scrollDelay(double value);
		double get_scrollDelay();
		void set_behavior(String* value);
		String* get_behavior();
		void set_height(String* value);
		String* get_height();
		void set_loop(double value);
		double get_loop();
		void set_direction(String* value);
		String* get_direction();
		typedef Object* (*callback_for_onstart)(Event* ev);
		void set_onstart(callback_for_onstart value);
		callback_for_onstart get_onstart();
		typedef Object* (*callback_for_onfinish)(Event* ev);
		void set_onfinish(callback_for_onfinish value);
		callback_for_onfinish get_onfinish();
		void stop();
		void start();
		static void set_prototype(HTMLMarqueeElement* value);
		static HTMLMarqueeElement* get_prototype();
		HTMLMarqueeElement();
	};

	class SVGRect 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_width(double value);
		double get_width();
		void set_x(double value);
		double get_x();
		void set_height(double value);
		double get_height();
		static void set_prototype(SVGRect* value);
		static SVGRect* get_prototype();
		SVGRect();
	};

	class MSNodeExtensions 
	{
	public:
		Node* swapNode(Node* otherNode);
		Node* removeNode();
		Node* removeNode(bool deep);
		Node* replaceNode(Node* replacement);
	};

	class KeyboardEventExtensions 
	{
	public:
		void set_keyCode(double value);
		double get_keyCode();
		void set_which(double value);
		double get_which();
		void set_charCode(double value);
		double get_charCode();
	};

	class History 
	{
	public:
		void set_length(double value);
		double get_length();
		void back();
		void back(Object* distance);
		void forward();
		void forward(Object* distance);
		void go();
		void go(Object* delta);
		static void set_prototype(History* value);
		static History* get_prototype();
		History();
	};

	class DocumentStyle 
	{
	public:
		void set_styleSheets(StyleSheetList* value);
		StyleSheetList* get_styleSheets();
	};

	class SVGPathSegCurvetoCubicAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicAbs* value);
		static SVGPathSegCurvetoCubicAbs* get_prototype();
		SVGPathSegCurvetoCubicAbs();
	};

	class TimeRanges 
	{
	public:
		void set_length(double value);
		double get_length();
		double start(double index);
		double end(double index);
		static void set_prototype(TimeRanges* value);
		static TimeRanges* get_prototype();
		TimeRanges();
	};

	class SVGPathSegCurvetoQuadraticAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_y1(double value);
		double get_y1();
		void set_x(double value);
		double get_x();
		void set_x1(double value);
		double get_x1();
		static void set_prototype(SVGPathSegCurvetoQuadraticAbs* value);
		static SVGPathSegCurvetoQuadraticAbs* get_prototype();
		SVGPathSegCurvetoQuadraticAbs();
	};

	class MSHTMLSelectElementExtensions 
	{
	public:
	};

	class CSSRule 
	{
	public:
		void set_cssText(String* value);
		String* get_cssText();
		void set_parentStyleSheet(CSSStyleSheet* value);
		CSSStyleSheet* get_parentStyleSheet();
		void set_parentRule(CSSRule* value);
		CSSRule* get_parentRule();
		void set_type(double value);
		double get_type();
		void set_IMPORT_RULE(double value);
		double get_IMPORT_RULE();
		void set_MEDIA_RULE(double value);
		double get_MEDIA_RULE();
		void set_STYLE_RULE(double value);
		double get_STYLE_RULE();
		void set_NAMESPACE_RULE(double value);
		double get_NAMESPACE_RULE();
		void set_PAGE_RULE(double value);
		double get_PAGE_RULE();
		void set_UNKNOWN_RULE(double value);
		double get_UNKNOWN_RULE();
		void set_FONT_FACE_RULE(double value);
		double get_FONT_FACE_RULE();
		void set_CHARSET_RULE(double value);
		double get_CHARSET_RULE();
		static void set_prototype(CSSRule* value);
		static CSSRule* get_prototype();
		CSSRule();
		static void set_IMPORT_RULE(double value);
		static double get_IMPORT_RULE();
		static void set_MEDIA_RULE(double value);
		static double get_MEDIA_RULE();
		static void set_STYLE_RULE(double value);
		static double get_STYLE_RULE();
		static void set_NAMESPACE_RULE(double value);
		static double get_NAMESPACE_RULE();
		static void set_PAGE_RULE(double value);
		static double get_PAGE_RULE();
		static void set_UNKNOWN_RULE(double value);
		static double get_UNKNOWN_RULE();
		static void set_FONT_FACE_RULE(double value);
		static double get_FONT_FACE_RULE();
		static void set_CHARSET_RULE(double value);
		static double get_CHARSET_RULE();
	};

	class SVGPathSegLinetoAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoAbs* value);
		static SVGPathSegLinetoAbs* get_prototype();
		SVGPathSegLinetoAbs();
	};

	class MSMouseEventExtensions 
	{
	public:
		void set_toElement(Element* value);
		Element* get_toElement();
		void set_layerY(double value);
		double get_layerY();
		void set_fromElement(Element* value);
		Element* get_fromElement();
		void set_which(double value);
		double get_which();
		void set_layerX(double value);
		double get_layerX();
	};

	class HTMLModElement : HTMLElement, MSHTMLModElementExtensions 
	{
	public:
		void set_dateTime(String* value);
		String* get_dateTime();
		void set_cite(String* value);
		String* get_cite();
		static void set_prototype(HTMLModElement* value);
		static HTMLModElement* get_prototype();
		HTMLModElement();
	};

	class DOML2DeprecatedWordWrapSuppression 
	{
	public:
		void set_noWrap(bool value);
		bool get_noWrap();
	};

	class BeforeUnloadEvent : Event 
	{
	public:
		void set_returnValue(String* value);
		String* get_returnValue();
		static void set_prototype(BeforeUnloadEvent* value);
		static BeforeUnloadEvent* get_prototype();
		BeforeUnloadEvent();
	};

	class MSPopupWindow 
	{
	public:
		void set_document(HTMLDocument* value);
		HTMLDocument* get_document();
		void set_isOpen(bool value);
		bool get_isOpen();
		void show(double x, double y, double w, double h);
		void show(double x, double y, double w, double h, Object* element);
		void hide();
		static void set_prototype(MSPopupWindow* value);
		static MSPopupWindow* get_prototype();
		MSPopupWindow();
	};

	class SVGMatrix 
	{
	public:
		void set_e(double value);
		double get_e();
		void set_c(double value);
		double get_c();
		void set_a(double value);
		double get_a();
		void set_b(double value);
		double get_b();
		void set_d(double value);
		double get_d();
		void set_f(double value);
		double get_f();
		SVGMatrix* multiply(SVGMatrix* secondMatrix);
		SVGMatrix* flipY();
		SVGMatrix* skewY(double angle);
		SVGMatrix* inverse();
		SVGMatrix* scaleNonUniform(double scaleFactorX, double scaleFactorY);
		SVGMatrix* rotate(double angle);
		SVGMatrix* flipX();
		SVGMatrix* translate(double x, double y);
		SVGMatrix* scale(double scaleFactor);
		SVGMatrix* rotateFromVector(double x, double y);
		SVGMatrix* skewX(double angle);
		static void set_prototype(SVGMatrix* value);
		static SVGMatrix* get_prototype();
		SVGMatrix();
	};

	class SVGUseElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests, SVGURIReference 
	{
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_animatedInstanceRoot(SVGElementInstance* value);
		SVGElementInstance* get_animatedInstanceRoot();
		void set_instanceRoot(SVGElementInstance* value);
		SVGElementInstance* get_instanceRoot();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGUseElement* value);
		static SVGUseElement* get_prototype();
		SVGUseElement();
	};

	class Event : MSEventExtensions 
	{
	public:
		void set_timeStamp(double value);
		double get_timeStamp();
		void set_defaultPrevented(bool value);
		bool get_defaultPrevented();
		void set_isTrusted(bool value);
		bool get_isTrusted();
		void set_currentTarget(EventTarget* value);
		EventTarget* get_currentTarget();
		void set_target(EventTarget* value);
		EventTarget* get_target();
		void set_eventPhase(double value);
		double get_eventPhase();
		void set_type(String* value);
		String* get_type();
		void set_cancelable(bool value);
		bool get_cancelable();
		void set_bubbles(bool value);
		bool get_bubbles();
		void initEvent(const String& eventTypeArg, bool canBubbleArg, bool cancelableArg);
		void stopPropagation();
		void stopImmediatePropagation();
		void preventDefault();
		void set_CAPTURING_PHASE(double value);
		double get_CAPTURING_PHASE();
		void set_AT_TARGET(double value);
		double get_AT_TARGET();
		void set_BUBBLING_PHASE(double value);
		double get_BUBBLING_PHASE();
		static void set_prototype(Event* value);
		static Event* get_prototype();
		Event();
		static void set_CAPTURING_PHASE(double value);
		static double get_CAPTURING_PHASE();
		static void set_AT_TARGET(double value);
		static double get_AT_TARGET();
		static void set_BUBBLING_PHASE(double value);
		static double get_BUBBLING_PHASE();
	};

	class ImageData 
	{
	public:
		void set_width(double value);
		double get_width();
		void set_data(double[] value);
		double[] get_data();
		void set_height(double value);
		double get_height();
		static void set_prototype(ImageData* value);
		static ImageData* get_prototype();
		ImageData();
	};

	class MSHTMLElementExtensions 
	{
	public:
		typedef Object* (*callback_for_onlosecapture)(MSEventObj* ev);
		void set_onlosecapture(callback_for_onlosecapture value);
		callback_for_onlosecapture get_onlosecapture();
		typedef Object* (*callback_for_onrowexit)(MSEventObj* ev);
		void set_onrowexit(callback_for_onrowexit value);
		callback_for_onrowexit get_onrowexit();
		typedef Object* (*callback_for_oncontrolselect)(MSEventObj* ev);
		void set_oncontrolselect(callback_for_oncontrolselect value);
		callback_for_oncontrolselect get_oncontrolselect();
		typedef Object* (*callback_for_onrowsinserted)(MSEventObj* ev);
		void set_onrowsinserted(callback_for_onrowsinserted value);
		callback_for_onrowsinserted get_onrowsinserted();
		typedef Object* (*callback_for_onmouseleave)(MouseEvent* ev);
		void set_onmouseleave(callback_for_onmouseleave value);
		callback_for_onmouseleave get_onmouseleave();
		void set_document(HTMLDocument* value);
		HTMLDocument* get_document();
		void set_behaviorUrns(MSBehaviorUrnsCollection* value);
		MSBehaviorUrnsCollection* get_behaviorUrns();
		typedef Object* (*callback_for_onpropertychange)(MSEventObj* ev);
		void set_onpropertychange(callback_for_onpropertychange value);
		callback_for_onpropertychange get_onpropertychange();
		void set_children(HTMLCollection* value);
		HTMLCollection* get_children();
		void set_filters(Object* value);
		Object* get_filters();
		typedef Object* (*callback_for_onbeforecut)(DragEvent* ev);
		void set_onbeforecut(callback_for_onbeforecut value);
		callback_for_onbeforecut get_onbeforecut();
		void set_scopeName(String* value);
		String* get_scopeName();
		typedef Object* (*callback_for_onbeforepaste)(DragEvent* ev);
		void set_onbeforepaste(callback_for_onbeforepaste value);
		callback_for_onbeforepaste get_onbeforepaste();
		typedef Object* (*callback_for_onmove)(MSEventObj* ev);
		void set_onmove(callback_for_onmove value);
		callback_for_onmove get_onmove();
		typedef Object* (*callback_for_onafterupdate)(MSEventObj* ev);
		void set_onafterupdate(callback_for_onafterupdate value);
		callback_for_onafterupdate get_onafterupdate();
		typedef Object* (*callback_for_onbeforecopy)(DragEvent* ev);
		void set_onbeforecopy(callback_for_onbeforecopy value);
		callback_for_onbeforecopy get_onbeforecopy();
		typedef Object* (*callback_for_onlayoutcomplete)(MSEventObj* ev);
		void set_onlayoutcomplete(callback_for_onlayoutcomplete value);
		callback_for_onlayoutcomplete get_onlayoutcomplete();
		typedef Object* (*callback_for_onresizeend)(MSEventObj* ev);
		void set_onresizeend(callback_for_onresizeend value);
		callback_for_onresizeend get_onresizeend();
		void set_uniqueID(String* value);
		String* get_uniqueID();
		typedef Object* (*callback_for_onhelp)(Event* ev);
		void set_onhelp(callback_for_onhelp value);
		callback_for_onhelp get_onhelp();
		typedef Object* (*callback_for_onbeforeactivate)(UIEvent* ev);
		void set_onbeforeactivate(callback_for_onbeforeactivate value);
		callback_for_onbeforeactivate get_onbeforeactivate();
		void set_isMultiLine(bool value);
		bool get_isMultiLine();
		void set_uniqueNumber(double value);
		double get_uniqueNumber();
		void set_tagUrn(String* value);
		String* get_tagUrn();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		typedef Object* (*callback_for_ondataavailable)(MSEventObj* ev);
		void set_ondataavailable(callback_for_ondataavailable value);
		callback_for_ondataavailable get_ondataavailable();
		void set_hideFocus(bool value);
		bool get_hideFocus();
		typedef Object* (*callback_for_onbeforeupdate)(MSEventObj* ev);
		void set_onbeforeupdate(callback_for_onbeforeupdate value);
		callback_for_onbeforeupdate get_onbeforeupdate();
		typedef Object* (*callback_for_onfilterchange)(MSEventObj* ev);
		void set_onfilterchange(callback_for_onfilterchange value);
		callback_for_onfilterchange get_onfilterchange();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		void set_recordNumber(Object* value);
		Object* get_recordNumber();
		void set_parentTextEdit(Element* value);
		Element* get_parentTextEdit();
		typedef Object* (*callback_for_ondatasetcomplete)(MSEventObj* ev);
		void set_ondatasetcomplete(callback_for_ondatasetcomplete value);
		callback_for_ondatasetcomplete get_ondatasetcomplete();
		typedef Object* (*callback_for_onbeforedeactivate)(UIEvent* ev);
		void set_onbeforedeactivate(callback_for_onbeforedeactivate value);
		callback_for_onbeforedeactivate get_onbeforedeactivate();
		void set_outerText(String* value);
		String* get_outerText();
		typedef Object* (*callback_for_onresizestart)(MSEventObj* ev);
		void set_onresizestart(callback_for_onresizestart value);
		callback_for_onresizestart get_onresizestart();
		typedef Object* (*callback_for_onactivate)(UIEvent* ev);
		void set_onactivate(callback_for_onactivate value);
		callback_for_onactivate get_onactivate();
		void set_isTextEdit(bool value);
		bool get_isTextEdit();
		void set_isDisabled(bool value);
		bool get_isDisabled();
		void set_readyState(String* value);
		String* get_readyState();
		void set_all(HTMLCollection* value);
		HTMLCollection* get_all();
		typedef Object* (*callback_for_onmouseenter)(MouseEvent* ev);
		void set_onmouseenter(callback_for_onmouseenter value);
		callback_for_onmouseenter get_onmouseenter();
		typedef Object* (*callback_for_onmovestart)(MSEventObj* ev);
		void set_onmovestart(callback_for_onmovestart value);
		callback_for_onmovestart get_onmovestart();
		typedef Object* (*callback_for_onselectstart)(Event* ev);
		void set_onselectstart(callback_for_onselectstart value);
		callback_for_onselectstart get_onselectstart();
		typedef Object* (*callback_for_onpaste)(DragEvent* ev);
		void set_onpaste(callback_for_onpaste value);
		callback_for_onpaste get_onpaste();
		void set_canHaveHTML(bool value);
		bool get_canHaveHTML();
		void set_innerText(String* value);
		String* get_innerText();
		typedef Object* (*callback_for_onerrorupdate)(MSEventObj* ev);
		void set_onerrorupdate(callback_for_onerrorupdate value);
		callback_for_onerrorupdate get_onerrorupdate();
		typedef Object* (*callback_for_ondeactivate)(UIEvent* ev);
		void set_ondeactivate(callback_for_ondeactivate value);
		callback_for_ondeactivate get_ondeactivate();
		typedef Object* (*callback_for_oncut)(DragEvent* ev);
		void set_oncut(callback_for_oncut value);
		callback_for_oncut get_oncut();
		typedef Object* (*callback_for_onmoveend)(MSEventObj* ev);
		void set_onmoveend(callback_for_onmoveend value);
		callback_for_onmoveend get_onmoveend();
		typedef Object* (*callback_for_onresize)(UIEvent* ev);
		void set_onresize(callback_for_onresize value);
		callback_for_onresize get_onresize();
		void set_language(String* value);
		String* get_language();
		typedef Object* (*callback_for_ondatasetchanged)(MSEventObj* ev);
		void set_ondatasetchanged(callback_for_ondatasetchanged value);
		callback_for_ondatasetchanged get_ondatasetchanged();
		typedef Object* (*callback_for_oncopy)(DragEvent* ev);
		void set_oncopy(callback_for_oncopy value);
		callback_for_oncopy get_oncopy();
		typedef Object* (*callback_for_onrowsdelete)(MSEventObj* ev);
		void set_onrowsdelete(callback_for_onrowsdelete value);
		callback_for_onrowsdelete get_onrowsdelete();
		void set_parentElement(HTMLElement* value);
		HTMLElement* get_parentElement();
		typedef Object* (*callback_for_onrowenter)(MSEventObj* ev);
		void set_onrowenter(callback_for_onrowenter value);
		callback_for_onrowenter get_onrowenter();
		typedef Object* (*callback_for_onbeforeeditfocus)(MSEventObj* ev);
		void set_onbeforeeditfocus(callback_for_onbeforeeditfocus value);
		callback_for_onbeforeeditfocus get_onbeforeeditfocus();
		void set_canHaveChildren(bool value);
		bool get_canHaveChildren();
		void set_sourceIndex(double value);
		double get_sourceIndex();
		typedef Object* (*callback_for_oncellchange)(MSEventObj* ev);
		void set_oncellchange(callback_for_oncellchange value);
		callback_for_oncellchange get_oncellchange();
		bool dragDrop();
		void releaseCapture();
		void addFilter(Object* filter);
		void setCapture();
		void setCapture(bool containerCapture);
		bool removeBehavior(double cookie);
		bool contains(HTMLElement* child);
		Element* applyElement(Element* apply);
		Element* applyElement(Element* apply, const String& where);
		String* replaceAdjacentText(const String& where, const String& newText);
		void mergeAttributes(HTMLElement* source);
		void mergeAttributes(HTMLElement* source, bool preserveIdentity);
		Element* insertAdjacentElement(const String& position, Element* insertedElement);
		void insertAdjacentText(const String& where, const String& text);
		String* getAdjacentText(const String& where);
		void removeFilter(Object* filter);
		void setActive();
		double addBehavior(const String& bstrUrl);
		double addBehavior(const String& bstrUrl, Object* factory);
		void clearAttributes();
	};

	class HTMLTableColElement : HTMLElement, MSHTMLTableColElementExtensions, HTMLTableAlignment, DOML2DeprecatedAlignmentStyle_HTMLTableColElement 
	{
	public:
		void set_width(Object* value);
		Object* get_width();
		void set_span(double value);
		double get_span();
		static void set_prototype(HTMLTableColElement* value);
		static HTMLTableColElement* get_prototype();
		HTMLTableColElement();
	};

	class HTMLDocument : MSEventAttachmentTarget, MSHTMLDocumentSelection, MSHTMLDocumentExtensions, MSNodeExtensions, MSResourceMetadata, MSHTMLDocumentEventExtensions, MSHTMLDocumentViewExtensions 
	{
	public:
		typedef Object* (*callback_for_ondragend)(DragEvent* ev);
		void set_ondragend(callback_for_ondragend value);
		callback_for_ondragend get_ondragend();
		typedef Object* (*callback_for_ondragover)(DragEvent* ev);
		void set_ondragover(callback_for_ondragover value);
		callback_for_ondragover get_ondragover();
		typedef Object* (*callback_for_onkeydown)(KeyboardEvent* ev);
		void set_onkeydown(callback_for_onkeydown value);
		callback_for_onkeydown get_onkeydown();
		void set_bgColor(String* value);
		String* get_bgColor();
		typedef Object* (*callback_for_onkeyup)(KeyboardEvent* ev);
		void set_onkeyup(callback_for_onkeyup value);
		callback_for_onkeyup get_onkeyup();
		typedef Object* (*callback_for_onreset)(Event* ev);
		void set_onreset(callback_for_onreset value);
		callback_for_onreset get_onreset();
		typedef Object* (*callback_for_onmouseup)(MouseEvent* ev);
		void set_onmouseup(callback_for_onmouseup value);
		callback_for_onmouseup get_onmouseup();
		typedef Object* (*callback_for_ondragstart)(DragEvent* ev);
		void set_ondragstart(callback_for_ondragstart value);
		callback_for_ondragstart get_ondragstart();
		void set_scripts(HTMLCollection* value);
		HTMLCollection* get_scripts();
		typedef Object* (*callback_for_ondrag)(DragEvent* ev);
		void set_ondrag(callback_for_ondrag value);
		callback_for_ondrag get_ondrag();
		void set_linkColor(String* value);
		String* get_linkColor();
		typedef Object* (*callback_for_ondragleave)(DragEvent* ev);
		void set_ondragleave(callback_for_ondragleave value);
		callback_for_ondragleave get_ondragleave();
		typedef Object* (*callback_for_onmouseover)(MouseEvent* ev);
		void set_onmouseover(callback_for_onmouseover value);
		callback_for_onmouseover get_onmouseover();
		typedef Object* (*callback_for_onpause)(Event* ev);
		void set_onpause(callback_for_onpause value);
		callback_for_onpause get_onpause();
		void set_charset(String* value);
		String* get_charset();
		void set_vlinkColor(String* value);
		String* get_vlinkColor();
		typedef Object* (*callback_for_onmousedown)(MouseEvent* ev);
		void set_onmousedown(callback_for_onmousedown value);
		callback_for_onmousedown get_onmousedown();
		typedef Object* (*callback_for_onseeked)(Event* ev);
		void set_onseeked(callback_for_onseeked value);
		callback_for_onseeked get_onseeked();
		void set_title(String* value);
		String* get_title();
		typedef Object* (*callback_for_onclick)(MouseEvent* ev);
		void set_onclick(callback_for_onclick value);
		callback_for_onclick get_onclick();
		typedef Object* (*callback_for_onwaiting)(Event* ev);
		void set_onwaiting(callback_for_onwaiting value);
		callback_for_onwaiting get_onwaiting();
		void set_defaultCharset(String* value);
		String* get_defaultCharset();
		void set_embeds(HTMLCollection* value);
		HTMLCollection* get_embeds();
		typedef Object* (*callback_for_ondurationchange)(Event* ev);
		void set_ondurationchange(callback_for_ondurationchange value);
		callback_for_ondurationchange get_ondurationchange();
		void set_all(HTMLCollection* value);
		HTMLCollection* get_all();
		void set_applets(HTMLCollection* value);
		HTMLCollection* get_applets();
		void set_forms(HTMLCollection* value);
		HTMLCollection* get_forms();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		void set_dir(String* value);
		String* get_dir();
		void set_body(HTMLElement* value);
		HTMLElement* get_body();
		void set_designMode(String* value);
		String* get_designMode();
		typedef Object* (*callback_for_onemptied)(Event* ev);
		void set_onemptied(callback_for_onemptied value);
		callback_for_onemptied get_onemptied();
		void set_domain(String* value);
		String* get_domain();
		typedef Object* (*callback_for_onseeking)(Event* ev);
		void set_onseeking(callback_for_onseeking value);
		callback_for_onseeking get_onseeking();
		typedef Object* (*callback_for_oncanplay)(Event* ev);
		void set_oncanplay(callback_for_oncanplay value);
		callback_for_oncanplay get_oncanplay();
		typedef Object* (*callback_for_onstalled)(Event* ev);
		void set_onstalled(callback_for_onstalled value);
		callback_for_onstalled get_onstalled();
		typedef Object* (*callback_for_onmousemove)(MouseEvent* ev);
		void set_onmousemove(callback_for_onmousemove value);
		callback_for_onmousemove get_onmousemove();
		typedef Object* (*callback_for_onratechange)(Event* ev);
		void set_onratechange(callback_for_onratechange value);
		callback_for_onratechange get_onratechange();
		typedef Object* (*callback_for_onloadstart)(Event* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		typedef Object* (*callback_for_ondragenter)(DragEvent* ev);
		void set_ondragenter(callback_for_ondragenter value);
		callback_for_ondragenter get_ondragenter();
		typedef Object* (*callback_for_onsubmit)(Event* ev);
		void set_onsubmit(callback_for_onsubmit value);
		callback_for_onsubmit get_onsubmit();
		typedef Object* (*callback_for_onprogress)(Object* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_ondblclick)(MouseEvent* ev);
		void set_ondblclick(callback_for_ondblclick value);
		callback_for_ondblclick get_ondblclick();
		typedef Object* (*callback_for_oncontextmenu)(MouseEvent* ev);
		void set_oncontextmenu(callback_for_oncontextmenu value);
		callback_for_oncontextmenu get_oncontextmenu();
		void set_activeElement(Element* value);
		Element* get_activeElement();
		typedef Object* (*callback_for_onchange)(Event* ev);
		void set_onchange(callback_for_onchange value);
		callback_for_onchange get_onchange();
		typedef Object* (*callback_for_onloadedmetadata)(Event* ev);
		void set_onloadedmetadata(callback_for_onloadedmetadata value);
		callback_for_onloadedmetadata get_onloadedmetadata();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onplay)(Event* ev);
		void set_onplay(callback_for_onplay value);
		callback_for_onplay get_onplay();
		void set_links(HTMLCollection* value);
		HTMLCollection* get_links();
		typedef Object* (*callback_for_onplaying)(Event* ev);
		void set_onplaying(callback_for_onplaying value);
		callback_for_onplaying get_onplaying();
		void set_URL(String* value);
		String* get_URL();
		void set_images(HTMLCollection* value);
		HTMLCollection* get_images();
		void set_head(HTMLHeadElement* value);
		HTMLHeadElement* get_head();
		void set_location(Location* value);
		Location* get_location();
		void set_cookie(String* value);
		String* get_cookie();
		typedef Object* (*callback_for_oncanplaythrough)(Event* ev);
		void set_oncanplaythrough(callback_for_oncanplaythrough value);
		callback_for_oncanplaythrough get_oncanplaythrough();
		typedef Object* (*callback_for_onabort)(UIEvent* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		void set_characterSet(String* value);
		String* get_characterSet();
		void set_anchors(HTMLCollection* value);
		HTMLCollection* get_anchors();
		void set_lastModified(String* value);
		String* get_lastModified();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		typedef Object* (*callback_for_onkeypress)(KeyboardEvent* ev);
		void set_onkeypress(callback_for_onkeypress value);
		callback_for_onkeypress get_onkeypress();
		typedef Object* (*callback_for_onloadeddata)(Event* ev);
		void set_onloadeddata(callback_for_onloadeddata value);
		callback_for_onloadeddata get_onloadeddata();
		void set_plugins(HTMLCollection* value);
		HTMLCollection* get_plugins();
		typedef Object* (*callback_for_onsuspend)(Event* ev);
		void set_onsuspend(callback_for_onsuspend value);
		callback_for_onsuspend get_onsuspend();
		void set_referrer(String* value);
		String* get_referrer();
		void set_readyState(String* value);
		String* get_readyState();
		void set_alinkColor(String* value);
		String* get_alinkColor();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		void set_fgColor(String* value);
		String* get_fgColor();
		typedef Object* (*callback_for_ontimeupdate)(Event* ev);
		void set_ontimeupdate(callback_for_ontimeupdate value);
		callback_for_ontimeupdate get_ontimeupdate();
		typedef Object* (*callback_for_onselect)(UIEvent* ev);
		void set_onselect(callback_for_onselect value);
		callback_for_onselect get_onselect();
		typedef Object* (*callback_for_ondrop)(DragEvent* ev);
		void set_ondrop(callback_for_ondrop value);
		callback_for_ondrop get_ondrop();
		typedef Object* (*callback_for_onmouseout)(MouseEvent* ev);
		void set_onmouseout(callback_for_onmouseout value);
		callback_for_onmouseout get_onmouseout();
		typedef Object* (*callback_for_onended)(Event* ev);
		void set_onended(callback_for_onended value);
		callback_for_onended get_onended();
		void set_compatMode(String* value);
		String* get_compatMode();
		typedef Object* (*callback_for_onscroll)(UIEvent* ev);
		void set_onscroll(callback_for_onscroll value);
		callback_for_onscroll get_onscroll();
		typedef Object* (*callback_for_onmousewheel)(MouseWheelEvent* ev);
		void set_onmousewheel(callback_for_onmousewheel value);
		callback_for_onmousewheel get_onmousewheel();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onvolumechange)(Event* ev);
		void set_onvolumechange(callback_for_onvolumechange value);
		callback_for_onvolumechange get_onvolumechange();
		typedef Object* (*callback_for_oninput)(Event* ev);
		void set_oninput(callback_for_oninput value);
		callback_for_oninput get_oninput();
		String* queryCommandValue(const String& commandId);
		bool queryCommandIndeterm(const String& commandId);
		bool execCommand(const String& commandId);
		bool execCommand(const String& commandId, bool showUI);
		bool execCommand(const String& commandId, bool showUI, Object* value);
		NodeList* getElementsByName(const String& elementName);
		void writeln(String** content);
		Object* open();
		Object* open(, const String& url);
		Object* open(, const String& url, );
		Object* open(, const String& url, , const String& name);
		Object* open(const String& url, const String& name, const String& features, bool replace);
		bool queryCommandState(const String& commandId);
		void close();
		bool hasFocus();
		NodeList* getElementsByClassName(const String& classNames);
		bool queryCommandSupported(const String& commandId);
		Selection* getSelection();
		bool queryCommandEnabled(const String& commandId);
		void write(String** content);
		String* queryCommandText(const String& commandId);
	};

	class SVGException 
	{
	public:
		void set_code(double value);
		double get_code();
		void set_message(String* value);
		String* get_message();
		String* toString();
		void set_SVG_MATRIX_NOT_INVERTABLE(double value);
		double get_SVG_MATRIX_NOT_INVERTABLE();
		void set_SVG_WRONG_TYPE_ERR(double value);
		double get_SVG_WRONG_TYPE_ERR();
		void set_SVG_INVALID_VALUE_ERR(double value);
		double get_SVG_INVALID_VALUE_ERR();
		static void set_prototype(SVGException* value);
		static SVGException* get_prototype();
		SVGException();
		static void set_SVG_MATRIX_NOT_INVERTABLE(double value);
		static double get_SVG_MATRIX_NOT_INVERTABLE();
		static void set_SVG_WRONG_TYPE_ERR(double value);
		static double get_SVG_WRONG_TYPE_ERR();
		static void set_SVG_INVALID_VALUE_ERR(double value);
		static double get_SVG_INVALID_VALUE_ERR();
	};

	class DOML2DeprecatedTableCellHeight 
	{
	public:
		void set_height(Object* value);
		Object* get_height();
	};

	class HTMLTableAlignment 
	{
	public:
		void set_ch(String* value);
		String* get_ch();
		void set_vAlign(String* value);
		String* get_vAlign();
		void set_chOff(String* value);
		String* get_chOff();
	};

	class SVGAnimatedEnumeration 
	{
	public:
		void set_animVal(double value);
		double get_animVal();
		void set_baseVal(double value);
		double get_baseVal();
		static void set_prototype(SVGAnimatedEnumeration* value);
		static SVGAnimatedEnumeration* get_prototype();
		SVGAnimatedEnumeration();
	};

	class SVGLinearGradientElement : SVGGradientElement 
	{
	public:
		void set_y1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y1();
		void set_x2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x2();
		void set_x1(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x1();
		void set_y2(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y2();
		static void set_prototype(SVGLinearGradientElement* value);
		static SVGLinearGradientElement* get_prototype();
		SVGLinearGradientElement();
	};

	class DOML2DeprecatedSizeProperty 
	{
	public:
		void set_size(double value);
		double get_size();
	};

	class MSHTMLHeadingElementExtensions : DOML2DeprecatedTextFlowControl_HTMLBlockElement 
	{
	public:
	};

	class MSBorderColorStyle_HTMLTableCellElement 
	{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class DOML2DeprecatedWidthStyle_HTMLHRElement 
	{
	public:
		void set_width(double value);
		double get_width();
	};

	class HTMLUListElement : HTMLElement, DOML2DeprecatedListSpaceReduction, DOML2DeprecatedListNumberingAndBulletStyle, MSHTMLUListElementExtensions 
	{
	public:
		static void set_prototype(HTMLUListElement* value);
		static HTMLUListElement* get_prototype();
		HTMLUListElement();
	};

	class SVGRectElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_ry(SVGAnimatedLength* value);
		SVGAnimatedLength* get_ry();
		void set_rx(SVGAnimatedLength* value);
		SVGAnimatedLength* get_rx();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGRectElement* value);
		static SVGRectElement* get_prototype();
		SVGRectElement();
	};

	class DOML2DeprecatedBorderStyle 
	{
	public:
		void set_border(String* value);
		String* get_border();
	};

	class HTMLDivElement : HTMLElement, DOML2DeprecatedAlignmentStyle_HTMLDivElement, MSHTMLDivElementExtensions, MSDataBindingExtensions 
	{
	public:
		static void set_prototype(HTMLDivElement* value);
		static HTMLDivElement* get_prototype();
		HTMLDivElement();
	};

	class NavigatorDoNotTrack 
	{
	public:
		void set_msDoNotTrack(String* value);
		String* get_msDoNotTrack();
	};

	class SVG1_1Properties 
	{
	public:
		void set_fillRule(String* value);
		String* get_fillRule();
		void set_strokeLinecap(String* value);
		String* get_strokeLinecap();
		void set_stopColor(String* value);
		String* get_stopColor();
		void set_glyphOrientationHorizontal(String* value);
		String* get_glyphOrientationHorizontal();
		void set_kerning(String* value);
		String* get_kerning();
		void set_alignmentBaseline(String* value);
		String* get_alignmentBaseline();
		void set_dominantBaseline(String* value);
		String* get_dominantBaseline();
		void set_fill(String* value);
		String* get_fill();
		void set_strokeMiterlimit(String* value);
		String* get_strokeMiterlimit();
		void set_marker(String* value);
		String* get_marker();
		void set_glyphOrientationVertical(String* value);
		String* get_glyphOrientationVertical();
		void set_markerMid(String* value);
		String* get_markerMid();
		void set_textAnchor(String* value);
		String* get_textAnchor();
		void set_fillOpacity(String* value);
		String* get_fillOpacity();
		void set_strokeDasharray(String* value);
		String* get_strokeDasharray();
		void set_mask(String* value);
		String* get_mask();
		void set_stopOpacity(String* value);
		String* get_stopOpacity();
		void set_stroke(String* value);
		String* get_stroke();
		void set_strokeDashoffset(String* value);
		String* get_strokeDashoffset();
		void set_strokeOpacity(String* value);
		String* get_strokeOpacity();
		void set_markerStart(String* value);
		String* get_markerStart();
		void set_pointerEvents(String* value);
		String* get_pointerEvents();
		void set_baselineShift(String* value);
		String* get_baselineShift();
		void set_markerEnd(String* value);
		String* get_markerEnd();
		void set_clipRule(String* value);
		String* get_clipRule();
		void set_strokeLinejoin(String* value);
		String* get_strokeLinejoin();
		void set_clipPath(String* value);
		String* get_clipPath();
		void set_strokeWidth(String* value);
		String* get_strokeWidth();
	};

	class NamedNodeMap 
	{
	public:
		Node* operator[](double index);
		Node* operator[](const String& name);
		void set_length(double value);
		double get_length();
		Node* removeNamedItemNS(const String& namespaceURI, const String& localName);
		Node* item(double index);
		Node* removeNamedItem(const String& name);
		Node* getNamedItem(const String& name);
		Node* setNamedItem(Node* arg);
		Node* getNamedItemNS(const String& namespaceURI, const String& localName);
		Node* setNamedItemNS(Node* arg);
		static void set_prototype(NamedNodeMap* value);
		static NamedNodeMap* get_prototype();
		NamedNodeMap();
	};

	class MediaList 
	{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		void set_mediaText(String* value);
		String* get_mediaText();
		void deleteMedium(const String& oldMedium);
		void appendMedium(const String& newMedium);
		String* item(double index);
		String* toString();
		static void set_prototype(MediaList* value);
		static MediaList* get_prototype();
		MediaList();
	};

	class SVGPathSegCurvetoQuadraticSmoothAbs : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegCurvetoQuadraticSmoothAbs* value);
		static SVGPathSegCurvetoQuadraticSmoothAbs* get_prototype();
		SVGPathSegCurvetoQuadraticSmoothAbs();
	};

	class SVGLengthList 
	{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGLength* replaceItem(SVGLength* newItem, double index);
		SVGLength* getItem(double index);
		void clear();
		SVGLength* appendItem(SVGLength* newItem);
		SVGLength* initialize(SVGLength* newItem);
		SVGLength* removeItem(double index);
		SVGLength* insertItemBefore(SVGLength* newItem, double index);
		static void set_prototype(SVGLengthList* value);
		static SVGLengthList* get_prototype();
		SVGLengthList();
	};

	class SVGPathSegCurvetoCubicSmoothRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x2(double value);
		double get_x2();
		void set_x(double value);
		double get_x();
		void set_y2(double value);
		double get_y2();
		static void set_prototype(SVGPathSegCurvetoCubicSmoothRel* value);
		static SVGPathSegCurvetoCubicSmoothRel* get_prototype();
		SVGPathSegCurvetoCubicSmoothRel();
	};

	class MSWindowExtensions 
	{
	public:
		void set_status(String* value);
		String* get_status();
		typedef Object* (*callback_for_onmouseleave)(MouseEvent* ev);
		void set_onmouseleave(callback_for_onmouseleave value);
		callback_for_onmouseleave get_onmouseleave();
		void set_screenLeft(double value);
		double get_screenLeft();
		void set_offscreenBuffering(Object* value);
		Object* get_offscreenBuffering();
		void set_maxConnectionsPerServer(double value);
		double get_maxConnectionsPerServer();
		typedef Object* (*callback_for_onmouseenter)(MouseEvent* ev);
		void set_onmouseenter(callback_for_onmouseenter value);
		callback_for_onmouseenter get_onmouseenter();
		void set_clipboardData(DataTransfer* value);
		DataTransfer* get_clipboardData();
		void set_defaultStatus(String* value);
		String* get_defaultStatus();
		void set_clientInformation(Navigator* value);
		Navigator* get_clientInformation();
		void set_closed(bool value);
		bool get_closed();
		typedef Object* (*callback_for_onhelp)(Event* ev);
		void set_onhelp(callback_for_onhelp value);
		callback_for_onhelp get_onhelp();
		void set_external(BrowserPublic* value);
		BrowserPublic* get_external();
		void set_event(MSEventObj* value);
		MSEventObj* get_event();
		typedef Object* (*callback_for_onfocusout)(FocusEvent* ev);
		void set_onfocusout(callback_for_onfocusout value);
		callback_for_onfocusout get_onfocusout();
		void set_screenTop(double value);
		double get_screenTop();
		typedef Object* (*callback_for_onfocusin)(FocusEvent* ev);
		void set_onfocusin(callback_for_onfocusin value);
		callback_for_onfocusin get_onfocusin();
		Window* showModelessDialog();
		Window* showModelessDialog(, const String& url);
		Window* showModelessDialog(, const String& url, );
		Window* showModelessDialog(const String& url, Object* argument, Object* options);
		void navigate(const String& url);
		void resizeBy();
		void resizeBy(, double x);
		void resizeBy(double x, double y);
		Object* item(Object* index);
		void resizeTo();
		void resizeTo(, double x);
		void resizeTo(double x, double y);
		MSPopupWindow* createPopup();
		MSPopupWindow* createPopup(Object* arguments);
		String* toStaticHTML(const String& html);
		Object* execScript(const String& code);
		Object* execScript(const String& code, const String& language);
		void msWriteProfilerMark(const String& profilerMarkName);
		void moveTo();
		void moveTo(, double x);
		void moveTo(double x, double y);
		void moveBy();
		void moveBy(, double x);
		void moveBy(double x, double y);
		void showHelp(const String& url);
		void showHelp(const String& url, Object* helpArg);
		void showHelp(const String& url, Object* helpArg, const String& features);
	};

	class ProcessingInstruction : Node 
	{
	public:
		void set_target(String* value);
		String* get_target();
		void set_data(String* value);
		String* get_data();
		static void set_prototype(ProcessingInstruction* value);
		static ProcessingInstruction* get_prototype();
		ProcessingInstruction();
	};

	class MSBehaviorUrnsCollection 
	{
	public:
		void set_length(double value);
		double get_length();
		String* item(double index);
		static void set_prototype(MSBehaviorUrnsCollection* value);
		static MSBehaviorUrnsCollection* get_prototype();
		MSBehaviorUrnsCollection();
	};

	class CSSFontFaceRule : CSSRule 
	{
	public:
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		static void set_prototype(CSSFontFaceRule* value);
		static CSSFontFaceRule* get_prototype();
		CSSFontFaceRule();
	};

	class DOML2DeprecatedBackgroundStyle 
	{
	public:
		void set_background(String* value);
		String* get_background();
	};

	class TextEvent : UIEvent 
	{
	public:
		void set_inputMethod(double value);
		double get_inputMethod();
		void set_data(String* value);
		String* get_data();
		void set_locale(String* value);
		String* get_locale();
		void initTextEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, const String& dataArg, double inputMethod, const String& locale);
		void set_DOM_INPUT_METHOD_KEYBOARD(double value);
		double get_DOM_INPUT_METHOD_KEYBOARD();
		void set_DOM_INPUT_METHOD_DROP(double value);
		double get_DOM_INPUT_METHOD_DROP();
		void set_DOM_INPUT_METHOD_IME(double value);
		double get_DOM_INPUT_METHOD_IME();
		void set_DOM_INPUT_METHOD_SCRIPT(double value);
		double get_DOM_INPUT_METHOD_SCRIPT();
		void set_DOM_INPUT_METHOD_VOICE(double value);
		double get_DOM_INPUT_METHOD_VOICE();
		void set_DOM_INPUT_METHOD_UNKNOWN(double value);
		double get_DOM_INPUT_METHOD_UNKNOWN();
		void set_DOM_INPUT_METHOD_PASTE(double value);
		double get_DOM_INPUT_METHOD_PASTE();
		void set_DOM_INPUT_METHOD_HANDWRITING(double value);
		double get_DOM_INPUT_METHOD_HANDWRITING();
		void set_DOM_INPUT_METHOD_OPTION(double value);
		double get_DOM_INPUT_METHOD_OPTION();
		void set_DOM_INPUT_METHOD_MULTIMODAL(double value);
		double get_DOM_INPUT_METHOD_MULTIMODAL();
		static void set_prototype(TextEvent* value);
		static TextEvent* get_prototype();
		TextEvent();
		static void set_DOM_INPUT_METHOD_KEYBOARD(double value);
		static double get_DOM_INPUT_METHOD_KEYBOARD();
		static void set_DOM_INPUT_METHOD_DROP(double value);
		static double get_DOM_INPUT_METHOD_DROP();
		static void set_DOM_INPUT_METHOD_IME(double value);
		static double get_DOM_INPUT_METHOD_IME();
		static void set_DOM_INPUT_METHOD_SCRIPT(double value);
		static double get_DOM_INPUT_METHOD_SCRIPT();
		static void set_DOM_INPUT_METHOD_VOICE(double value);
		static double get_DOM_INPUT_METHOD_VOICE();
		static void set_DOM_INPUT_METHOD_UNKNOWN(double value);
		static double get_DOM_INPUT_METHOD_UNKNOWN();
		static void set_DOM_INPUT_METHOD_PASTE(double value);
		static double get_DOM_INPUT_METHOD_PASTE();
		static void set_DOM_INPUT_METHOD_HANDWRITING(double value);
		static double get_DOM_INPUT_METHOD_HANDWRITING();
		static void set_DOM_INPUT_METHOD_OPTION(double value);
		static double get_DOM_INPUT_METHOD_OPTION();
		static void set_DOM_INPUT_METHOD_MULTIMODAL(double value);
		static double get_DOM_INPUT_METHOD_MULTIMODAL();
	};

	class MSHTMLHRElementExtensions : DOML2DeprecatedColorProperty 
	{
	public:
	};

	class AbstractView 
	{
	public:
		void set_styleMedia(StyleMedia* value);
		StyleMedia* get_styleMedia();
		void set_document(Document* value);
		Document* get_document();
	};

	class DocumentFragment : Node, NodeSelector, MSEventAttachmentTarget, MSNodeExtensions 
	{
	public:
		static void set_prototype(DocumentFragment* value);
		static DocumentFragment* get_prototype();
		DocumentFragment();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLFieldSetElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class SVGPolylineElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGAnimatedPoints, SVGTests 
	{
	public:
		static void set_prototype(SVGPolylineElement* value);
		static SVGPolylineElement* get_prototype();
		SVGPolylineElement();
	};

	class DOML2DeprecatedWidthStyle 
	{
	public:
		void set_width(double value);
		double get_width();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLHeadingElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class SVGAnimatedPathData 
	{
	public:
		void set_pathSegList(SVGPathSegList* value);
		SVGPathSegList* get_pathSegList();
	};

	class Position 
	{
	public:
		void set_timestamp(Date* value);
		Date* get_timestamp();
		void set_coords(Coordinates* value);
		Coordinates* get_coords();
		static void set_prototype(Position* value);
		static Position* get_prototype();
		Position();
	};

	class BookmarkCollection 
	{
	public:
		Object* operator[](double index);
		void set_length(double value);
		double get_length();
		Object* item(double index);
		static void set_prototype(BookmarkCollection* value);
		static BookmarkCollection* get_prototype();
		BookmarkCollection();
	};

	class CSSPageRule : CSSRule, StyleSheetPage 
	{
	public:
		void set_selectorText(String* value);
		String* get_selectorText();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		static void set_prototype(CSSPageRule* value);
		static CSSPageRule* get_prototype();
		CSSPageRule();
	};

	class WindowPerformance 
	{
	public:
		void set_performance(Object* value);
		Object* get_performance();
	};

	class HTMLBRElement : HTMLElement, DOML2DeprecatedTextFlowControl_HTMLBRElement 
	{
	public:
		static void set_prototype(HTMLBRElement* value);
		static HTMLBRElement* get_prototype();
		HTMLBRElement();
	};

	class MSHTMLDivElementExtensions : DOML2DeprecatedWordWrapSuppression_HTMLDivElement 
	{
	public:
	};

	class DOML2DeprecatedBorderStyle_HTMLInputElement 
	{
	public:
		void set_border(String* value);
		String* get_border();
	};

	class HTMLSpanElement : HTMLElement, MSHTMLSpanElementExtensions, MSDataBindingExtensions 
	{
	public:
		static void set_prototype(HTMLSpanElement* value);
		static HTMLSpanElement* get_prototype();
		HTMLSpanElement();
	};

	class HTMLHRElementDOML2Deprecated 
	{
	public:
		void set_noShade(bool value);
		bool get_noShade();
	};

	class HTMLHeadElement : HTMLElement 
	{
	public:
		void set_profile(String* value);
		String* get_profile();
		static void set_prototype(HTMLHeadElement* value);
		static HTMLHeadElement* get_prototype();
		HTMLHeadElement();
	};

	class NodeFilterCallback 
	{
	public:
		Object* operator()(Object** args);
	};

	class HTMLHeadingElement : HTMLElement, DOML2DeprecatedAlignmentStyle_HTMLHeadingElement, MSHTMLHeadingElementExtensions 
	{
	public:
		static void set_prototype(HTMLHeadingElement* value);
		static HTMLHeadingElement* get_prototype();
		HTMLHeadingElement();
	};

	class HTMLFormElement : HTMLElement, MSHTMLFormElementExtensions, MSHTMLCollectionExtensions 
	{
	public:
		Object* operator[](const String& name);
		Object* operator()(Object* name, Object* index);
		Object* operator()(const String& name);
		void set_length(double value);
		double get_length();
		void set_target(String* value);
		String* get_target();
		void set_acceptCharset(String* value);
		String* get_acceptCharset();
		void set_enctype(String* value);
		String* get_enctype();
		void set_elements(HTMLCollection* value);
		HTMLCollection* get_elements();
		void set_action(String* value);
		String* get_action();
		void set_name(String* value);
		String* get_name();
		void set_method(String* value);
		String* get_method();
		void reset();
		Object* item();
		Object* item(, Object* name);
		Object* item(Object* name, Object* index);
		void submit();
		Object* namedItem(const String& name);
		static void set_prototype(HTMLFormElement* value);
		static HTMLFormElement* get_prototype();
		HTMLFormElement();
	};

	class SVGZoomAndPan 
	{
	public:
		void set_zoomAndPan(double value);
		double get_zoomAndPan();
		void set_SVG_ZOOMANDPAN_MAGNIFY(double value);
		double get_SVG_ZOOMANDPAN_MAGNIFY();
		void set_SVG_ZOOMANDPAN_UNKNOWN(double value);
		double get_SVG_ZOOMANDPAN_UNKNOWN();
		void set_SVG_ZOOMANDPAN_DISABLE(double value);
		double get_SVG_ZOOMANDPAN_DISABLE();
		static void set_prototype(SVGZoomAndPan* value);
		static SVGZoomAndPan* get_prototype();
		SVGZoomAndPan();
		static void set_SVG_ZOOMANDPAN_MAGNIFY(double value);
		static double get_SVG_ZOOMANDPAN_MAGNIFY();
		static void set_SVG_ZOOMANDPAN_UNKNOWN(double value);
		static double get_SVG_ZOOMANDPAN_UNKNOWN();
		static void set_SVG_ZOOMANDPAN_DISABLE(double value);
		static double get_SVG_ZOOMANDPAN_DISABLE();
	};

	class MSEventExtensions 
	{
	public:
		void set_cancelBubble(bool value);
		bool get_cancelBubble();
		void set_srcElement(Element* value);
		Element* get_srcElement();
	};

	class HTMLMediaElement : HTMLElement 
	{
	public:
		void set_initialTime(double value);
		double get_initialTime();
		void set_played(TimeRanges* value);
		TimeRanges* get_played();
		void set_currentSrc(String* value);
		String* get_currentSrc();
		void set_readyState(String* value);
		String* get_readyState();
		void set_autobuffer(bool value);
		bool get_autobuffer();
		void set_loop(bool value);
		bool get_loop();
		void set_ended(bool value);
		bool get_ended();
		void set_buffered(TimeRanges* value);
		TimeRanges* get_buffered();
		void set_error(MediaError* value);
		MediaError* get_error();
		void set_seekable(TimeRanges* value);
		TimeRanges* get_seekable();
		void set_autoplay(bool value);
		bool get_autoplay();
		void set_controls(bool value);
		bool get_controls();
		void set_volume(double value);
		double get_volume();
		void set_src(String* value);
		String* get_src();
		void set_playbackRate(double value);
		double get_playbackRate();
		void set_duration(double value);
		double get_duration();
		void set_muted(bool value);
		bool get_muted();
		void set_defaultPlaybackRate(double value);
		double get_defaultPlaybackRate();
		void set_paused(bool value);
		bool get_paused();
		void set_seeking(bool value);
		bool get_seeking();
		void set_currentTime(double value);
		double get_currentTime();
		void set_preload(String* value);
		String* get_preload();
		void set_networkState(double value);
		double get_networkState();
		void pause();
		void play();
		void load();
		String* canPlayType(const String& type);
		void set_HAVE_METADATA(double value);
		double get_HAVE_METADATA();
		void set_HAVE_CURRENT_DATA(double value);
		double get_HAVE_CURRENT_DATA();
		void set_HAVE_NOTHING(double value);
		double get_HAVE_NOTHING();
		void set_NETWORK_NO_SOURCE(double value);
		double get_NETWORK_NO_SOURCE();
		void set_HAVE_ENOUGH_DATA(double value);
		double get_HAVE_ENOUGH_DATA();
		void set_NETWORK_EMPTY(double value);
		double get_NETWORK_EMPTY();
		void set_NETWORK_LOADING(double value);
		double get_NETWORK_LOADING();
		void set_NETWORK_IDLE(double value);
		double get_NETWORK_IDLE();
		void set_HAVE_FUTURE_DATA(double value);
		double get_HAVE_FUTURE_DATA();
		static void set_prototype(HTMLMediaElement* value);
		static HTMLMediaElement* get_prototype();
		HTMLMediaElement();
		static void set_HAVE_METADATA(double value);
		static double get_HAVE_METADATA();
		static void set_HAVE_CURRENT_DATA(double value);
		static double get_HAVE_CURRENT_DATA();
		static void set_HAVE_NOTHING(double value);
		static double get_HAVE_NOTHING();
		static void set_NETWORK_NO_SOURCE(double value);
		static double get_NETWORK_NO_SOURCE();
		static void set_HAVE_ENOUGH_DATA(double value);
		static double get_HAVE_ENOUGH_DATA();
		static void set_NETWORK_EMPTY(double value);
		static double get_NETWORK_EMPTY();
		static void set_NETWORK_LOADING(double value);
		static double get_NETWORK_LOADING();
		static void set_NETWORK_IDLE(double value);
		static double get_NETWORK_IDLE();
		static void set_HAVE_FUTURE_DATA(double value);
		static double get_HAVE_FUTURE_DATA();
	};

	class ElementCSSInlineStyle : MSElementCSSInlineStyleExtensions 
	{
	public:
		void set_runtimeStyle(MSStyleCSSProperties* value);
		MSStyleCSSProperties* get_runtimeStyle();
		void set_currentStyle(MSCurrentStyleCSSProperties* value);
		MSCurrentStyleCSSProperties* get_currentStyle();
	};

	class DOMParser 
	{
	public:
		Document* parseFromString(const String& source, const String& mimeType);
		static void set_prototype(DOMParser* value);
		static DOMParser* get_prototype();
		DOMParser();
	};

	class MSMimeTypesCollection 
	{
	public:
		void set_length(double value);
		double get_length();
		static void set_prototype(MSMimeTypesCollection* value);
		static MSMimeTypesCollection* get_prototype();
		MSMimeTypesCollection();
	};

	class StyleSheet 
	{
	public:
		void set_disabled(bool value);
		bool get_disabled();
		void set_ownerNode(Node* value);
		Node* get_ownerNode();
		void set_parentStyleSheet(StyleSheet* value);
		StyleSheet* get_parentStyleSheet();
		void set_href(String* value);
		String* get_href();
		void set_media(MediaList* value);
		MediaList* get_media();
		void set_type(String* value);
		String* get_type();
		void set_title(String* value);
		String* get_title();
		static void set_prototype(StyleSheet* value);
		static StyleSheet* get_prototype();
		StyleSheet();
	};

	class DOML2DeprecatedBorderStyle_HTMLTableElement 
	{
	public:
		void set_border(String* value);
		String* get_border();
	};

	class DOML2DeprecatedWidthStyle_HTMLAppletElement 
	{
	public:
		void set_width(double value);
		double get_width();
	};

	class SVGTextPathElement : SVGTextContentElement, SVGURIReference 
	{
	public:
		void set_startOffset(SVGAnimatedLength* value);
		SVGAnimatedLength* get_startOffset();
		void set_method(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_method();
		void set_spacing(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_spacing();
		void set_TEXTPATH_SPACINGTYPE_EXACT(double value);
		double get_TEXTPATH_SPACINGTYPE_EXACT();
		void set_TEXTPATH_METHODTYPE_STRETCH(double value);
		double get_TEXTPATH_METHODTYPE_STRETCH();
		void set_TEXTPATH_SPACINGTYPE_AUTO(double value);
		double get_TEXTPATH_SPACINGTYPE_AUTO();
		void set_TEXTPATH_SPACINGTYPE_UNKNOWN(double value);
		double get_TEXTPATH_SPACINGTYPE_UNKNOWN();
		void set_TEXTPATH_METHODTYPE_UNKNOWN(double value);
		double get_TEXTPATH_METHODTYPE_UNKNOWN();
		void set_TEXTPATH_METHODTYPE_ALIGN(double value);
		double get_TEXTPATH_METHODTYPE_ALIGN();
		static void set_prototype(SVGTextPathElement* value);
		static SVGTextPathElement* get_prototype();
		SVGTextPathElement();
		static void set_TEXTPATH_SPACINGTYPE_EXACT(double value);
		static double get_TEXTPATH_SPACINGTYPE_EXACT();
		static void set_TEXTPATH_METHODTYPE_STRETCH(double value);
		static double get_TEXTPATH_METHODTYPE_STRETCH();
		static void set_TEXTPATH_SPACINGTYPE_AUTO(double value);
		static double get_TEXTPATH_SPACINGTYPE_AUTO();
		static void set_TEXTPATH_SPACINGTYPE_UNKNOWN(double value);
		static double get_TEXTPATH_SPACINGTYPE_UNKNOWN();
		static void set_TEXTPATH_METHODTYPE_UNKNOWN(double value);
		static double get_TEXTPATH_METHODTYPE_UNKNOWN();
		static void set_TEXTPATH_METHODTYPE_ALIGN(double value);
		static double get_TEXTPATH_METHODTYPE_ALIGN();
	};

	class NodeList 
	{
	public:
		Node* operator[](double index);
		void set_length(double value);
		double get_length();
		Node* item(double index);
		static void set_prototype(NodeList* value);
		static NodeList* get_prototype();
		NodeList();
	};

	class HTMLDTElement : HTMLElement, DOML2DeprecatedWordWrapSuppression_HTMLDTElement 
	{
	public:
		static void set_prototype(HTMLDTElement* value);
		static HTMLDTElement* get_prototype();
		HTMLDTElement();
	};

	class XMLSerializer 
	{
	public:
		String* serializeToString(Node* target);
		static void set_prototype(XMLSerializer* value);
		static XMLSerializer* get_prototype();
		XMLSerializer();
	};

	class StyleSheetPage 
	{
	public:
		void set_pseudoClass(String* value);
		String* get_pseudoClass();
		void set_selector(String* value);
		String* get_selector();
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDDElement 
	{
	public:
		void set_noWrap(bool value);
		bool get_noWrap();
	};

	class MSHTMLTableRowElementExtensions 
	{
	public:
		void set_height(Object* value);
		Object* get_height();
	};

	class SVGGradientElement : SVGElement, SVGUnitTypes, SVGStylable, SVGURIReference 
	{
	public:
		void set_spreadMethod(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_spreadMethod();
		void set_gradientTransform(SVGAnimatedTransformList* value);
		SVGAnimatedTransformList* get_gradientTransform();
		void set_gradientUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_gradientUnits();
		void set_SVG_SPREADMETHOD_REFLECT(double value);
		double get_SVG_SPREADMETHOD_REFLECT();
		void set_SVG_SPREADMETHOD_PAD(double value);
		double get_SVG_SPREADMETHOD_PAD();
		void set_SVG_SPREADMETHOD_UNKNOWN(double value);
		double get_SVG_SPREADMETHOD_UNKNOWN();
		void set_SVG_SPREADMETHOD_REPEAT(double value);
		double get_SVG_SPREADMETHOD_REPEAT();
		static void set_prototype(SVGGradientElement* value);
		static SVGGradientElement* get_prototype();
		SVGGradientElement();
		static void set_SVG_SPREADMETHOD_REFLECT(double value);
		static double get_SVG_SPREADMETHOD_REFLECT();
		static void set_SVG_SPREADMETHOD_PAD(double value);
		static double get_SVG_SPREADMETHOD_PAD();
		static void set_SVG_SPREADMETHOD_UNKNOWN(double value);
		static double get_SVG_SPREADMETHOD_UNKNOWN();
		static void set_SVG_SPREADMETHOD_REPEAT(double value);
		static double get_SVG_SPREADMETHOD_REPEAT();
	};

	class DOML2DeprecatedTextFlowControl_HTMLBRElement 
	{
	public:
		void set_clear(String* value);
		String* get_clear();
	};

	class MSHTMLParagraphElementExtensions : DOML2DeprecatedTextFlowControl_HTMLBlockElement 
	{
	public:
	};

	class NodeFilter 
	{
	public:
		double acceptNode(Node* n);
		void set_SHOW_ENTITY_REFERENCE(double value);
		double get_SHOW_ENTITY_REFERENCE();
		void set_SHOW_NOTATION(double value);
		double get_SHOW_NOTATION();
		void set_SHOW_ENTITY(double value);
		double get_SHOW_ENTITY();
		void set_SHOW_DOCUMENT(double value);
		double get_SHOW_DOCUMENT();
		void set_SHOW_PROCESSING_INSTRUCTION(double value);
		double get_SHOW_PROCESSING_INSTRUCTION();
		void set_FILTER_REJECT(double value);
		double get_FILTER_REJECT();
		void set_SHOW_CDATA_SECTION(double value);
		double get_SHOW_CDATA_SECTION();
		void set_FILTER_ACCEPT(double value);
		double get_FILTER_ACCEPT();
		void set_SHOW_ALL(double value);
		double get_SHOW_ALL();
		void set_SHOW_DOCUMENT_TYPE(double value);
		double get_SHOW_DOCUMENT_TYPE();
		void set_SHOW_TEXT(double value);
		double get_SHOW_TEXT();
		void set_SHOW_ELEMENT(double value);
		double get_SHOW_ELEMENT();
		void set_SHOW_COMMENT(double value);
		double get_SHOW_COMMENT();
		void set_FILTER_SKIP(double value);
		double get_FILTER_SKIP();
		void set_SHOW_ATTRIBUTE(double value);
		double get_SHOW_ATTRIBUTE();
		void set_SHOW_DOCUMENT_FRAGMENT(double value);
		double get_SHOW_DOCUMENT_FRAGMENT();
		static void set_prototype(NodeFilter* value);
		static NodeFilter* get_prototype();
		NodeFilter();
		static void set_SHOW_ENTITY_REFERENCE(double value);
		static double get_SHOW_ENTITY_REFERENCE();
		static void set_SHOW_NOTATION(double value);
		static double get_SHOW_NOTATION();
		static void set_SHOW_ENTITY(double value);
		static double get_SHOW_ENTITY();
		static void set_SHOW_DOCUMENT(double value);
		static double get_SHOW_DOCUMENT();
		static void set_SHOW_PROCESSING_INSTRUCTION(double value);
		static double get_SHOW_PROCESSING_INSTRUCTION();
		static void set_FILTER_REJECT(double value);
		static double get_FILTER_REJECT();
		static void set_SHOW_CDATA_SECTION(double value);
		static double get_SHOW_CDATA_SECTION();
		static void set_FILTER_ACCEPT(double value);
		static double get_FILTER_ACCEPT();
		static void set_SHOW_ALL(double value);
		static double get_SHOW_ALL();
		static void set_SHOW_DOCUMENT_TYPE(double value);
		static double get_SHOW_DOCUMENT_TYPE();
		static void set_SHOW_TEXT(double value);
		static double get_SHOW_TEXT();
		static void set_SHOW_ELEMENT(double value);
		static double get_SHOW_ELEMENT();
		static void set_SHOW_COMMENT(double value);
		static double get_SHOW_COMMENT();
		static void set_FILTER_SKIP(double value);
		static double get_FILTER_SKIP();
		static void set_SHOW_ATTRIBUTE(double value);
		static double get_SHOW_ATTRIBUTE();
		static void set_SHOW_DOCUMENT_FRAGMENT(double value);
		static double get_SHOW_DOCUMENT_FRAGMENT();
	};

	class MSBorderColorStyle_HTMLFrameElement 
	{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class MSHTMLOListElementExtensions 
	{
	public:
	};

	class DOML2DeprecatedWordWrapSuppression_HTMLDTElement 
	{
	public:
		void set_noWrap(bool value);
		bool get_noWrap();
	};

	class ScreenView : AbstractView 
	{
	public:
		void set_outerWidth(double value);
		double get_outerWidth();
		void set_pageXOffset(double value);
		double get_pageXOffset();
		void set_innerWidth(double value);
		double get_innerWidth();
		void set_pageYOffset(double value);
		double get_pageYOffset();
		void set_screenY(double value);
		double get_screenY();
		void set_outerHeight(double value);
		double get_outerHeight();
		void set_screen(Screen* value);
		Screen* get_screen();
		void set_innerHeight(double value);
		double get_innerHeight();
		void set_screenX(double value);
		double get_screenX();
		void scroll();
		void scroll(, double x);
		void scroll(double x, double y);
		void scrollBy();
		void scrollBy(, double x);
		void scrollBy(double x, double y);
		void scrollTo();
		void scrollTo(, double x);
		void scrollTo(double x, double y);
	};

	class DOML2DeprecatedMarginStyle_HTMLObjectElement 
	{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class DOML2DeprecatedMarginStyle_HTMLInputElement 
	{
	public:
		void set_vspace(double value);
		double get_vspace();
		void set_hspace(double value);
		double get_hspace();
	};

	class MSHTMLTableSectionElementExtensions : DOML2DeprecatedBackgroundColorStyle 
	{
	public:
		Object* moveRow();
		Object* moveRow(, double indexFrom);
		Object* moveRow(double indexFrom, double indexTo);
	};

	class HTMLFieldSetElement : HTMLElement, MSHTMLFieldSetElementExtensions 
	{
	public:
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		static void set_prototype(HTMLFieldSetElement* value);
		static HTMLFieldSetElement* get_prototype();
		HTMLFieldSetElement();
	};

	class MediaError 
	{
	public:
		void set_code(double value);
		double get_code();
		void set_MEDIA_ERR_ABORTED(double value);
		double get_MEDIA_ERR_ABORTED();
		void set_MEDIA_ERR_NETWORK(double value);
		double get_MEDIA_ERR_NETWORK();
		void set_MEDIA_ERR_SRC_NOT_SUPPORTED(double value);
		double get_MEDIA_ERR_SRC_NOT_SUPPORTED();
		void set_MEDIA_ERR_DECODE(double value);
		double get_MEDIA_ERR_DECODE();
		static void set_prototype(MediaError* value);
		static MediaError* get_prototype();
		MediaError();
		static void set_MEDIA_ERR_ABORTED(double value);
		static double get_MEDIA_ERR_ABORTED();
		static void set_MEDIA_ERR_NETWORK(double value);
		static double get_MEDIA_ERR_NETWORK();
		static void set_MEDIA_ERR_SRC_NOT_SUPPORTED(double value);
		static double get_MEDIA_ERR_SRC_NOT_SUPPORTED();
		static void set_MEDIA_ERR_DECODE(double value);
		static double get_MEDIA_ERR_DECODE();
	};

	class SVGNumberList 
	{
	public:
		void set_numberOfItems(double value);
		double get_numberOfItems();
		SVGNumber* replaceItem(SVGNumber* newItem, double index);
		SVGNumber* getItem(double index);
		void clear();
		SVGNumber* appendItem(SVGNumber* newItem);
		SVGNumber* initialize(SVGNumber* newItem);
		SVGNumber* removeItem(double index);
		SVGNumber* insertItemBefore(SVGNumber* newItem, double index);
		static void set_prototype(SVGNumberList* value);
		static SVGNumberList* get_prototype();
		SVGNumberList();
	};

	class HTMLBGSoundElement : HTMLElement 
	{
	public:
		void set_balance(Object* value);
		Object* get_balance();
		void set_volume(Object* value);
		Object* get_volume();
		void set_src(String* value);
		String* get_src();
		void set_loop(double value);
		double get_loop();
		static void set_prototype(HTMLBGSoundElement* value);
		static HTMLBGSoundElement* get_prototype();
		HTMLBGSoundElement();
	};

	class HTMLElement : Element, MSHTMLElementRangeExtensions, ElementCSSInlineStyle, MSEventAttachmentTarget, MSHTMLElementExtensions, MSNodeExtensions 
	{
	public:
		typedef Object* (*callback_for_ondragend)(DragEvent* ev);
		void set_ondragend(callback_for_ondragend value);
		callback_for_ondragend get_ondragend();
		typedef Object* (*callback_for_onkeydown)(KeyboardEvent* ev);
		void set_onkeydown(callback_for_onkeydown value);
		callback_for_onkeydown get_onkeydown();
		typedef Object* (*callback_for_ondragover)(DragEvent* ev);
		void set_ondragover(callback_for_ondragover value);
		callback_for_ondragover get_ondragover();
		typedef Object* (*callback_for_onkeyup)(KeyboardEvent* ev);
		void set_onkeyup(callback_for_onkeyup value);
		callback_for_onkeyup get_onkeyup();
		void set_offsetTop(double value);
		double get_offsetTop();
		typedef Object* (*callback_for_onreset)(Event* ev);
		void set_onreset(callback_for_onreset value);
		callback_for_onreset get_onreset();
		typedef Object* (*callback_for_onmouseup)(MouseEvent* ev);
		void set_onmouseup(callback_for_onmouseup value);
		callback_for_onmouseup get_onmouseup();
		typedef Object* (*callback_for_ondragstart)(DragEvent* ev);
		void set_ondragstart(callback_for_ondragstart value);
		callback_for_ondragstart get_ondragstart();
		typedef Object* (*callback_for_ondrag)(DragEvent* ev);
		void set_ondrag(callback_for_ondrag value);
		callback_for_ondrag get_ondrag();
		void set_innerHTML(String* value);
		String* get_innerHTML();
		typedef Object* (*callback_for_onmouseover)(MouseEvent* ev);
		void set_onmouseover(callback_for_onmouseover value);
		callback_for_onmouseover get_onmouseover();
		typedef Object* (*callback_for_ondragleave)(DragEvent* ev);
		void set_ondragleave(callback_for_ondragleave value);
		callback_for_ondragleave get_ondragleave();
		void set_lang(String* value);
		String* get_lang();
		typedef Object* (*callback_for_onpause)(Event* ev);
		void set_onpause(callback_for_onpause value);
		callback_for_onpause get_onpause();
		void set_className(String* value);
		String* get_className();
		typedef Object* (*callback_for_onseeked)(Event* ev);
		void set_onseeked(callback_for_onseeked value);
		callback_for_onseeked get_onseeked();
		typedef Object* (*callback_for_onmousedown)(MouseEvent* ev);
		void set_onmousedown(callback_for_onmousedown value);
		callback_for_onmousedown get_onmousedown();
		void set_title(String* value);
		String* get_title();
		typedef Object* (*callback_for_onclick)(MouseEvent* ev);
		void set_onclick(callback_for_onclick value);
		callback_for_onclick get_onclick();
		typedef Object* (*callback_for_onwaiting)(Event* ev);
		void set_onwaiting(callback_for_onwaiting value);
		callback_for_onwaiting get_onwaiting();
		void set_outerHTML(String* value);
		String* get_outerHTML();
		void set_offsetLeft(double value);
		double get_offsetLeft();
		typedef Object* (*callback_for_ondurationchange)(Event* ev);
		void set_ondurationchange(callback_for_ondurationchange value);
		callback_for_ondurationchange get_ondurationchange();
		void set_offsetHeight(double value);
		double get_offsetHeight();
		void set_dir(String* value);
		String* get_dir();
		typedef Object* (*callback_for_onblur)(FocusEvent* ev);
		void set_onblur(callback_for_onblur value);
		callback_for_onblur get_onblur();
		typedef Object* (*callback_for_onemptied)(Event* ev);
		void set_onemptied(callback_for_onemptied value);
		callback_for_onemptied get_onemptied();
		typedef Object* (*callback_for_onseeking)(Event* ev);
		void set_onseeking(callback_for_onseeking value);
		callback_for_onseeking get_onseeking();
		typedef Object* (*callback_for_oncanplay)(Event* ev);
		void set_oncanplay(callback_for_oncanplay value);
		callback_for_oncanplay get_oncanplay();
		typedef Object* (*callback_for_onstalled)(Event* ev);
		void set_onstalled(callback_for_onstalled value);
		callback_for_onstalled get_onstalled();
		typedef Object* (*callback_for_onmousemove)(MouseEvent* ev);
		void set_onmousemove(callback_for_onmousemove value);
		callback_for_onmousemove get_onmousemove();
		void set_style(MSStyleCSSProperties* value);
		MSStyleCSSProperties* get_style();
		void set_isContentEditable(bool value);
		bool get_isContentEditable();
		typedef Object* (*callback_for_onratechange)(Event* ev);
		void set_onratechange(callback_for_onratechange value);
		callback_for_onratechange get_onratechange();
		typedef Object* (*callback_for_onloadstart)(Event* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		typedef Object* (*callback_for_ondragenter)(DragEvent* ev);
		void set_ondragenter(callback_for_ondragenter value);
		callback_for_ondragenter get_ondragenter();
		void set_contentEditable(String* value);
		String* get_contentEditable();
		typedef Object* (*callback_for_onsubmit)(Event* ev);
		void set_onsubmit(callback_for_onsubmit value);
		callback_for_onsubmit get_onsubmit();
		void set_tabIndex(double value);
		double get_tabIndex();
		typedef Object* (*callback_for_onprogress)(Object* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_ondblclick)(MouseEvent* ev);
		void set_ondblclick(callback_for_ondblclick value);
		callback_for_ondblclick get_ondblclick();
		typedef Object* (*callback_for_oncontextmenu)(MouseEvent* ev);
		void set_oncontextmenu(callback_for_oncontextmenu value);
		callback_for_oncontextmenu get_oncontextmenu();
		typedef Object* (*callback_for_onchange)(Event* ev);
		void set_onchange(callback_for_onchange value);
		callback_for_onchange get_onchange();
		typedef Object* (*callback_for_onloadedmetadata)(Event* ev);
		void set_onloadedmetadata(callback_for_onloadedmetadata value);
		callback_for_onloadedmetadata get_onloadedmetadata();
		typedef Object* (*callback_for_onerror)(Event* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onplay)(Event* ev);
		void set_onplay(callback_for_onplay value);
		callback_for_onplay get_onplay();
		void set_id(String* value);
		String* get_id();
		typedef Object* (*callback_for_onplaying)(Event* ev);
		void set_onplaying(callback_for_onplaying value);
		callback_for_onplaying get_onplaying();
		typedef Object* (*callback_for_oncanplaythrough)(Event* ev);
		void set_oncanplaythrough(callback_for_oncanplaythrough value);
		callback_for_oncanplaythrough get_oncanplaythrough();
		typedef Object* (*callback_for_onabort)(UIEvent* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		typedef Object* (*callback_for_onreadystatechange)(Event* ev);
		void set_onreadystatechange(callback_for_onreadystatechange value);
		callback_for_onreadystatechange get_onreadystatechange();
		typedef Object* (*callback_for_onkeypress)(KeyboardEvent* ev);
		void set_onkeypress(callback_for_onkeypress value);
		callback_for_onkeypress get_onkeypress();
		void set_offsetParent(Element* value);
		Element* get_offsetParent();
		typedef Object* (*callback_for_onloadeddata)(Event* ev);
		void set_onloadeddata(callback_for_onloadeddata value);
		callback_for_onloadeddata get_onloadeddata();
		void set_disabled(bool value);
		bool get_disabled();
		typedef Object* (*callback_for_onsuspend)(Event* ev);
		void set_onsuspend(callback_for_onsuspend value);
		callback_for_onsuspend get_onsuspend();
		void set_accessKey(String* value);
		String* get_accessKey();
		typedef Object* (*callback_for_onfocus)(FocusEvent* ev);
		void set_onfocus(callback_for_onfocus value);
		callback_for_onfocus get_onfocus();
		typedef Object* (*callback_for_ontimeupdate)(Event* ev);
		void set_ontimeupdate(callback_for_ontimeupdate value);
		callback_for_ontimeupdate get_ontimeupdate();
		typedef Object* (*callback_for_onselect)(UIEvent* ev);
		void set_onselect(callback_for_onselect value);
		callback_for_onselect get_onselect();
		typedef Object* (*callback_for_ondrop)(DragEvent* ev);
		void set_ondrop(callback_for_ondrop value);
		callback_for_ondrop get_ondrop();
		void set_offsetWidth(double value);
		double get_offsetWidth();
		typedef Object* (*callback_for_onmouseout)(MouseEvent* ev);
		void set_onmouseout(callback_for_onmouseout value);
		callback_for_onmouseout get_onmouseout();
		typedef Object* (*callback_for_onended)(Event* ev);
		void set_onended(callback_for_onended value);
		callback_for_onended get_onended();
		typedef Object* (*callback_for_onscroll)(UIEvent* ev);
		void set_onscroll(callback_for_onscroll value);
		callback_for_onscroll get_onscroll();
		typedef Object* (*callback_for_onmousewheel)(MouseWheelEvent* ev);
		void set_onmousewheel(callback_for_onmousewheel value);
		callback_for_onmousewheel get_onmousewheel();
		typedef Object* (*callback_for_onvolumechange)(Event* ev);
		void set_onvolumechange(callback_for_onvolumechange value);
		callback_for_onvolumechange get_onvolumechange();
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_oninput)(Event* ev);
		void set_oninput(callback_for_oninput value);
		callback_for_oninput get_oninput();
		void click();
		NodeList* getElementsByClassName(const String& classNames);
		void scrollIntoView();
		void scrollIntoView(bool top);
		void focus();
		void blur();
		void insertAdjacentHTML(const String& where, const String& html);
		static void set_prototype(HTMLElement* value);
		static HTMLElement* get_prototype();
		HTMLElement();
	};

	class Comment : CharacterData, MSCommentExtensions 
	{
	public:
		static void set_prototype(Comment* value);
		static Comment* get_prototype();
		Comment();
	};

	class CanvasPattern 
	{
	public:
		static void set_prototype(CanvasPattern* value);
		static CanvasPattern* get_prototype();
		CanvasPattern();
	};

	class HTMLHRElement : HTMLElement, DOML2DeprecatedWidthStyle_HTMLHRElement, MSHTMLHRElementExtensions, HTMLHRElementDOML2Deprecated, DOML2DeprecatedAlignmentStyle_HTMLHRElement, DOML2DeprecatedSizeProperty 
	{
	public:
		static void set_prototype(HTMLHRElement* value);
		static HTMLHRElement* get_prototype();
		HTMLHRElement();
	};

	class MSHTMLFrameSetElementExtensions 
	{
	public:
		void set_name(String* value);
		String* get_name();
		void set_frameBorder(String* value);
		String* get_frameBorder();
		void set_border(String* value);
		String* get_border();
		void set_frameSpacing(Object* value);
		Object* get_frameSpacing();
	};

	class DOML2DeprecatedTextFlowControl_HTMLBlockElement 
	{
	public:
		void set_clear(String* value);
		String* get_clear();
	};

	class PositionOptions 
	{
	public:
		void set_enableHighAccuracy(bool value);
		bool get_enableHighAccuracy();
		void set_timeout(double value);
		double get_timeout();
		void set_maximumAge(double value);
		double get_maximumAge();
	};

	class HTMLObjectElement : HTMLElement, MSHTMLObjectElementExtensions, GetSVGDocument, DOML2DeprecatedMarginStyle_HTMLObjectElement, MSDataBindingExtensions, MSDataBindingRecordSetExtensions, DOML2DeprecatedAlignmentStyle_HTMLObjectElement, DOML2DeprecatedBorderStyle_HTMLObjectElement 
	{
	public:
		void set_width(String* value);
		String* get_width();
		void set_codeType(String* value);
		String* get_codeType();
		void set_archive(String* value);
		String* get_archive();
		void set_standby(String* value);
		String* get_standby();
		void set_name(String* value);
		String* get_name();
		void set_useMap(String* value);
		String* get_useMap();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_data(String* value);
		String* get_data();
		void set_height(String* value);
		String* get_height();
		void set_contentDocument(Document* value);
		Document* get_contentDocument();
		void set_codeBase(String* value);
		String* get_codeBase();
		void set_declare(bool value);
		bool get_declare();
		void set_type(String* value);
		String* get_type();
		void set_code(String* value);
		String* get_code();
		static void set_prototype(HTMLObjectElement* value);
		static HTMLObjectElement* get_prototype();
		HTMLObjectElement();
	};

	class MSHTMLMenuElementExtensions 
	{
	public:
	};

	class DocumentView 
	{
	public:
		void set_defaultView(AbstractView* value);
		AbstractView* get_defaultView();
		Element* elementFromPoint(double x, double y);
	};

	class StorageEvent : Event 
	{
	public:
		void set_oldValue(Object* value);
		Object* get_oldValue();
		void set_newValue(Object* value);
		Object* get_newValue();
		void set_url(String* value);
		String* get_url();
		void set_storageArea(Storage* value);
		Storage* get_storageArea();
		void set_key(String* value);
		String* get_key();
		void initStorageEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& keyArg, Object* oldValueArg, Object* newValueArg, const String& urlArg, Storage* storageAreaArg);
		static void set_prototype(StorageEvent* value);
		static StorageEvent* get_prototype();
		StorageEvent();
	};

	class HTMLEmbedElement : HTMLElement, GetSVGDocument, MSHTMLEmbedElementExtensions 
	{
	public:
		void set_width(String* value);
		String* get_width();
		void set_src(String* value);
		String* get_src();
		void set_name(String* value);
		String* get_name();
		void set_height(String* value);
		String* get_height();
		static void set_prototype(HTMLEmbedElement* value);
		static HTMLEmbedElement* get_prototype();
		HTMLEmbedElement();
	};

	class CharacterData : Node 
	{
	public:
		void set_length(double value);
		double get_length();
		void set_data(String* value);
		String* get_data();
		void deleteData(double offset, double count);
		void replaceData(double offset, double count, const String& arg);
		void appendData(const String& arg);
		void insertData(double offset, const String& arg);
		String* substringData(double offset, double count);
		static void set_prototype(CharacterData* value);
		static CharacterData* get_prototype();
		CharacterData();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableSectionElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class HTMLOptGroupElement : HTMLElement, MSDataBindingExtensions, MSHTMLOptGroupElementExtensions 
	{
	public:
		void set_label(String* value);
		String* get_label();
		static void set_prototype(HTMLOptGroupElement* value);
		static HTMLOptGroupElement* get_prototype();
		HTMLOptGroupElement();
	};

	class HTMLIsIndexElement : HTMLElement, MSHTMLIsIndexElementExtensions 
	{
	public:
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		void set_prompt(String* value);
		String* get_prompt();
		static void set_prototype(HTMLIsIndexElement* value);
		static HTMLIsIndexElement* get_prototype();
		HTMLIsIndexElement();
	};

	class SVGPathSegLinetoRel : SVGPathSeg 
	{
	public:
		void set_y(double value);
		double get_y();
		void set_x(double value);
		double get_x();
		static void set_prototype(SVGPathSegLinetoRel* value);
		static SVGPathSegLinetoRel* get_prototype();
		SVGPathSegLinetoRel();
	};

	class MSHTMLDocumentSelection 
	{
	public:
		void set_selection(MSSelection* value);
		MSSelection* get_selection();
	};

	class DOMException 
	{
	public:
		void set_code(double value);
		double get_code();
		void set_message(String* value);
		String* get_message();
		String* toString();
		void set_HIERARCHY_REQUEST_ERR(double value);
		double get_HIERARCHY_REQUEST_ERR();
		void set_NO_MODIFICATION_ALLOWED_ERR(double value);
		double get_NO_MODIFICATION_ALLOWED_ERR();
		void set_INVALID_MODIFICATION_ERR(double value);
		double get_INVALID_MODIFICATION_ERR();
		void set_NAMESPACE_ERR(double value);
		double get_NAMESPACE_ERR();
		void set_INVALID_CHARACTER_ERR(double value);
		double get_INVALID_CHARACTER_ERR();
		void set_TYPE_MISMATCH_ERR(double value);
		double get_TYPE_MISMATCH_ERR();
		void set_ABORT_ERR(double value);
		double get_ABORT_ERR();
		void set_INVALID_STATE_ERR(double value);
		double get_INVALID_STATE_ERR();
		void set_SECURITY_ERR(double value);
		double get_SECURITY_ERR();
		void set_NETWORK_ERR(double value);
		double get_NETWORK_ERR();
		void set_WRONG_DOCUMENT_ERR(double value);
		double get_WRONG_DOCUMENT_ERR();
		void set_QUOTA_EXCEEDED_ERR(double value);
		double get_QUOTA_EXCEEDED_ERR();
		void set_INDEX_SIZE_ERR(double value);
		double get_INDEX_SIZE_ERR();
		void set_DOMSTRING_SIZE_ERR(double value);
		double get_DOMSTRING_SIZE_ERR();
		void set_SYNTAX_ERR(double value);
		double get_SYNTAX_ERR();
		void set_SERIALIZE_ERR(double value);
		double get_SERIALIZE_ERR();
		void set_VALIDATION_ERR(double value);
		double get_VALIDATION_ERR();
		void set_NOT_FOUND_ERR(double value);
		double get_NOT_FOUND_ERR();
		void set_URL_MISMATCH_ERR(double value);
		double get_URL_MISMATCH_ERR();
		void set_PARSE_ERR(double value);
		double get_PARSE_ERR();
		void set_NO_DATA_ALLOWED_ERR(double value);
		double get_NO_DATA_ALLOWED_ERR();
		void set_NOT_SUPPORTED_ERR(double value);
		double get_NOT_SUPPORTED_ERR();
		void set_INVALID_ACCESS_ERR(double value);
		double get_INVALID_ACCESS_ERR();
		void set_INUSE_ATTRIBUTE_ERR(double value);
		double get_INUSE_ATTRIBUTE_ERR();
		static void set_prototype(DOMException* value);
		static DOMException* get_prototype();
		DOMException();
		static void set_HIERARCHY_REQUEST_ERR(double value);
		static double get_HIERARCHY_REQUEST_ERR();
		static void set_NO_MODIFICATION_ALLOWED_ERR(double value);
		static double get_NO_MODIFICATION_ALLOWED_ERR();
		static void set_INVALID_MODIFICATION_ERR(double value);
		static double get_INVALID_MODIFICATION_ERR();
		static void set_NAMESPACE_ERR(double value);
		static double get_NAMESPACE_ERR();
		static void set_INVALID_CHARACTER_ERR(double value);
		static double get_INVALID_CHARACTER_ERR();
		static void set_TYPE_MISMATCH_ERR(double value);
		static double get_TYPE_MISMATCH_ERR();
		static void set_ABORT_ERR(double value);
		static double get_ABORT_ERR();
		static void set_INVALID_STATE_ERR(double value);
		static double get_INVALID_STATE_ERR();
		static void set_SECURITY_ERR(double value);
		static double get_SECURITY_ERR();
		static void set_NETWORK_ERR(double value);
		static double get_NETWORK_ERR();
		static void set_WRONG_DOCUMENT_ERR(double value);
		static double get_WRONG_DOCUMENT_ERR();
		static void set_QUOTA_EXCEEDED_ERR(double value);
		static double get_QUOTA_EXCEEDED_ERR();
		static void set_INDEX_SIZE_ERR(double value);
		static double get_INDEX_SIZE_ERR();
		static void set_DOMSTRING_SIZE_ERR(double value);
		static double get_DOMSTRING_SIZE_ERR();
		static void set_SYNTAX_ERR(double value);
		static double get_SYNTAX_ERR();
		static void set_SERIALIZE_ERR(double value);
		static double get_SERIALIZE_ERR();
		static void set_VALIDATION_ERR(double value);
		static double get_VALIDATION_ERR();
		static void set_NOT_FOUND_ERR(double value);
		static double get_NOT_FOUND_ERR();
		static void set_URL_MISMATCH_ERR(double value);
		static double get_URL_MISMATCH_ERR();
		static void set_PARSE_ERR(double value);
		static double get_PARSE_ERR();
		static void set_NO_DATA_ALLOWED_ERR(double value);
		static double get_NO_DATA_ALLOWED_ERR();
		static void set_NOT_SUPPORTED_ERR(double value);
		static double get_NOT_SUPPORTED_ERR();
		static void set_INVALID_ACCESS_ERR(double value);
		static double get_INVALID_ACCESS_ERR();
		static void set_INUSE_ATTRIBUTE_ERR(double value);
		static double get_INUSE_ATTRIBUTE_ERR();
	};

	class MSCompatibleInfoCollection 
	{
	public:
		void set_length(double value);
		double get_length();
		MSCompatibleInfo* item(double index);
		static void set_prototype(MSCompatibleInfoCollection* value);
		static MSCompatibleInfoCollection* get_prototype();
		MSCompatibleInfoCollection();
	};

	class MSHTMLIsIndexElementExtensions 
	{
	public:
		void set_action(String* value);
		String* get_action();
	};

	class SVGAnimatedBoolean 
	{
	public:
		void set_animVal(bool value);
		bool get_animVal();
		void set_baseVal(bool value);
		bool get_baseVal();
		static void set_prototype(SVGAnimatedBoolean* value);
		static SVGAnimatedBoolean* get_prototype();
		SVGAnimatedBoolean();
	};

	class SVGSwitchElement : SVGElement, SVGStylable, SVGTransformable, SVGLangSpace, SVGTests 
	{
	public:
		static void set_prototype(SVGSwitchElement* value);
		static SVGSwitchElement* get_prototype();
		SVGSwitchElement();
	};

	class MSHTMLIFrameElementExtensions : DOML2DeprecatedMarginStyle_MSHTMLIFrameElementExtensions, DOML2DeprecatedBorderStyle_MSHTMLIFrameElementExtensions 
	{
	public:
		typedef Object* (*callback_for_onload)(Event* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		void set_frameSpacing(Object* value);
		Object* get_frameSpacing();
		void set_noResize(bool value);
		bool get_noResize();
	};

	class SVGPreserveAspectRatio 
	{
	public:
		void set_align(double value);
		double get_align();
		void set_meetOrSlice(double value);
		double get_meetOrSlice();
		void set_SVG_PRESERVEASPECTRATIO_NONE(double value);
		double get_SVG_PRESERVEASPECTRATIO_NONE();
		void set_SVG_PRESERVEASPECTRATIO_XMINYMID(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMINYMID();
		void set_SVG_PRESERVEASPECTRATIO_XMAXYMIN(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMIN();
		void set_SVG_PRESERVEASPECTRATIO_XMINYMAX(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMINYMAX();
		void set_SVG_PRESERVEASPECTRATIO_XMAXYMAX(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMAX();
		void set_SVG_MEETORSLICE_UNKNOWN(double value);
		double get_SVG_MEETORSLICE_UNKNOWN();
		void set_SVG_PRESERVEASPECTRATIO_XMAXYMID(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMAXYMID();
		void set_SVG_PRESERVEASPECTRATIO_XMIDYMAX(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMAX();
		void set_SVG_PRESERVEASPECTRATIO_XMINYMIN(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMINYMIN();
		void set_SVG_MEETORSLICE_MEET(double value);
		double get_SVG_MEETORSLICE_MEET();
		void set_SVG_PRESERVEASPECTRATIO_XMIDYMID(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMID();
		void set_SVG_PRESERVEASPECTRATIO_XMIDYMIN(double value);
		double get_SVG_PRESERVEASPECTRATIO_XMIDYMIN();
		void set_SVG_MEETORSLICE_SLICE(double value);
		double get_SVG_MEETORSLICE_SLICE();
		void set_SVG_PRESERVEASPECTRATIO_UNKNOWN(double value);
		double get_SVG_PRESERVEASPECTRATIO_UNKNOWN();
		static void set_prototype(SVGPreserveAspectRatio* value);
		static SVGPreserveAspectRatio* get_prototype();
		SVGPreserveAspectRatio();
		static void set_SVG_PRESERVEASPECTRATIO_NONE(double value);
		static double get_SVG_PRESERVEASPECTRATIO_NONE();
		static void set_SVG_PRESERVEASPECTRATIO_XMINYMID(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMINYMID();
		static void set_SVG_PRESERVEASPECTRATIO_XMAXYMIN(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMAXYMIN();
		static void set_SVG_PRESERVEASPECTRATIO_XMINYMAX(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMINYMAX();
		static void set_SVG_PRESERVEASPECTRATIO_XMAXYMAX(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMAXYMAX();
		static void set_SVG_MEETORSLICE_UNKNOWN(double value);
		static double get_SVG_MEETORSLICE_UNKNOWN();
		static void set_SVG_PRESERVEASPECTRATIO_XMAXYMID(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMAXYMID();
		static void set_SVG_PRESERVEASPECTRATIO_XMIDYMAX(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMIDYMAX();
		static void set_SVG_PRESERVEASPECTRATIO_XMINYMIN(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMINYMIN();
		static void set_SVG_MEETORSLICE_MEET(double value);
		static double get_SVG_MEETORSLICE_MEET();
		static void set_SVG_PRESERVEASPECTRATIO_XMIDYMID(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMIDYMID();
		static void set_SVG_PRESERVEASPECTRATIO_XMIDYMIN(double value);
		static double get_SVG_PRESERVEASPECTRATIO_XMIDYMIN();
		static void set_SVG_MEETORSLICE_SLICE(double value);
		static double get_SVG_MEETORSLICE_SLICE();
		static void set_SVG_PRESERVEASPECTRATIO_UNKNOWN(double value);
		static double get_SVG_PRESERVEASPECTRATIO_UNKNOWN();
	};

	class Attr : Node, MSAttrExtensions 
	{
	public:
		void set_specified(bool value);
		bool get_specified();
		void set_ownerElement(Element* value);
		Element* get_ownerElement();
		void set_value(String* value);
		String* get_value();
		void set_name(String* value);
		String* get_name();
		static void set_prototype(Attr* value);
		static Attr* get_prototype();
		Attr();
	};

	class MSBorderColorStyle_HTMLTableRowElement 
	{
	public:
		void set_borderColor(Object* value);
		Object* get_borderColor();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableCaptionElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class PerformanceNavigation 
	{
	public:
		void set_redirectCount(double value);
		double get_redirectCount();
		void set_type(double value);
		double get_type();
		Object* toJSON();
		void set_TYPE_RELOAD(double value);
		double get_TYPE_RELOAD();
		void set_TYPE_RESERVED(double value);
		double get_TYPE_RESERVED();
		void set_TYPE_BACK_FORWARD(double value);
		double get_TYPE_BACK_FORWARD();
		void set_TYPE_NAVIGATE(double value);
		double get_TYPE_NAVIGATE();
		static void set_prototype(PerformanceNavigation* value);
		static PerformanceNavigation* get_prototype();
		PerformanceNavigation();
		static void set_TYPE_RELOAD(double value);
		static double get_TYPE_RELOAD();
		static void set_TYPE_RESERVED(double value);
		static double get_TYPE_RESERVED();
		static void set_TYPE_BACK_FORWARD(double value);
		static double get_TYPE_BACK_FORWARD();
		static void set_TYPE_NAVIGATE(double value);
		static double get_TYPE_NAVIGATE();
	};

	class HTMLBodyElementDOML2Deprecated 
	{
	public:
		void set_link(Object* value);
		Object* get_link();
		void set_aLink(Object* value);
		Object* get_aLink();
		void set_text(Object* value);
		Object* get_text();
		void set_vLink(Object* value);
		Object* get_vLink();
	};

	class SVGStopElement : SVGElement, SVGStylable 
	{
	public:
		void set_offset(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_offset();
		static void set_prototype(SVGStopElement* value);
		static SVGStopElement* get_prototype();
		SVGStopElement();
	};

	class PositionCallback 
	{
	public:
		void operator()(Position* position);
	};

	class SVGSymbolElement : SVGElement, SVGStylable, SVGLangSpace, SVGFitToViewBox 
	{
	public:
		static void set_prototype(SVGSymbolElement* value);
		static SVGSymbolElement* get_prototype();
		SVGSymbolElement();
	};

	class SVGElementInstanceList 
	{
	public:
		void set_length(double value);
		double get_length();
		SVGElementInstance* item(double index);
		static void set_prototype(SVGElementInstanceList* value);
		static SVGElementInstanceList* get_prototype();
		SVGElementInstanceList();
	};

	class MSDataBindingRecordSetExtensions 
	{
	public:
		void set_recordset(Object* value);
		Object* get_recordset();
		Object* namedRecordset(const String& dataMember);
		Object* namedRecordset(const String& dataMember, Object* hierarchy);
	};

	class CSSRuleList 
	{
	public:
		CSSRule* operator[](double index);
		void set_length(double value);
		double get_length();
		CSSRule* item(double index);
		static void set_prototype(CSSRuleList* value);
		static CSSRuleList* get_prototype();
		CSSRuleList();
	};

	class MSHTMLTableColElementExtensions 
	{
	public:
	};

	class LinkStyle 
	{
	public:
		void set_sheet(StyleSheet* value);
		StyleSheet* get_sheet();
	};

	class MSHTMLMarqueeElementExtensions 
	{
	public:
	};

	class HTMLVideoElement : HTMLMediaElement 
	{
	public:
		void set_width(double value);
		double get_width();
		void set_videoWidth(double value);
		double get_videoWidth();
		void set_videoHeight(double value);
		double get_videoHeight();
		void set_height(double value);
		double get_height();
		void set_poster(String* value);
		String* get_poster();
		static void set_prototype(HTMLVideoElement* value);
		static HTMLVideoElement* get_prototype();
		HTMLVideoElement();
	};

	class MSXMLHttpRequestExtensions 
	{
	public:
		void set_responseBody(Object* value);
		Object* get_responseBody();
		void set_timeout(double value);
		double get_timeout();
		typedef Object* (*callback_for_ontimeout)(Event* ev);
		void set_ontimeout(callback_for_ontimeout value);
		callback_for_ontimeout get_ontimeout();
	};

	class ClientRectList 
	{
	public:
		ClientRect* operator[](double index);
		void set_length(double value);
		double get_length();
		ClientRect* item(double index);
		static void set_prototype(ClientRectList* value);
		static ClientRectList* get_prototype();
		ClientRectList();
	};

	class DOML2DeprecatedAlignmentStyle_HTMLTableCellElement 
	{
	public:
		void set_align(String* value);
		String* get_align();
	};

	class SVGMaskElement : SVGElement, SVGUnitTypes, SVGStylable, SVGLangSpace, SVGTests 
	{
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_maskUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_maskUnits();
		void set_maskContentUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_maskContentUnits();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		static void set_prototype(SVGMaskElement* value);
		static SVGMaskElement* get_prototype();
		SVGMaskElement();
		HTMLAudioElement();
		HTMLAudioElement(const String& src);
		HTMLOptionElement();
		HTMLOptionElement(, const String& text);
		HTMLOptionElement(, const String& text, );
		HTMLOptionElement(, const String& text, , const String& value);
		HTMLOptionElement(const String& text, const String& value, bool defaultSelected, bool selected);
		HTMLImageElement();
		HTMLImageElement(, double width);
		HTMLImageElement(double width, double height);
	};
	extern Object* (*ondragend)(DragEvent* ev);
	extern Object* (*onkeydown)(KeyboardEvent* ev);
	extern Object* (*ondragover)(DragEvent* ev);
	extern Object* (*onkeyup)(KeyboardEvent* ev);
	extern Object* (*onreset)(Event* ev);
	extern Object* (*onmouseup)(MouseEvent* ev);
	extern Object* (*ondragstart)(DragEvent* ev);
	extern Object* (*ondrag)(DragEvent* ev);
	extern Object* (*onmouseover)(MouseEvent* ev);
	extern Object* (*ondragleave)(DragEvent* ev);
	extern History* history;
	extern String* name;
	extern Object* (*onafterprint)(Event* ev);
	extern Object* (*onpause)(Event* ev);
	extern Object* (*onbeforeprint)(Event* ev);
	extern Window* top;
	extern Object* (*onmousedown)(MouseEvent* ev);
	extern Object* (*onseeked)(Event* ev);
	extern Window* opener;
	extern Object* (*onclick)(MouseEvent* ev);
	extern Object* (*onwaiting)(Event* ev);
	extern Object* (*ononline)(Event* ev);
	extern Object* (*ondurationchange)(Event* ev);
	extern Window* frames;
	extern Object* (*onblur)(FocusEvent* ev);
	extern Object* (*onemptied)(Event* ev);
	extern Object* (*onseeking)(Event* ev);
	extern Object* (*oncanplay)(Event* ev);
	extern Object* (*onstalled)(Event* ev);
	extern Object* (*onmousemove)(MouseEvent* ev);
	extern Object* (*onoffline)(Event* ev);
	extern double length;
	extern Object* (*onbeforeunload)(BeforeUnloadEvent* ev);
	extern Object* (*onratechange)(Event* ev);
	extern Object* (*onstorage)(StorageEvent* ev);
	extern Object* (*onloadstart)(Event* ev);
	extern Object* (*ondragenter)(DragEvent* ev);
	extern Object* (*onsubmit)(Event* ev);
	extern Window* self;
	extern Object* (*onprogress)(Object* ev);
	extern Object* (*ondblclick)(MouseEvent* ev);
	extern Object* (*oncontextmenu)(MouseEvent* ev);
	extern Object* (*onchange)(Event* ev);
	extern Object* (*onloadedmetadata)(Event* ev);
	extern Object* (*onplay)(Event* ev);
	extern ErrorFunction* onerror;
	extern Object* (*onplaying)(Event* ev);
	extern Window* parent;
	extern Location* location;
	extern Object* (*oncanplaythrough)(Event* ev);
	extern Object* (*onabort)(UIEvent* ev);
	extern Object* (*onreadystatechange)(Event* ev);
	extern Object* (*onkeypress)(KeyboardEvent* ev);
	extern Element* frameElement;
	extern Object* (*onloadeddata)(Event* ev);
	extern Object* (*onsuspend)(Event* ev);
	extern Window* window;
	extern Object* (*onfocus)(FocusEvent* ev);
	extern Object* (*onmessage)(MessageEvent* ev);
	extern Object* (*ontimeupdate)(Event* ev);
	extern Object* (*onresize)(UIEvent* ev);
	extern Navigator* navigator;
	extern Object* (*onselect)(UIEvent* ev);
	extern Object* (*ondrop)(DragEvent* ev);
	extern Object* (*onmouseout)(MouseEvent* ev);
	extern Object* (*onended)(Event* ev);
	extern Object* (*onhashchange)(Event* ev);
	extern Object* (*onunload)(Event* ev);
	extern Object* (*onscroll)(UIEvent* ev);
	extern Object* (*onmousewheel)(MouseWheelEvent* ev);
	extern Object* (*onload)(Event* ev);
	extern Object* (*onvolumechange)(Event* ev);
	extern Object* (*oninput)(Event* ev);
	extern void alert();
	extern void alert(const String& message);
	extern void focus();
	extern void print();
	extern String* prompt();
	extern String* prompt(, const String& message);
	extern String* prompt(const String& message, const String& defaul);
	extern String* toString();
	extern Window* open();
	extern Window* open(, const String& url);
	extern Window* open(, const String& url, );
	extern Window* open(, const String& url, , const String& target);
	extern Window* open(const String& url, const String& target, const String& features, bool replace);
	extern void close();
	extern bool confirm();
	extern bool confirm(const String& message);
	extern void postMessage(Object* message, const String& targetOrigin);
	extern void postMessage(Object* message, const String& targetOrigin, Object* ports);
	extern Object* showModalDialog();
	extern Object* showModalDialog(, const String& url);
	extern Object* showModalDialog(, const String& url, );
	extern Object* showModalDialog(const String& url, Object* argument, Object* options);
	extern void blur();
	extern Selection* getSelection();
	extern CSSStyleDeclaration* getComputedStyle(Element* elt);
	extern CSSStyleDeclaration* getComputedStyle(Element* elt, const String& pseudoElt);
	extern bool attachEvent(const String& event, EventListener* listener);
	extern void detachEvent(const String& event, EventListener* listener);
	extern String* status;
	extern Object* (*onmouseleave)(MouseEvent* ev);
	extern double screenLeft;
	extern Object* offscreenBuffering;
	extern double maxConnectionsPerServer;
	extern Object* (*onmouseenter)(MouseEvent* ev);
	extern DataTransfer* clipboardData;
	extern String* defaultStatus;
	extern Navigator* clientInformation;
	extern bool closed;
	extern Object* (*onhelp)(Event* ev);
	extern BrowserPublic* external;
	extern MSEventObj* event;
	extern Object* (*onfocusout)(FocusEvent* ev);
	extern double screenTop;
	extern Object* (*onfocusin)(FocusEvent* ev);
	extern Window* showModelessDialog();
	extern Window* showModelessDialog(, const String& url);
	extern Window* showModelessDialog(, const String& url, );
	extern Window* showModelessDialog(const String& url, Object* argument, Object* options);
	extern void navigate(const String& url);
	extern void resizeBy();
	extern void resizeBy(, double x);
	extern void resizeBy(double x, double y);
	extern Object* item(Object* index);
	extern void resizeTo();
	extern void resizeTo(, double x);
	extern void resizeTo(double x, double y);
	extern MSPopupWindow* createPopup();
	extern MSPopupWindow* createPopup(Object* arguments);
	extern String* toStaticHTML(const String& html);
	extern Object* execScript(const String& code);
	extern Object* execScript(const String& code, const String& language);
	extern void msWriteProfilerMark(const String& profilerMarkName);
	extern void moveTo();
	extern void moveTo(, double x);
	extern void moveTo(double x, double y);
	extern void moveBy();
	extern void moveBy(, double x);
	extern void moveBy(double x, double y);
	extern void showHelp(const String& url);
	extern void showHelp(const String& url, Object* helpArg);
	extern void showHelp(const String& url, Object* helpArg, const String& features);
	extern Object* performance;
	extern double outerWidth;
	extern double pageXOffset;
	extern double innerWidth;
	extern double pageYOffset;
	extern double screenY;
	extern double outerHeight;
	extern Screen* screen;
	extern double innerHeight;
	extern double screenX;
	extern void scroll();
	extern void scroll(, double x);
	extern void scroll(double x, double y);
	extern void scrollBy();
	extern void scrollBy(, double x);
	extern void scrollBy(double x, double y);
	extern void scrollTo();
	extern void scrollTo(, double x);
	extern void scrollTo(double x, double y);
	extern StyleMedia* styleMedia;
	extern Document* document;
	extern void removeEventListener(const String& type, EventListener* listener);
	extern void removeEventListener(const String& type, EventListener* listener, bool useCapture);
	extern void addEventListener(const String& type, EventListener* listener);
	extern void addEventListener(const String& type, EventListener* listener, bool useCapture);
	extern bool dispatchEvent(Event* evt);
	extern Storage* localStorage;
	extern Storage* sessionStorage;
	extern void clearTimeout(double handle);
	extern double setTimeout(Object* expression);
	extern double setTimeout(Object* expression, double msec);
	extern double setTimeout(Object* expression, double msec, Object* language);
	extern void clearInterval(double handle);
	extern double setInterval(Object* expression);
	extern double setInterval(Object* expression, double msec);
	extern double setInterval(Object* expression, double msec, Object* language);

	class HTMLBodyElement 
	{
	public:
		typedef Object* (*callback_for_onpopstate)(PopStateEvent* ev);
		void set_onpopstate(callback_for_onpopstate value);
		callback_for_onpopstate get_onpopstate();
	};

	class MSGestureEvent : UIEvent 
	{
	public:
		void set_offsetY(double value);
		double get_offsetY();
		void set_translationY(double value);
		double get_translationY();
		void set_velocityExpansion(double value);
		double get_velocityExpansion();
		void set_velocityY(double value);
		double get_velocityY();
		void set_velocityAngular(double value);
		double get_velocityAngular();
		void set_translationX(double value);
		double get_translationX();
		void set_velocityX(double value);
		double get_velocityX();
		void set_hwTimestamp(double value);
		double get_hwTimestamp();
		void set_offsetX(double value);
		double get_offsetX();
		void set_screenX(double value);
		double get_screenX();
		void set_rotation(double value);
		double get_rotation();
		void set_expansion(double value);
		double get_expansion();
		void set_clientY(double value);
		double get_clientY();
		void set_screenY(double value);
		double get_screenY();
		void set_scale(double value);
		double get_scale();
		void set_gestureObject(Object* value);
		Object* get_gestureObject();
		void set_clientX(double value);
		double get_clientX();
		void initGestureEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, double offsetXArg, double offsetYArg, double translationXArg, double translationYArg, double scaleArg, double expansionArg, double rotationArg, double velocityXArg, double velocityYArg, double velocityExpansionArg, double velocityAngularArg, double hwTimestampArg);
		void set_MSGESTURE_FLAG_BEGIN(double value);
		double get_MSGESTURE_FLAG_BEGIN();
		void set_MSGESTURE_FLAG_END(double value);
		double get_MSGESTURE_FLAG_END();
		void set_MSGESTURE_FLAG_CANCEL(double value);
		double get_MSGESTURE_FLAG_CANCEL();
		void set_MSGESTURE_FLAG_INERTIA(double value);
		double get_MSGESTURE_FLAG_INERTIA();
		void set_MSGESTURE_FLAG_NONE(double value);
		double get_MSGESTURE_FLAG_NONE();
		static void set_prototype(MSGestureEvent* value);
		static MSGestureEvent* get_prototype();
		MSGestureEvent();
		static void set_MSGESTURE_FLAG_BEGIN(double value);
		static double get_MSGESTURE_FLAG_BEGIN();
		static void set_MSGESTURE_FLAG_END(double value);
		static double get_MSGESTURE_FLAG_END();
		static void set_MSGESTURE_FLAG_CANCEL(double value);
		static double get_MSGESTURE_FLAG_CANCEL();
		static void set_MSGESTURE_FLAG_INERTIA(double value);
		static double get_MSGESTURE_FLAG_INERTIA();
		static void set_MSGESTURE_FLAG_NONE(double value);
		static double get_MSGESTURE_FLAG_NONE();
	};

	class HTMLAnchorElement 
	{
	public:
		void set_text(String* value);
		String* get_text();
	};

	class HTMLInputElement 
	{
	public:
		void set_validationMessage(String* value);
		String* get_validationMessage();
		void set_files(FileList* value);
		FileList* get_files();
		void set_max(String* value);
		String* get_max();
		void set_formTarget(String* value);
		String* get_formTarget();
		void set_willValidate(bool value);
		bool get_willValidate();
		void set_step(String* value);
		String* get_step();
		void set_autofocus(bool value);
		bool get_autofocus();
		void set_required(bool value);
		bool get_required();
		void set_formEnctype(String* value);
		String* get_formEnctype();
		void set_valueAsNumber(double value);
		double get_valueAsNumber();
		void set_placeholder(String* value);
		String* get_placeholder();
		void set_formMethod(String* value);
		String* get_formMethod();
		void set_list(HTMLElement* value);
		HTMLElement* get_list();
		void set_autocomplete(String* value);
		String* get_autocomplete();
		void set_min(String* value);
		String* get_min();
		void set_formAction(String* value);
		String* get_formAction();
		void set_pattern(String* value);
		String* get_pattern();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_formNoValidate(String* value);
		String* get_formNoValidate();
		void set_multiple(bool value);
		bool get_multiple();
		bool checkValidity();
		void stepDown();
		void stepDown(double n);
		void stepUp();
		void stepUp(double n);
		void setCustomValidity(const String& error);
	};

	class ErrorEvent : Event 
	{
	public:
		void set_colno(double value);
		double get_colno();
		void set_filename(String* value);
		String* get_filename();
		void set_lineno(double value);
		double get_lineno();
		void set_message(String* value);
		String* get_message();
		void initErrorEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& messageArg, const String& filenameArg, double linenoArg);
		static void set_prototype(ErrorEvent* value);
		static ErrorEvent* get_prototype();
		ErrorEvent();
	};

	class SVGFilterElement : SVGElement, SVGUnitTypes, SVGStylable, SVGLangSpace, SVGURIReference 
	{
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_filterResX(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_filterResX();
		void set_filterUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_filterUnits();
		void set_primitiveUnits(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_primitiveUnits();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		void set_filterResY(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_filterResY();
		void setFilterRes(double filterResX, double filterResY);
		static void set_prototype(SVGFilterElement* value);
		static SVGFilterElement* get_prototype();
		SVGFilterElement();
	};

	class TrackEvent : Event 
	{
	public:
		void set_track(Object* value);
		Object* get_track();
		static void set_prototype(TrackEvent* value);
		static TrackEvent* get_prototype();
		TrackEvent();
	};

	class SVGFEMergeNodeElement : SVGElement 
	{
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		static void set_prototype(SVGFEMergeNodeElement* value);
		static SVGFEMergeNodeElement* get_prototype();
		SVGFEMergeNodeElement();
	};

	class SVGFEFloodElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		static void set_prototype(SVGFEFloodElement* value);
		static SVGFEFloodElement* get_prototype();
		SVGFEFloodElement();
	};

	class MSElementExtensions 
	{
	public:
		void set_msRegionOverflow(String* value);
		String* get_msRegionOverflow();
		typedef Object* (*callback_for_onmspointerdown)(Object* ev);
		void set_onmspointerdown(callback_for_onmspointerdown value);
		callback_for_onmspointerdown get_onmspointerdown();
		typedef Object* (*callback_for_onmsgotpointercapture)(Object* ev);
		void set_onmsgotpointercapture(callback_for_onmsgotpointercapture value);
		callback_for_onmsgotpointercapture get_onmsgotpointercapture();
		typedef Object* (*callback_for_onmsgesturedoubletap)(Object* ev);
		void set_onmsgesturedoubletap(callback_for_onmsgesturedoubletap value);
		callback_for_onmsgesturedoubletap get_onmsgesturedoubletap();
		typedef Object* (*callback_for_onmspointerhover)(Object* ev);
		void set_onmspointerhover(callback_for_onmspointerhover value);
		callback_for_onmspointerhover get_onmspointerhover();
		typedef Object* (*callback_for_onmsgesturehold)(Object* ev);
		void set_onmsgesturehold(callback_for_onmsgesturehold value);
		callback_for_onmsgesturehold get_onmsgesturehold();
		typedef Object* (*callback_for_onmspointermove)(Object* ev);
		void set_onmspointermove(callback_for_onmspointermove value);
		callback_for_onmspointermove get_onmspointermove();
		typedef Object* (*callback_for_onmsgesturechange)(Object* ev);
		void set_onmsgesturechange(callback_for_onmsgesturechange value);
		callback_for_onmsgesturechange get_onmsgesturechange();
		typedef Object* (*callback_for_onmsgesturestart)(Object* ev);
		void set_onmsgesturestart(callback_for_onmsgesturestart value);
		callback_for_onmsgesturestart get_onmsgesturestart();
		typedef Object* (*callback_for_onmspointercancel)(Object* ev);
		void set_onmspointercancel(callback_for_onmspointercancel value);
		callback_for_onmspointercancel get_onmspointercancel();
		typedef Object* (*callback_for_onmsgestureend)(Object* ev);
		void set_onmsgestureend(callback_for_onmsgestureend value);
		callback_for_onmsgestureend get_onmsgestureend();
		typedef Object* (*callback_for_onmsgesturetap)(Object* ev);
		void set_onmsgesturetap(callback_for_onmsgesturetap value);
		callback_for_onmsgesturetap get_onmsgesturetap();
		typedef Object* (*callback_for_onmspointerout)(Object* ev);
		void set_onmspointerout(callback_for_onmspointerout value);
		callback_for_onmspointerout get_onmspointerout();
		typedef Object* (*callback_for_onmsinertiastart)(Object* ev);
		void set_onmsinertiastart(callback_for_onmsinertiastart value);
		callback_for_onmsinertiastart get_onmsinertiastart();
		typedef Object* (*callback_for_onmslostpointercapture)(Object* ev);
		void set_onmslostpointercapture(callback_for_onmslostpointercapture value);
		callback_for_onmslostpointercapture get_onmslostpointercapture();
		typedef Object* (*callback_for_onmspointerover)(Object* ev);
		void set_onmspointerover(callback_for_onmspointerover value);
		callback_for_onmspointerover get_onmspointerover();
		void set_msContentZoomFactor(double value);
		double get_msContentZoomFactor();
		typedef Object* (*callback_for_onmspointerup)(Object* ev);
		void set_onmspointerup(callback_for_onmspointerup value);
		callback_for_onmspointerup get_onmspointerup();
		MSRangeCollection* msGetRegionContent();
		void msReleasePointerCapture(double pointerId);
		void msSetPointerCapture(double pointerId);
		static void set_prototype(MSElementExtensions* value);
		static MSElementExtensions* get_prototype();
		MSElementExtensions();
	};

	class MSCSSScrollTranslationProperties 
	{
	public:
		void set_msScrollTranslation(String* value);
		String* get_msScrollTranslation();
	};

	class MSGesture 
	{
	public:
		void set_target(Element* value);
		Element* get_target();
		void addPointer(double pointerId);
		void stop();
		static void set_prototype(MSGesture* value);
		static MSGesture* get_prototype();
		MSGesture();
	};

	class TextTrackCue : EventTarget 
	{
	public:
		typedef Object* (*callback_for_onenter)(Event* ev);
		void set_onenter(callback_for_onenter value);
		callback_for_onenter get_onenter();
		void set_track(TextTrack* value);
		TextTrack* get_track();
		void set_endTime(double value);
		double get_endTime();
		void set_text(String* value);
		String* get_text();
		void set_pauseOnExit(bool value);
		bool get_pauseOnExit();
		void set_id(String* value);
		String* get_id();
		void set_startTime(double value);
		double get_startTime();
		typedef Object* (*callback_for_onexit)(Event* ev);
		void set_onexit(callback_for_onexit value);
		callback_for_onexit get_onexit();
		DocumentFragment* getCueAsHTML();
		static void set_prototype(TextTrackCue* value);
		static TextTrackCue* get_prototype();
		TextTrackCue();
	};

	class MSHTMLDocumentViewExtensions 
	{
	public:
		void set_msCSSOMElementFloatMetrics(bool value);
		bool get_msCSSOMElementFloatMetrics();
		NodeList* msElementsFromPoint(double x, double y);
		NodeList* msElementsFromRect(double left, double top, double width, double height);
		static void set_prototype(MSHTMLDocumentViewExtensions* value);
		static MSHTMLDocumentViewExtensions* get_prototype();
		MSHTMLDocumentViewExtensions();
	};

	class MSStreamReader : MSBaseReader 
	{
	public:
		void set_error(DOMError* value);
		DOMError* get_error();
		void readAsArrayBuffer(MSStream* stream);
		void readAsArrayBuffer(MSStream* stream, double size);
		void readAsBlob(MSStream* stream);
		void readAsBlob(MSStream* stream, double size);
		void readAsDataURL(MSStream* stream);
		void readAsDataURL(MSStream* stream, double size);
		void readAsText(MSStream* stream);
		void readAsText(MSStream* stream, const String& encoding);
		void readAsText(MSStream* stream, const String& encoding, double size);
		static void set_prototype(MSStreamReader* value);
		static MSStreamReader* get_prototype();
		MSStreamReader();
	};

	class CSSFlexibleBoxProperties 
	{
	public:
		void set_msFlex(String* value);
		String* get_msFlex();
		void set_msFlexDirection(String* value);
		String* get_msFlexDirection();
		void set_msFlexNegative(String* value);
		String* get_msFlexNegative();
		void set_msFlexPack(String* value);
		String* get_msFlexPack();
		void set_msFlexWrap(String* value);
		String* get_msFlexWrap();
		void set_msFlexItemAlign(String* value);
		String* get_msFlexItemAlign();
		void set_msFlexOrder(String* value);
		String* get_msFlexOrder();
		void set_msFlexPositive(String* value);
		String* get_msFlexPositive();
		void set_msFlexAlign(String* value);
		String* get_msFlexAlign();
		void set_msFlexFlow(String* value);
		String* get_msFlexFlow();
		void set_msFlexPreferredSize(String* value);
		String* get_msFlexPreferredSize();
		void set_msFlexLinePack(String* value);
		String* get_msFlexLinePack();
	};

	class DOMTokenList 
	{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		bool contains(const String& token);
		void remove(const String& token);
		bool toggle(const String& token);
		void add(const String& token);
		String* item(double index);
		String* toString();
		static void set_prototype(DOMTokenList* value);
		static DOMTokenList* get_prototype();
		DOMTokenList();
	};

	class EventException 
	{
	public:
		void set_name(String* value);
		String* get_name();
	};

	class SVGFEFuncAElement : SVGComponentTransferFunctionElement 
	{
	public:
		static void set_prototype(SVGFEFuncAElement* value);
		static SVGFEFuncAElement* get_prototype();
		SVGFEFuncAElement();
	};

	class Performance 
	{
	public:
		double now();
	};

	class SVGFETileElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		static void set_prototype(SVGFETileElement* value);
		static SVGFETileElement* get_prototype();
		SVGFETileElement();
	};

	class SVGFEBlendElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_in2(SVGAnimatedString* value);
		SVGAnimatedString* get_in2();
		void set_mode(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_mode();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_SVG_FEBLEND_MODE_DARKEN(double value);
		double get_SVG_FEBLEND_MODE_DARKEN();
		void set_SVG_FEBLEND_MODE_UNKNOWN(double value);
		double get_SVG_FEBLEND_MODE_UNKNOWN();
		void set_SVG_FEBLEND_MODE_MULTIPLY(double value);
		double get_SVG_FEBLEND_MODE_MULTIPLY();
		void set_SVG_FEBLEND_MODE_NORMAL(double value);
		double get_SVG_FEBLEND_MODE_NORMAL();
		void set_SVG_FEBLEND_MODE_SCREEN(double value);
		double get_SVG_FEBLEND_MODE_SCREEN();
		void set_SVG_FEBLEND_MODE_LIGHTEN(double value);
		double get_SVG_FEBLEND_MODE_LIGHTEN();
		static void set_prototype(SVGFEBlendElement* value);
		static SVGFEBlendElement* get_prototype();
		SVGFEBlendElement();
		static void set_SVG_FEBLEND_MODE_DARKEN(double value);
		static double get_SVG_FEBLEND_MODE_DARKEN();
		static void set_SVG_FEBLEND_MODE_UNKNOWN(double value);
		static double get_SVG_FEBLEND_MODE_UNKNOWN();
		static void set_SVG_FEBLEND_MODE_MULTIPLY(double value);
		static double get_SVG_FEBLEND_MODE_MULTIPLY();
		static void set_SVG_FEBLEND_MODE_NORMAL(double value);
		static double get_SVG_FEBLEND_MODE_NORMAL();
		static void set_SVG_FEBLEND_MODE_SCREEN(double value);
		static double get_SVG_FEBLEND_MODE_SCREEN();
		static void set_SVG_FEBLEND_MODE_LIGHTEN(double value);
		static double get_SVG_FEBLEND_MODE_LIGHTEN();
	};

	class WindowTimers : WindowTimersExtension 
	{
	public:
		static void set_prototype(WindowTimers* value);
		static WindowTimers* get_prototype();
		WindowTimers();
	};

	class CSSStyleDeclaration : CSS2DTransformsProperties, CSSTransitionsProperties, CSSFontsProperties, MSCSSHighContrastProperties, CSSGridProperties, CSSAnimationsProperties, MSCSSContentZoomProperties, MSCSSScrollTranslationProperties, MSCSSTouchManipulationProperties, CSSFlexibleBoxProperties, MSCSSPositionedFloatsProperties, MSCSSRegionProperties, MSCSSSelectionBoundaryProperties, CSSMultiColumnProperties, CSSTextProperties, CSS3DTransformsProperties 
	{
	public:
	};

	class MessageChannel 
	{
	public:
		void set_port2(MessagePort* value);
		MessagePort* get_port2();
		void set_port1(MessagePort* value);
		MessagePort* get_port1();
		static void set_prototype(MessageChannel* value);
		static MessageChannel* get_prototype();
		MessageChannel();
	};

	class SVGFEMergeElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		static void set_prototype(SVGFEMergeElement* value);
		static SVGFEMergeElement* get_prototype();
		SVGFEMergeElement();
	};

	class Navigator : MSFileSaver 
	{
	public:
	};

	class TransitionEvent : Event 
	{
	public:
		void set_propertyName(String* value);
		String* get_propertyName();
		void set_elapsedTime(double value);
		double get_elapsedTime();
		void initTransitionEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& propertyNameArg, double elapsedTimeArg);
		static void set_prototype(TransitionEvent* value);
		static TransitionEvent* get_prototype();
		TransitionEvent();
	};

	class MediaQueryList 
	{
	public:
		void set_matches(bool value);
		bool get_matches();
		void set_media(String* value);
		String* get_media();
		void addListener(MediaQueryListListener* listener);
		void removeListener(MediaQueryListListener* listener);
		static void set_prototype(MediaQueryList* value);
		static MediaQueryList* get_prototype();
		MediaQueryList();
	};

	class DOMError 
	{
	public:
		void set_name(String* value);
		String* get_name();
		String* toString();
		static void set_prototype(DOMError* value);
		static DOMError* get_prototype();
		DOMError();
	};

	class SVGFEPointLightElement : SVGElement 
	{
	public:
		void set_y(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_y();
		void set_x(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_x();
		void set_z(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_z();
		static void set_prototype(SVGFEPointLightElement* value);
		static SVGFEPointLightElement* get_prototype();
		SVGFEPointLightElement();
	};

	class CSSFontsProperties 
	{
	public:
		void set_msFontFeatureSettings(String* value);
		String* get_msFontFeatureSettings();
		void set_fontFeatureSettings(String* value);
		String* get_fontFeatureSettings();
	};

	class CloseEvent : Event 
	{
	public:
		void set_wasClean(bool value);
		bool get_wasClean();
		void set_reason(String* value);
		String* get_reason();
		void set_code(double value);
		double get_code();
		void initCloseEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, bool wasCleanArg, double codeArg, const String& reasonArg);
		static void set_prototype(CloseEvent* value);
		static CloseEvent* get_prototype();
		CloseEvent();
	};

	class WebSocket : EventTarget 
	{
	public:
		void set_protocol(String* value);
		String* get_protocol();
		void set_readyState(double value);
		double get_readyState();
		void set_bufferedAmount(double value);
		double get_bufferedAmount();
		typedef Object* (*callback_for_onopen)(Event* ev);
		void set_onopen(callback_for_onopen value);
		callback_for_onopen get_onopen();
		void set_extensions(String* value);
		String* get_extensions();
		typedef Object* (*callback_for_onmessage)(Object* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		typedef Object* (*callback_for_onclose)(CloseEvent* ev);
		void set_onclose(callback_for_onclose value);
		callback_for_onclose get_onclose();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		void set_binaryType(String* value);
		String* get_binaryType();
		void set_url(String* value);
		String* get_url();
		void close();
		void close(, double code);
		void close(double code, const String& reason);
		void send(Object* data);
		void set_OPEN(double value);
		double get_OPEN();
		void set_CLOSING(double value);
		double get_CLOSING();
		void set_CONNECTING(double value);
		double get_CONNECTING();
		void set_CLOSED(double value);
		double get_CLOSED();
		static void set_prototype(WebSocket* value);
		static WebSocket* get_prototype();
		WebSocket(const String& url);
		WebSocket(const String& url, const String& prototcol);
		WebSocket(const String& url, String** prototcol);
		static void set_OPEN(double value);
		static double get_OPEN();
		static void set_CLOSING(double value);
		static double get_CLOSING();
		static void set_CONNECTING(double value);
		static double get_CONNECTING();
		static void set_CLOSED(double value);
		static double get_CLOSED();
	};

	class ProgressEvent : Event 
	{
	public:
		void set_loaded(double value);
		double get_loaded();
		void set_lengthComputable(bool value);
		bool get_lengthComputable();
		void set_total(double value);
		double get_total();
		void initProgressEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, bool lengthComputableArg, double loadedArg, double totalArg);
		static void set_prototype(ProgressEvent* value);
		static ProgressEvent* get_prototype();
		ProgressEvent();
	};

	class HTMLCanvasElement 
	{
	public:
		Blob* msToBlob();
	};

	class IDBObjectStore 
	{
	public:
		void set_indexNames(DOMStringList* value);
		DOMStringList* get_indexNames();
		void set_name(String* value);
		String* get_name();
		void set_transaction(IDBTransaction* value);
		IDBTransaction* get_transaction();
		void set_keyPath(String* value);
		String* get_keyPath();
		IDBRequest* count();
		IDBRequest* count(Object* key);
		IDBRequest* add(Object* value);
		IDBRequest* add(Object* value, Object* key);
		IDBRequest* clear();
		IDBIndex* createIndex(const String& name, const String& keyPath);
		IDBIndex* createIndex(const String& name, const String& keyPath, Object* optionalParameters);
		IDBRequest* put(Object* value);
		IDBRequest* put(Object* value, Object* key);
		IDBRequest* openCursor();
		IDBRequest* openCursor(, Object* range);
		IDBRequest* openCursor(Object* range, const String& direction);
		void deleteIndex(const String& indexName);
		IDBIndex* index(const String& name);
		IDBRequest* get(Object* key);
		IDBRequest* delet(Object* key);
		static void set_prototype(IDBObjectStore* value);
		static IDBObjectStore* get_prototype();
		IDBObjectStore();
	};

	class ObjectURLOptions 
	{
	public:
		void set_oneTimeOnly(bool value);
		bool get_oneTimeOnly();
	};

	class SVGFEGaussianBlurElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_stdDeviationX(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_stdDeviationX();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_stdDeviationY(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_stdDeviationY();
		void setStdDeviation(double stdDeviationX, double stdDeviationY);
		static void set_prototype(SVGFEGaussianBlurElement* value);
		static SVGFEGaussianBlurElement* get_prototype();
		SVGFEGaussianBlurElement();
	};

	class MSHTMLDocumentExtensions 
	{
	public:
		typedef Object* (*callback_for_onmspointerdown)(Object* ev);
		void set_onmspointerdown(callback_for_onmspointerdown value);
		callback_for_onmspointerdown get_onmspointerdown();
		typedef Object* (*callback_for_onmspointercancel)(Object* ev);
		void set_onmspointercancel(callback_for_onmspointercancel value);
		callback_for_onmspointercancel get_onmspointercancel();
		typedef Object* (*callback_for_onmsgesturedoubletap)(Object* ev);
		void set_onmsgesturedoubletap(callback_for_onmsgesturedoubletap value);
		callback_for_onmsgesturedoubletap get_onmsgesturedoubletap();
		typedef Object* (*callback_for_onmsgesturetap)(Object* ev);
		void set_onmsgesturetap(callback_for_onmsgesturetap value);
		callback_for_onmsgesturetap get_onmsgesturetap();
		typedef Object* (*callback_for_onmsgestureend)(Object* ev);
		void set_onmsgestureend(callback_for_onmsgestureend value);
		callback_for_onmsgestureend get_onmsgestureend();
		typedef Object* (*callback_for_onmspointerout)(Object* ev);
		void set_onmspointerout(callback_for_onmspointerout value);
		callback_for_onmspointerout get_onmspointerout();
		typedef Object* (*callback_for_onmsmanipulationstatechanged)(Object* ev);
		void set_onmsmanipulationstatechanged(callback_for_onmsmanipulationstatechanged value);
		callback_for_onmsmanipulationstatechanged get_onmsmanipulationstatechanged();
		typedef Object* (*callback_for_onmsinertiastart)(Object* ev);
		void set_onmsinertiastart(callback_for_onmsinertiastart value);
		callback_for_onmsinertiastart get_onmsinertiastart();
		typedef Object* (*callback_for_onmspointerhover)(Object* ev);
		void set_onmspointerhover(callback_for_onmspointerhover value);
		callback_for_onmspointerhover get_onmspointerhover();
		typedef Object* (*callback_for_onmscontentzoom)(Object* ev);
		void set_onmscontentzoom(callback_for_onmscontentzoom value);
		callback_for_onmscontentzoom get_onmscontentzoom();
		typedef Object* (*callback_for_onmsgesturehold)(Object* ev);
		void set_onmsgesturehold(callback_for_onmsgesturehold value);
		callback_for_onmsgesturehold get_onmsgesturehold();
		typedef Object* (*callback_for_onmspointermove)(Object* ev);
		void set_onmspointermove(callback_for_onmspointermove value);
		callback_for_onmspointermove get_onmspointermove();
		typedef Object* (*callback_for_onmspointerover)(Object* ev);
		void set_onmspointerover(callback_for_onmspointerover value);
		callback_for_onmspointerover get_onmspointerover();
		typedef Object* (*callback_for_onmsgesturechange)(Object* ev);
		void set_onmsgesturechange(callback_for_onmsgesturechange value);
		callback_for_onmsgesturechange get_onmsgesturechange();
		typedef Object* (*callback_for_onmsgesturestart)(Object* ev);
		void set_onmsgesturestart(callback_for_onmsgesturestart value);
		callback_for_onmsgesturestart get_onmsgesturestart();
		typedef Object* (*callback_for_onmspointerup)(Object* ev);
		void set_onmspointerup(callback_for_onmspointerup value);
		callback_for_onmspointerup get_onmspointerup();
		static void set_prototype(MSHTMLDocumentExtensions* value);
		static MSHTMLDocumentExtensions* get_prototype();
		MSHTMLDocumentExtensions();
	};

	class MSCSSSelectionBoundaryProperties 
	{
	public:
		void set_msUserSelect(String* value);
		String* get_msUserSelect();
	};

	class SVGFilterPrimitiveStandardAttributes : SVGStylable 
	{
	public:
		void set_y(SVGAnimatedLength* value);
		SVGAnimatedLength* get_y();
		void set_width(SVGAnimatedLength* value);
		SVGAnimatedLength* get_width();
		void set_x(SVGAnimatedLength* value);
		SVGAnimatedLength* get_x();
		void set_height(SVGAnimatedLength* value);
		SVGAnimatedLength* get_height();
		void set_result(SVGAnimatedString* value);
		SVGAnimatedString* get_result();
	};

	class IDBVersionChangeEvent : Event 
	{
	public:
		void set_newVersion(double value);
		double get_newVersion();
		void set_oldVersion(double value);
		double get_oldVersion();
		static void set_prototype(IDBVersionChangeEvent* value);
		static IDBVersionChangeEvent* get_prototype();
		IDBVersionChangeEvent();
	};

	class IDBIndex 
	{
	public:
		void set_unique(bool value);
		bool get_unique();
		void set_name(String* value);
		String* get_name();
		void set_keyPath(String* value);
		String* get_keyPath();
		void set_objectStore(IDBObjectStore* value);
		IDBObjectStore* get_objectStore();
		IDBRequest* count();
		IDBRequest* count(Object* key);
		IDBRequest* getKey(Object* key);
		IDBRequest* openKeyCursor();
		IDBRequest* openKeyCursor(, IDBKeyRange* range);
		IDBRequest* openKeyCursor(IDBKeyRange* range, const String& direction);
		IDBRequest* get(Object* key);
		IDBRequest* openCursor();
		IDBRequest* openCursor(, IDBKeyRange* range);
		IDBRequest* openCursor(IDBKeyRange* range, const String& direction);
		static void set_prototype(IDBIndex* value);
		static IDBIndex* get_prototype();
		IDBIndex();
	};

	class FileList 
	{
	public:
		File* operator[](double index);
		void set_length(double value);
		double get_length();
		File* item(double index);
		static void set_prototype(FileList* value);
		static FileList* get_prototype();
		FileList();
	};

	class IDBCursor 
	{
	public:
		void set_source(Object* value);
		Object* get_source();
		void set_direction(String* value);
		String* get_direction();
		void set_key(Object* value);
		Object* get_key();
		void set_primaryKey(Object* value);
		Object* get_primaryKey();
		void advance(double count);
		IDBRequest* delet();
		void continu();
		void continu(Object* key);
		IDBRequest* update(Object* value);
		static void set_prototype(IDBCursor* value);
		static IDBCursor* get_prototype();
		IDBCursor();
	};

	class CSSAnimationsProperties 
	{
	public:
		void set_animationFillMode(String* value);
		String* get_animationFillMode();
		void set_msAnimationDirection(String* value);
		String* get_msAnimationDirection();
		void set_msAnimationDelay(String* value);
		String* get_msAnimationDelay();
		void set_msAnimationFillMode(String* value);
		String* get_msAnimationFillMode();
		void set_animationIterationCount(String* value);
		String* get_animationIterationCount();
		void set_msAnimationPlayState(String* value);
		String* get_msAnimationPlayState();
		void set_msAnimationIterationCount(String* value);
		String* get_msAnimationIterationCount();
		void set_animationDelay(String* value);
		String* get_animationDelay();
		void set_animationTimingFunction(String* value);
		String* get_animationTimingFunction();
		void set_msAnimation(String* value);
		String* get_msAnimation();
		void set_animation(String* value);
		String* get_animation();
		void set_animationDirection(String* value);
		String* get_animationDirection();
		void set_animationDuration(String* value);
		String* get_animationDuration();
		void set_animationName(String* value);
		String* get_animationName();
		void set_animationPlayState(String* value);
		String* get_animationPlayState();
		void set_msAnimationTimingFunction(String* value);
		String* get_msAnimationTimingFunction();
		void set_msAnimationName(String* value);
		String* get_msAnimationName();
		void set_msAnimationDuration(String* value);
		String* get_msAnimationDuration();
	};

	class SVGFESpecularLightingElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_kernelUnitLengthY(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_kernelUnitLengthY();
		void set_surfaceScale(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_surfaceScale();
		void set_specularExponent(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_specularExponent();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_kernelUnitLengthX(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_kernelUnitLengthX();
		void set_specularConstant(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_specularConstant();
		static void set_prototype(SVGFESpecularLightingElement* value);
		static SVGFESpecularLightingElement* get_prototype();
		SVGFESpecularLightingElement();
	};

	class File : Blob 
	{
	public:
		void set_lastModifiedDate(Object* value);
		Object* get_lastModifiedDate();
		void set_name(String* value);
		String* get_name();
		static void set_prototype(File* value);
		static File* get_prototype();
		File();
	};

	class URL 
	{
	public:
		void revokeObjectURL(const String& url);
		String* createObjectURL(Object* object);
		String* createObjectURL(Object* object, ObjectURLOptions* options);
	};
	extern URL* URL;

	class RangeException 
	{
	public:
		void set_name(String* value);
		String* get_name();
	};

	class IDBCursorWithValue : IDBCursor 
	{
	public:
		void set_value(Object* value);
		Object* get_value();
		static void set_prototype(IDBCursorWithValue* value);
		static IDBCursorWithValue* get_prototype();
		IDBCursorWithValue();
	};

	class HTMLTextAreaElement 
	{
	public:
		void set_validationMessage(String* value);
		String* get_validationMessage();
		void set_autofocus(bool value);
		bool get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_required(bool value);
		bool get_required();
		void set_maxLength(double value);
		double get_maxLength();
		void set_willValidate(bool value);
		bool get_willValidate();
		void set_placeholder(String* value);
		String* get_placeholder();
		bool checkValidity();
		void setCustomValidity(const String& error);
	};

	class XMLHttpRequestEventTarget : EventTarget 
	{
	public:
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onload)(Object* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_ontimeout)(Object* ev);
		void set_ontimeout(callback_for_ontimeout value);
		callback_for_ontimeout get_ontimeout();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		typedef Object* (*callback_for_onloadstart)(Object* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		typedef Object* (*callback_for_onloadend)(ProgressEvent* ev);
		void set_onloadend(callback_for_onloadend value);
		callback_for_onloadend get_onloadend();
		static void set_prototype(XMLHttpRequestEventTarget* value);
		static XMLHttpRequestEventTarget* get_prototype();
		XMLHttpRequestEventTarget();
	};

	class IDBEnvironment 
	{
	public:
		void set_msIndexedDB(IDBFactory* value);
		IDBFactory* get_msIndexedDB();
		void set_indexedDB(IDBFactory* value);
		IDBFactory* get_indexedDB();
	};

	class AudioTrackList : EventTarget 
	{
	public:
		AudioTrack* operator[](double index);
		void set_length(double value);
		double get_length();
		typedef Object* (*callback_for_onchange)(Object* ev);
		void set_onchange(callback_for_onchange value);
		callback_for_onchange get_onchange();
		typedef Object* (*callback_for_onaddtrack)(TrackEvent* ev);
		void set_onaddtrack(callback_for_onaddtrack value);
		callback_for_onaddtrack get_onaddtrack();
		AudioTrack* getTrackById(const String& id);
		AudioTrack* item(double index);
		static void set_prototype(AudioTrackList* value);
		static AudioTrackList* get_prototype();
		AudioTrackList();
	};

	class MSBaseReader : EventTarget 
	{
	public:
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		void set_readyState(double value);
		double get_readyState();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		typedef Object* (*callback_for_onloadend)(ProgressEvent* ev);
		void set_onloadend(callback_for_onloadend value);
		callback_for_onloadend get_onloadend();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onload)(Object* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onloadstart)(Object* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		void set_result(Object* value);
		Object* get_result();
		void abort();
		void set_LOADING(double value);
		double get_LOADING();
		void set_EMPTY(double value);
		double get_EMPTY();
		void set_DONE(double value);
		double get_DONE();
	};

	class History 
	{
	public:
		void set_state(Object* value);
		Object* get_state();
		void replaceState(Object* statedata, const String& title);
		void replaceState(Object* statedata, const String& title, const String& url);
		void pushState(Object* statedata, const String& title);
		void pushState(Object* statedata, const String& title, const String& url);
	};

	class MSProtocol 
	{
	public:
		void set_protocol(String* value);
		String* get_protocol();
		static void set_prototype(MSProtocol* value);
		static MSProtocol* get_prototype();
		MSProtocol();
	};

	class SVGFEMorphologyElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_operator(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_operator();
		void set_radiusX(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_radiusX();
		void set_radiusY(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_radiusY();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_SVG_MORPHOLOGY_OPERATOR_UNKNOWN(double value);
		double get_SVG_MORPHOLOGY_OPERATOR_UNKNOWN();
		void set_SVG_MORPHOLOGY_OPERATOR_ERODE(double value);
		double get_SVG_MORPHOLOGY_OPERATOR_ERODE();
		void set_SVG_MORPHOLOGY_OPERATOR_DILATE(double value);
		double get_SVG_MORPHOLOGY_OPERATOR_DILATE();
		static void set_prototype(SVGFEMorphologyElement* value);
		static SVGFEMorphologyElement* get_prototype();
		SVGFEMorphologyElement();
		static void set_SVG_MORPHOLOGY_OPERATOR_UNKNOWN(double value);
		static double get_SVG_MORPHOLOGY_OPERATOR_UNKNOWN();
		static void set_SVG_MORPHOLOGY_OPERATOR_ERODE(double value);
		static double get_SVG_MORPHOLOGY_OPERATOR_ERODE();
		static void set_SVG_MORPHOLOGY_OPERATOR_DILATE(double value);
		static double get_SVG_MORPHOLOGY_OPERATOR_DILATE();
	};

	class HTMLSelectElement 
	{
	public:
		void set_validationMessage(String* value);
		String* get_validationMessage();
		void set_autofocus(bool value);
		bool get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_required(bool value);
		bool get_required();
		void set_willValidate(bool value);
		bool get_willValidate();
		bool checkValidity();
		void setCustomValidity(const String& error);
	};

	class CSSTransitionsProperties 
	{
	public:
		void set_transition(String* value);
		String* get_transition();
		void set_transitionDelay(String* value);
		String* get_transitionDelay();
		void set_transitionDuration(String* value);
		String* get_transitionDuration();
		void set_msTransitionTimingFunction(String* value);
		String* get_msTransitionTimingFunction();
		void set_msTransition(String* value);
		String* get_msTransition();
		void set_msTransitionDuration(String* value);
		String* get_msTransitionDuration();
		void set_transitionTimingFunction(String* value);
		String* get_transitionTimingFunction();
		void set_msTransitionDelay(String* value);
		String* get_msTransitionDelay();
		void set_transitionProperty(String* value);
		String* get_transitionProperty();
		void set_msTransitionProperty(String* value);
		String* get_msTransitionProperty();
	};

	class SVGFEFuncRElement : SVGComponentTransferFunctionElement 
	{
	public:
		static void set_prototype(SVGFEFuncRElement* value);
		static SVGFEFuncRElement* get_prototype();
		SVGFEFuncRElement();
	};

	class CSSRule 
	{
	public:
		void set_KEYFRAMES_RULE(double value);
		double get_KEYFRAMES_RULE();
		void set_KEYFRAME_RULE(double value);
		double get_KEYFRAME_RULE();
		void set_VIEWPORT_RULE(double value);
		double get_VIEWPORT_RULE();
	};

	class WindowTimersExtension 
	{
	public:
		double msSetImmediate(Object* expression, Object** args);
		void clearImmediate(double handle);
		void msClearImmediate(double handle);
		double setImmediate(Object* expression, Object** args);
	};

	class SVGFEDisplacementMapElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_in2(SVGAnimatedString* value);
		SVGAnimatedString* get_in2();
		void set_xChannelSelector(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_xChannelSelector();
		void set_yChannelSelector(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_yChannelSelector();
		void set_scale(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_scale();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_SVG_CHANNEL_B(double value);
		double get_SVG_CHANNEL_B();
		void set_SVG_CHANNEL_R(double value);
		double get_SVG_CHANNEL_R();
		void set_SVG_CHANNEL_G(double value);
		double get_SVG_CHANNEL_G();
		void set_SVG_CHANNEL_UNKNOWN(double value);
		double get_SVG_CHANNEL_UNKNOWN();
		void set_SVG_CHANNEL_A(double value);
		double get_SVG_CHANNEL_A();
		static void set_prototype(SVGFEDisplacementMapElement* value);
		static SVGFEDisplacementMapElement* get_prototype();
		SVGFEDisplacementMapElement();
		static void set_SVG_CHANNEL_B(double value);
		static double get_SVG_CHANNEL_B();
		static void set_SVG_CHANNEL_R(double value);
		static double get_SVG_CHANNEL_R();
		static void set_SVG_CHANNEL_G(double value);
		static double get_SVG_CHANNEL_G();
		static void set_SVG_CHANNEL_UNKNOWN(double value);
		static double get_SVG_CHANNEL_UNKNOWN();
		static void set_SVG_CHANNEL_A(double value);
		static double get_SVG_CHANNEL_A();
	};

	class MSCSSContentZoomProperties 
	{
	public:
		void set_msContentZoomLimit(String* value);
		String* get_msContentZoomLimit();
		void set_msContentZooming(String* value);
		String* get_msContentZooming();
		void set_msContentZoomSnapType(String* value);
		String* get_msContentZoomSnapType();
		void set_msContentZoomLimitMax(Object* value);
		Object* get_msContentZoomLimitMax();
		void set_msContentZoomSnapPoints(String* value);
		String* get_msContentZoomSnapPoints();
		void set_msContentZoomSnap(String* value);
		String* get_msContentZoomSnap();
		void set_msContentZoomLimitMin(Object* value);
		Object* get_msContentZoomLimitMin();
		void set_msContentZoomChaining(String* value);
		String* get_msContentZoomChaining();
	};

	class AnimationEvent : Event 
	{
	public:
		void set_animationName(String* value);
		String* get_animationName();
		void set_elapsedTime(double value);
		double get_elapsedTime();
		void initAnimationEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, const String& animationNameArg, double elapsedTimeArg);
		static void set_prototype(AnimationEvent* value);
		static AnimationEvent* get_prototype();
		AnimationEvent();
	};

	class SVGComponentTransferFunctionElement : SVGElement 
	{
	public:
		void set_tableValues(SVGAnimatedNumberList* value);
		SVGAnimatedNumberList* get_tableValues();
		void set_slope(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_slope();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_exponent(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_exponent();
		void set_amplitude(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_amplitude();
		void set_intercept(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_intercept();
		void set_offset(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_offset();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_TABLE(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_TABLE();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE();
		void set_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR(double value);
		double get_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR();
		static void set_prototype(SVGComponentTransferFunctionElement* value);
		static SVGComponentTransferFunctionElement* get_prototype();
		SVGComponentTransferFunctionElement();
		static void set_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN(double value);
		static double get_SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN();
		static void set_SVG_FECOMPONENTTRANSFER_TYPE_TABLE(double value);
		static double get_SVG_FECOMPONENTTRANSFER_TYPE_TABLE();
		static void set_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY(double value);
		static double get_SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY();
		static void set_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA(double value);
		static double get_SVG_FECOMPONENTTRANSFER_TYPE_GAMMA();
		static void set_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE(double value);
		static double get_SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE();
		static void set_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR(double value);
		static double get_SVG_FECOMPONENTTRANSFER_TYPE_LINEAR();
	};

	class MSRangeCollection 
	{
	public:
		Range* operator[](double index);
		void set_length(double value);
		double get_length();
		Range* item(double index);
		static void set_prototype(MSRangeCollection* value);
		static MSRangeCollection* get_prototype();
		MSRangeCollection();
	};

	class MSHTMLElementExtensions 
	{
	public:
		typedef Object* (*callback_for_onmscontentzoom)(Object* ev);
		void set_onmscontentzoom(callback_for_onmscontentzoom value);
		callback_for_onmscontentzoom get_onmscontentzoom();
		typedef Object* (*callback_for_onmsmanipulationstatechanged)(Object* ev);
		void set_onmsmanipulationstatechanged(callback_for_onmsmanipulationstatechanged value);
		callback_for_onmsmanipulationstatechanged get_onmsmanipulationstatechanged();
		static void set_prototype(MSHTMLElementExtensions* value);
		static MSHTMLElementExtensions* get_prototype();
		MSHTMLElementExtensions();
	};

	class MSCSSPositionedFloatsProperties 
	{
	public:
		void set_msWrapMargin(Object* value);
		Object* get_msWrapMargin();
		void set_msWrapFlow(String* value);
		String* get_msWrapFlow();
	};

	class SVGException 
	{
	public:
		void set_name(String* value);
		String* get_name();
	};

	class SVGFEDistantLightElement : SVGElement 
	{
	public:
		void set_azimuth(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_azimuth();
		void set_elevation(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_elevation();
		static void set_prototype(SVGFEDistantLightElement* value);
		static SVGFEDistantLightElement* get_prototype();
		SVGFEDistantLightElement();
	};

	class MSCSSRegionProperties 
	{
	public:
		void set_msFlowFrom(String* value);
		String* get_msFlowFrom();
		void set_msFlowInto(String* value);
		String* get_msFlowInto();
		void set_msWrapThrough(String* value);
		String* get_msWrapThrough();
	};

	class SVGFEFuncBElement : SVGComponentTransferFunctionElement 
	{
	public:
		static void set_prototype(SVGFEFuncBElement* value);
		static SVGFEFuncBElement* get_prototype();
		SVGFEFuncBElement();
	};

	class IDBKeyRange 
	{
	public:
		void set_upper(Object* value);
		Object* get_upper();
		void set_upperOpen(bool value);
		bool get_upperOpen();
		void set_lower(Object* value);
		Object* get_lower();
		void set_lowerOpen(bool value);
		bool get_lowerOpen();
		IDBKeyRange* bound(Object* lower, Object* upper);
		IDBKeyRange* bound(Object* lower, Object* upper, bool lowerOpen);
		IDBKeyRange* bound(Object* lower, Object* upper, bool lowerOpen, bool upperOpen);
		IDBKeyRange* only(Object* value);
		IDBKeyRange* lowerBound(Object* bound);
		IDBKeyRange* lowerBound(Object* bound, bool open);
		IDBKeyRange* upperBound(Object* bound);
		IDBKeyRange* upperBound(Object* bound, bool open);
		static void set_prototype(IDBKeyRange* value);
		static IDBKeyRange* get_prototype();
		IDBKeyRange();
	};

	class WindowConsole 
	{
	public:
		void set_console(Console* value);
		Console* get_console();
	};

	class SVG1_1Properties 
	{
	public:
		void set_floodOpacity(String* value);
		String* get_floodOpacity();
		void set_floodColor(String* value);
		String* get_floodColor();
		void set_filter(String* value);
		String* get_filter();
		void set_lightingColor(String* value);
		String* get_lightingColor();
		void set_enableBackground(String* value);
		String* get_enableBackground();
		void set_colorInterpolationFilters(String* value);
		String* get_colorInterpolationFilters();
		static void set_prototype(SVG1_1Properties* value);
		static SVG1_1Properties* get_prototype();
		SVG1_1Properties();
	};

	class IDBTransaction : EventTarget 
	{
	public:
		typedef Object* (*callback_for_oncomplete)(Event* ev);
		void set_oncomplete(callback_for_oncomplete value);
		callback_for_oncomplete get_oncomplete();
		void set_db(IDBDatabase* value);
		IDBDatabase* get_db();
		void set_mode(String* value);
		String* get_mode();
		void set_error(DOMError* value);
		DOMError* get_error();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		void abort();
		IDBObjectStore* objectStore(const String& name);
		static void set_prototype(IDBTransaction* value);
		static IDBTransaction* get_prototype();
		IDBTransaction();
	};

	class MSWindowExtensions 
	{
	public:
		typedef Object* (*callback_for_onmspointerdown)(Object* ev);
		void set_onmspointerdown(callback_for_onmspointerdown value);
		callback_for_onmspointerdown get_onmspointerdown();
		typedef Object* (*callback_for_onmspointercancel)(Object* ev);
		void set_onmspointercancel(callback_for_onmspointercancel value);
		callback_for_onmspointercancel get_onmspointercancel();
		typedef Object* (*callback_for_onmsgesturedoubletap)(Object* ev);
		void set_onmsgesturedoubletap(callback_for_onmsgesturedoubletap value);
		callback_for_onmsgesturedoubletap get_onmsgesturedoubletap();
		typedef Object* (*callback_for_onmsgestureend)(Object* ev);
		void set_onmsgestureend(callback_for_onmsgestureend value);
		callback_for_onmsgestureend get_onmsgestureend();
		typedef Object* (*callback_for_onmsgesturetap)(Object* ev);
		void set_onmsgesturetap(callback_for_onmsgesturetap value);
		callback_for_onmsgesturetap get_onmsgesturetap();
		typedef Object* (*callback_for_onmspointerout)(Object* ev);
		void set_onmspointerout(callback_for_onmspointerout value);
		callback_for_onmspointerout get_onmspointerout();
		typedef Object* (*callback_for_onmspointerhover)(Object* ev);
		void set_onmspointerhover(callback_for_onmspointerhover value);
		callback_for_onmspointerhover get_onmspointerhover();
		typedef Object* (*callback_for_onmsinertiastart)(Object* ev);
		void set_onmsinertiastart(callback_for_onmsinertiastart value);
		callback_for_onmsinertiastart get_onmsinertiastart();
		typedef Object* (*callback_for_onmspointermove)(Object* ev);
		void set_onmspointermove(callback_for_onmspointermove value);
		callback_for_onmspointermove get_onmspointermove();
		typedef Object* (*callback_for_onmsgesturehold)(Object* ev);
		void set_onmsgesturehold(callback_for_onmsgesturehold value);
		callback_for_onmsgesturehold get_onmsgesturehold();
		typedef Object* (*callback_for_onmspointerover)(Object* ev);
		void set_onmspointerover(callback_for_onmspointerover value);
		callback_for_onmspointerover get_onmspointerover();
		typedef Object* (*callback_for_onmsgesturechange)(Object* ev);
		void set_onmsgesturechange(callback_for_onmsgesturechange value);
		callback_for_onmsgesturechange get_onmsgesturechange();
		typedef Object* (*callback_for_onmsgesturestart)(Object* ev);
		void set_onmsgesturestart(callback_for_onmsgesturestart value);
		callback_for_onmsgesturestart get_onmsgesturestart();
		typedef Object* (*callback_for_onmspointerup)(Object* ev);
		void set_onmspointerup(callback_for_onmspointerup value);
		callback_for_onmspointerup get_onmspointerup();
		bool msIsStaticHTML(const String& html);
		static void set_prototype(MSWindowExtensions* value);
		static MSWindowExtensions* get_prototype();
		MSWindowExtensions();
	};

	class AudioTrack 
	{
	public:
		void set_kind(String* value);
		String* get_kind();
		void set_language(String* value);
		String* get_language();
		void set_id(String* value);
		String* get_id();
		void set_label(String* value);
		String* get_label();
		void set_enabled(bool value);
		bool get_enabled();
		static void set_prototype(AudioTrack* value);
		static AudioTrack* get_prototype();
		AudioTrack();
	};

	class SVGFEConvolveMatrixElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_orderY(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_orderY();
		void set_kernelUnitLengthY(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_kernelUnitLengthY();
		void set_orderX(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_orderX();
		void set_preserveAlpha(SVGAnimatedBoolean* value);
		SVGAnimatedBoolean* get_preserveAlpha();
		void set_kernelMatrix(SVGAnimatedNumberList* value);
		SVGAnimatedNumberList* get_kernelMatrix();
		void set_edgeMode(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_edgeMode();
		void set_kernelUnitLengthX(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_kernelUnitLengthX();
		void set_bias(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_bias();
		void set_targetX(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_targetX();
		void set_targetY(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_targetY();
		void set_divisor(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_divisor();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_SVG_EDGEMODE_WRAP(double value);
		double get_SVG_EDGEMODE_WRAP();
		void set_SVG_EDGEMODE_DUPLICATE(double value);
		double get_SVG_EDGEMODE_DUPLICATE();
		void set_SVG_EDGEMODE_UNKNOWN(double value);
		double get_SVG_EDGEMODE_UNKNOWN();
		void set_SVG_EDGEMODE_NONE(double value);
		double get_SVG_EDGEMODE_NONE();
		static void set_prototype(SVGFEConvolveMatrixElement* value);
		static SVGFEConvolveMatrixElement* get_prototype();
		SVGFEConvolveMatrixElement();
		static void set_SVG_EDGEMODE_WRAP(double value);
		static double get_SVG_EDGEMODE_WRAP();
		static void set_SVG_EDGEMODE_DUPLICATE(double value);
		static double get_SVG_EDGEMODE_DUPLICATE();
		static void set_SVG_EDGEMODE_UNKNOWN(double value);
		static double get_SVG_EDGEMODE_UNKNOWN();
		static void set_SVG_EDGEMODE_NONE(double value);
		static double get_SVG_EDGEMODE_NONE();
	};

	class TextTrackCueList 
	{
	public:
		TextTrackCue* operator[](double index);
		void set_length(double value);
		double get_length();
		TextTrackCue* item(double index);
		TextTrackCue* getCueById(const String& id);
		static void set_prototype(TextTrackCueList* value);
		static TextTrackCueList* get_prototype();
		TextTrackCueList();
	};

	class CSSKeyframesRule : CSSRule 
	{
	public:
		void set_name(String* value);
		String* get_name();
		void set_cssRules(CSSRuleList* value);
		CSSRuleList* get_cssRules();
		CSSKeyframeRule* findRule(const String& rule);
		void deleteRule(const String& rule);
		void appendRule(const String& rule);
		static void set_prototype(CSSKeyframesRule* value);
		static CSSKeyframesRule* get_prototype();
		CSSKeyframesRule();
	};

	class MSCSSTouchManipulationProperties 
	{
	public:
		void set_msScrollSnapPointsY(String* value);
		String* get_msScrollSnapPointsY();
		void set_msOverflowStyle(String* value);
		String* get_msOverflowStyle();
		void set_msScrollLimitXMax(Object* value);
		Object* get_msScrollLimitXMax();
		void set_msScrollSnapType(String* value);
		String* get_msScrollSnapType();
		void set_msScrollSnapPointsX(String* value);
		String* get_msScrollSnapPointsX();
		void set_msScrollLimitYMax(Object* value);
		Object* get_msScrollLimitYMax();
		void set_msScrollSnapY(String* value);
		String* get_msScrollSnapY();
		void set_msScrollLimitXMin(Object* value);
		Object* get_msScrollLimitXMin();
		void set_msScrollLimitYMin(Object* value);
		Object* get_msScrollLimitYMin();
		void set_msScrollChaining(String* value);
		String* get_msScrollChaining();
		void set_msTouchAction(String* value);
		String* get_msTouchAction();
		void set_msScrollSnapX(String* value);
		String* get_msScrollSnapX();
		void set_msScrollLimit(String* value);
		String* get_msScrollLimit();
		void set_msScrollRails(String* value);
		String* get_msScrollRails();
		void set_msTouchSelect(String* value);
		String* get_msTouchSelect();
	};

	class Window : WindowAnimationTiming, WindowBase64, IDBEnvironment, WindowConsole 
	{
	public:
		typedef Object* (*callback_for_onpopstate)(PopStateEvent* ev);
		void set_onpopstate(callback_for_onpopstate value);
		callback_for_onpopstate get_onpopstate();
		void set_applicationCache(ApplicationCache* value);
		ApplicationCache* get_applicationCache();
		MediaQueryList* matchMedia(const String& mediaQuery);
		MediaQueryList* msMatchMedia(const String& mediaQuery);
	};

	class SVGFETurbulenceElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_baseFrequencyX(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_baseFrequencyX();
		void set_numOctaves(SVGAnimatedInteger* value);
		SVGAnimatedInteger* get_numOctaves();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_baseFrequencyY(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_baseFrequencyY();
		void set_stitchTiles(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_stitchTiles();
		void set_seed(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_seed();
		void set_SVG_STITCHTYPE_UNKNOWN(double value);
		double get_SVG_STITCHTYPE_UNKNOWN();
		void set_SVG_STITCHTYPE_NOSTITCH(double value);
		double get_SVG_STITCHTYPE_NOSTITCH();
		void set_SVG_TURBULENCE_TYPE_UNKNOWN(double value);
		double get_SVG_TURBULENCE_TYPE_UNKNOWN();
		void set_SVG_TURBULENCE_TYPE_TURBULENCE(double value);
		double get_SVG_TURBULENCE_TYPE_TURBULENCE();
		void set_SVG_TURBULENCE_TYPE_FRACTALNOISE(double value);
		double get_SVG_TURBULENCE_TYPE_FRACTALNOISE();
		void set_SVG_STITCHTYPE_STITCH(double value);
		double get_SVG_STITCHTYPE_STITCH();
		static void set_prototype(SVGFETurbulenceElement* value);
		static SVGFETurbulenceElement* get_prototype();
		SVGFETurbulenceElement();
		static void set_SVG_STITCHTYPE_UNKNOWN(double value);
		static double get_SVG_STITCHTYPE_UNKNOWN();
		static void set_SVG_STITCHTYPE_NOSTITCH(double value);
		static double get_SVG_STITCHTYPE_NOSTITCH();
		static void set_SVG_TURBULENCE_TYPE_UNKNOWN(double value);
		static double get_SVG_TURBULENCE_TYPE_UNKNOWN();
		static void set_SVG_TURBULENCE_TYPE_TURBULENCE(double value);
		static double get_SVG_TURBULENCE_TYPE_TURBULENCE();
		static void set_SVG_TURBULENCE_TYPE_FRACTALNOISE(double value);
		static double get_SVG_TURBULENCE_TYPE_FRACTALNOISE();
		static void set_SVG_STITCHTYPE_STITCH(double value);
		static double get_SVG_STITCHTYPE_STITCH();
	};

	class TextTrackList 
	{
	public:
		TextTrack* operator[](double index);
		void set_length(double value);
		double get_length();
		TextTrack* item(double index);
		static void set_prototype(TextTrackList* value);
		static TextTrackList* get_prototype();
		TextTrackList();
	};

	class WindowAnimationTiming 
	{
	public:
		void set_animationStartTime(double value);
		double get_animationStartTime();
		void set_msAnimationStartTime(double value);
		double get_msAnimationStartTime();
		void msCancelRequestAnimationFrame(double handle);
		void cancelAnimationFrame(double handle);
		double requestAnimationFrame(FrameRequestCallback* callback);
		double msRequestAnimationFrame(FrameRequestCallback* callback);
	};

	class SVGFEFuncGElement : SVGComponentTransferFunctionElement 
	{
	public:
		static void set_prototype(SVGFEFuncGElement* value);
		static SVGFEFuncGElement* get_prototype();
		SVGFEFuncGElement();
	};

	class SVGFEColorMatrixElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_type(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_type();
		void set_values(SVGAnimatedNumberList* value);
		SVGAnimatedNumberList* get_values();
		void set_SVG_FECOLORMATRIX_TYPE_SATURATE(double value);
		double get_SVG_FECOLORMATRIX_TYPE_SATURATE();
		void set_SVG_FECOLORMATRIX_TYPE_UNKNOWN(double value);
		double get_SVG_FECOLORMATRIX_TYPE_UNKNOWN();
		void set_SVG_FECOLORMATRIX_TYPE_MATRIX(double value);
		double get_SVG_FECOLORMATRIX_TYPE_MATRIX();
		void set_SVG_FECOLORMATRIX_TYPE_HUEROTATE(double value);
		double get_SVG_FECOLORMATRIX_TYPE_HUEROTATE();
		void set_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA(double value);
		double get_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA();
		static void set_prototype(SVGFEColorMatrixElement* value);
		static SVGFEColorMatrixElement* get_prototype();
		SVGFEColorMatrixElement();
		static void set_SVG_FECOLORMATRIX_TYPE_SATURATE(double value);
		static double get_SVG_FECOLORMATRIX_TYPE_SATURATE();
		static void set_SVG_FECOLORMATRIX_TYPE_UNKNOWN(double value);
		static double get_SVG_FECOLORMATRIX_TYPE_UNKNOWN();
		static void set_SVG_FECOLORMATRIX_TYPE_MATRIX(double value);
		static double get_SVG_FECOLORMATRIX_TYPE_MATRIX();
		static void set_SVG_FECOLORMATRIX_TYPE_HUEROTATE(double value);
		static double get_SVG_FECOLORMATRIX_TYPE_HUEROTATE();
		static void set_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA(double value);
		static double get_SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA();
	};

	class Console 
	{
	public:
		void info();
		void info(Object* message, Object** optionalParams);
		bool profile();
		bool profile(const String& reportName);
		void assert();
		void assert(bool test);
		void assert(bool test, Object* message, Object** optionalParams);
		bool msIsIndependentlyComposed(Element* element);
		bool clear();
		bool dir();
		bool dir(Object* value, Object** optionalParams);
		void warn();
		void warn(Object* message, Object** optionalParams);
		void error();
		void error(Object* message, Object** optionalParams);
		void log();
		void log(Object* message, Object** optionalParams);
		bool profileEnd();
		static void set_prototype(Console* value);
		static Console* get_prototype();
		Console();
	};

	class SVGFESpotLightElement : SVGElement 
	{
	public:
		void set_pointsAtY(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_pointsAtY();
		void set_y(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_y();
		void set_limitingConeAngle(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_limitingConeAngle();
		void set_specularExponent(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_specularExponent();
		void set_x(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_x();
		void set_pointsAtZ(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_pointsAtZ();
		void set_z(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_z();
		void set_pointsAtX(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_pointsAtX();
		static void set_prototype(SVGFESpotLightElement* value);
		static SVGFESpotLightElement* get_prototype();
		SVGFESpotLightElement();
	};

	class DocumentVisibility 
	{
	public:
		void set_msHidden(bool value);
		bool get_msHidden();
		void set_msVisibilityState(String* value);
		String* get_msVisibilityState();
		void set_visibilityState(String* value);
		String* get_visibilityState();
		void set_hidden(bool value);
		bool get_hidden();
	};

	class WindowBase64 
	{
	public:
		String* btoa(const String& rawString);
		String* atob(const String& encodedString);
	};

	class IDBDatabase : EventTarget 
	{
	public:
		void set_version(String* value);
		String* get_version();
		void set_name(String* value);
		String* get_name();
		void set_objectStoreNames(DOMStringList* value);
		DOMStringList* get_objectStoreNames();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		IDBObjectStore* createObjectStore(const String& name);
		IDBObjectStore* createObjectStore(const String& name, Object* optionalParameters);
		void close();
		IDBTransaction* transaction(Object* storeNames);
		IDBTransaction* transaction(Object* storeNames, const String& mode);
		void deleteObjectStore(const String& name);
		static void set_prototype(IDBDatabase* value);
		static IDBDatabase* get_prototype();
		IDBDatabase();
	};

	class MSProtocolsCollection 
	{
	public:
		static void set_prototype(MSProtocolsCollection* value);
		static MSProtocolsCollection* get_prototype();
		MSProtocolsCollection();
	};

	class DOMStringList 
	{
	public:
		String* operator[](double index);
		void set_length(double value);
		double get_length();
		bool contains(const String& str);
		String* item(double index);
		static void set_prototype(DOMStringList* value);
		static DOMStringList* get_prototype();
		DOMStringList();
	};

	class CSSMultiColumnProperties 
	{
	public:
		void set_breakAfter(String* value);
		String* get_breakAfter();
		void set_columnSpan(String* value);
		String* get_columnSpan();
		void set_columnRule(String* value);
		String* get_columnRule();
		void set_columnFill(String* value);
		String* get_columnFill();
		void set_columnRuleStyle(String* value);
		String* get_columnRuleStyle();
		void set_breakBefore(String* value);
		String* get_breakBefore();
		void set_columnCount(Object* value);
		Object* get_columnCount();
		void set_breakInside(String* value);
		String* get_breakInside();
		void set_columnWidth(Object* value);
		Object* get_columnWidth();
		void set_columns(String* value);
		String* get_columns();
		void set_columnRuleColor(Object* value);
		Object* get_columnRuleColor();
		void set_columnGap(Object* value);
		Object* get_columnGap();
		void set_columnRuleWidth(Object* value);
		Object* get_columnRuleWidth();
	};

	class IDBOpenDBRequest : IDBRequest 
	{
	public:
		typedef Object* (*callback_for_onupgradeneeded)(IDBVersionChangeEvent* ev);
		void set_onupgradeneeded(callback_for_onupgradeneeded value);
		callback_for_onupgradeneeded get_onupgradeneeded();
		typedef Object* (*callback_for_onblocked)(Event* ev);
		void set_onblocked(callback_for_onblocked value);
		callback_for_onblocked get_onblocked();
		static void set_prototype(IDBOpenDBRequest* value);
		static IDBOpenDBRequest* get_prototype();
		IDBOpenDBRequest();
	};

	class HTMLButtonElement 
	{
	public:
		void set_validationMessage(String* value);
		String* get_validationMessage();
		void set_formTarget(String* value);
		String* get_formTarget();
		void set_willValidate(bool value);
		bool get_willValidate();
		void set_formAction(String* value);
		String* get_formAction();
		void set_autofocus(bool value);
		bool get_autofocus();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_formNoValidate(String* value);
		String* get_formNoValidate();
		void set_formEnctype(String* value);
		String* get_formEnctype();
		void set_formMethod(String* value);
		String* get_formMethod();
		bool checkValidity();
		void setCustomValidity(const String& error);
	};

	class HTMLProgressElement : HTMLElement 
	{
	public:
		void set_value(double value);
		double get_value();
		void set_max(double value);
		double get_max();
		void set_position(double value);
		double get_position();
		void set_form(HTMLFormElement* value);
		HTMLFormElement* get_form();
		static void set_prototype(HTMLProgressElement* value);
		static HTMLProgressElement* get_prototype();
		HTMLProgressElement();
	};

	class SVGFEOffsetElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_dy(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_dy();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_dx(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_dx();
		static void set_prototype(SVGFEOffsetElement* value);
		static SVGFEOffsetElement* get_prototype();
		SVGFEOffsetElement();
	};

	class HTMLFormElement 
	{
	public:
		void set_autocomplete(String* value);
		String* get_autocomplete();
		void set_noValidate(bool value);
		bool get_noValidate();
		bool checkValidity();
	};

	class MSUnsafeFunctionCallback 
	{
	public:
		Object* operator()();
	};

	class Document : DocumentVisibility 
	{
	public:
	};

	class MessageEvent : Event 
	{
	public:
		void set_ports(Object* value);
		Object* get_ports();
	};

	class HTMLScriptElement 
	{
	public:
		void set_async(bool value);
		bool get_async();
	};

	class HTMLMediaElement : MSHTMLMediaElementExtensions 
	{
	public:
		void set_textTracks(TextTrackList* value);
		TextTrackList* get_textTracks();
		void set_audioTracks(AudioTrackList* value);
		AudioTrackList* get_audioTracks();
	};

	class TextTrack : EventTarget 
	{
	public:
		void set_language(String* value);
		String* get_language();
		void set_mode(double value);
		double get_mode();
		void set_readyState(String* value);
		String* get_readyState();
		void set_activeCues(TextTrackCueList* value);
		TextTrackCueList* get_activeCues();
		void set_cues(TextTrackCueList* value);
		TextTrackCueList* get_cues();
		typedef Object* (*callback_for_oncuechange)(Event* ev);
		void set_oncuechange(callback_for_oncuechange value);
		callback_for_oncuechange get_oncuechange();
		void set_kind(String* value);
		String* get_kind();
		typedef Object* (*callback_for_onload)(Object* ev);
		void set_onload(callback_for_onload value);
		callback_for_onload get_onload();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		void set_label(String* value);
		String* get_label();
		void set_ERROR(double value);
		double get_ERROR();
		void set_SHOWING(double value);
		double get_SHOWING();
		void set_LOADING(double value);
		double get_LOADING();
		void set_LOADED(double value);
		double get_LOADED();
		void set_NONE(double value);
		double get_NONE();
		void set_HIDDEN(double value);
		double get_HIDDEN();
		void set_DISABLED(double value);
		double get_DISABLED();
		static void set_prototype(TextTrack* value);
		static TextTrack* get_prototype();
		TextTrack();
		static void set_ERROR(double value);
		static double get_ERROR();
		static void set_SHOWING(double value);
		static double get_SHOWING();
		static void set_LOADING(double value);
		static double get_LOADING();
		static void set_LOADED(double value);
		static double get_LOADED();
		static void set_NONE(double value);
		static double get_NONE();
		static void set_HIDDEN(double value);
		static double get_HIDDEN();
		static void set_DISABLED(double value);
		static double get_DISABLED();
	};

	class MediaQueryListListener 
	{
	public:
		void operator()(MediaQueryList* mql);
	};

	class IDBRequest : EventTarget 
	{
	public:
		void set_source(Object* value);
		Object* get_source();
		typedef Object* (*callback_for_onsuccess)(Event* ev);
		void set_onsuccess(callback_for_onsuccess value);
		callback_for_onsuccess get_onsuccess();
		void set_error(DOMError* value);
		DOMError* get_error();
		void set_transaction(IDBTransaction* value);
		IDBTransaction* get_transaction();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		void set_readyState(String* value);
		String* get_readyState();
		void set_result(Object* value);
		Object* get_result();
		static void set_prototype(IDBRequest* value);
		static IDBRequest* get_prototype();
		IDBRequest();
	};

	class MessagePort : EventTarget 
	{
	public:
		typedef Object* (*callback_for_onmessage)(Object* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		void close();
		void postMessage(Object* message);
		void postMessage(Object* message, Object* ports);
		void start();
		static void set_prototype(MessagePort* value);
		static MessagePort* get_prototype();
		MessagePort();
	};

	class FileReader : MSBaseReader 
	{
	public:
		void set_error(DOMError* value);
		DOMError* get_error();
		void readAsArrayBuffer(Blob* blob);
		void readAsDataURL(Blob* blob);
		void readAsText(Blob* blob);
		void readAsText(Blob* blob, const String& encoding);
		static void set_prototype(FileReader* value);
		static FileReader* get_prototype();
		FileReader();
	};

	class Blob 
	{
	public:
		void set_type(String* value);
		String* get_type();
		void set_size(double value);
		double get_size();
		Object* msDetachStream();
		Blob* slice();
		Blob* slice(, double start);
		Blob* slice(, double start, );
		Blob* slice(double start, double end, const String& contentType);
		void close();
		void msClose();
	};

	class BlobPropertyBag 
	{
	public:
		void set_type(String* value);
		String* get_type();
		void set_endings(String* value);
		String* get_endings();
		static void set_prototype(Blob* value);
		static Blob* get_prototype();
		Blob();
		Blob(, Object** blobParts);
		Blob(Object** blobParts, BlobPropertyBag* options);
	};

	class ApplicationCache : EventTarget 
	{
	public:
		void set_status(double value);
		double get_status();
		typedef Object* (*callback_for_ondownloading)(Event* ev);
		void set_ondownloading(callback_for_ondownloading value);
		callback_for_ondownloading get_ondownloading();
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_onupdateready)(Event* ev);
		void set_onupdateready(callback_for_onupdateready value);
		callback_for_onupdateready get_onupdateready();
		typedef Object* (*callback_for_oncached)(Event* ev);
		void set_oncached(callback_for_oncached value);
		callback_for_oncached get_oncached();
		typedef Object* (*callback_for_onobsolete)(Event* ev);
		void set_onobsolete(callback_for_onobsolete value);
		callback_for_onobsolete get_onobsolete();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onchecking)(Event* ev);
		void set_onchecking(callback_for_onchecking value);
		callback_for_onchecking get_onchecking();
		typedef Object* (*callback_for_onnoupdate)(Event* ev);
		void set_onnoupdate(callback_for_onnoupdate value);
		callback_for_onnoupdate get_onnoupdate();
		void swapCache();
		void abort();
		void update();
		void set_CHECKING(double value);
		double get_CHECKING();
		void set_UNCACHED(double value);
		double get_UNCACHED();
		void set_UPDATEREADY(double value);
		double get_UPDATEREADY();
		void set_DOWNLOADING(double value);
		double get_DOWNLOADING();
		void set_IDLE(double value);
		double get_IDLE();
		void set_OBSOLETE(double value);
		double get_OBSOLETE();
		static void set_prototype(ApplicationCache* value);
		static ApplicationCache* get_prototype();
		ApplicationCache();
		static void set_CHECKING(double value);
		static double get_CHECKING();
		static void set_UNCACHED(double value);
		static double get_UNCACHED();
		static void set_UPDATEREADY(double value);
		static double get_UPDATEREADY();
		static void set_DOWNLOADING(double value);
		static double get_DOWNLOADING();
		static void set_IDLE(double value);
		static double get_IDLE();
		static void set_OBSOLETE(double value);
		static double get_OBSOLETE();
	};

	class MSHTMLVideoElementExtensions 
	{
	public:
		void set_msIsStereo3D(bool value);
		bool get_msIsStereo3D();
		void set_msStereo3DPackingMode(String* value);
		String* get_msStereo3DPackingMode();
		typedef Object* (*callback_for_onMSVideoOptimalLayoutChanged)(Object* ev);
		void set_onMSVideoOptimalLayoutChanged(callback_for_onMSVideoOptimalLayoutChanged value);
		callback_for_onMSVideoOptimalLayoutChanged get_onMSVideoOptimalLayoutChanged();
		typedef Object* (*callback_for_onMSVideoFrameStepCompleted)(Object* ev);
		void set_onMSVideoFrameStepCompleted(callback_for_onMSVideoFrameStepCompleted value);
		callback_for_onMSVideoFrameStepCompleted get_onMSVideoFrameStepCompleted();
		void set_msStereo3DRenderMode(String* value);
		String* get_msStereo3DRenderMode();
		void set_msIsLayoutOptimalForPlayback(bool value);
		bool get_msIsLayoutOptimalForPlayback();
		void set_msHorizontalMirror(bool value);
		bool get_msHorizontalMirror();
		typedef Object* (*callback_for_onMSVideoFormatChanged)(Object* ev);
		void set_onMSVideoFormatChanged(callback_for_onMSVideoFormatChanged value);
		callback_for_onMSVideoFormatChanged get_onMSVideoFormatChanged();
		void set_msZoom(bool value);
		bool get_msZoom();
		void msInsertVideoEffect(const String& activatableClassId, bool effectRequired);
		void msInsertVideoEffect(const String& activatableClassId, bool effectRequired, Object* config);
		void msSetVideoRectangle(double left, double top, double right, double bottom);
		void msFrameStep(bool forward);
	};

	class FrameRequestCallback 
	{
	public:
		void operator()(double time);
	};

	class CSS3DTransformsProperties 
	{
	public:
		void set_perspective(String* value);
		String* get_perspective();
		void set_msBackfaceVisibility(String* value);
		String* get_msBackfaceVisibility();
		void set_perspectiveOrigin(String* value);
		String* get_perspectiveOrigin();
		void set_transformStyle(String* value);
		String* get_transformStyle();
		void set_backfaceVisibility(String* value);
		String* get_backfaceVisibility();
		void set_msPerspectiveOrigin(String* value);
		String* get_msPerspectiveOrigin();
		void set_msTransformStyle(String* value);
		String* get_msTransformStyle();
		void set_msPerspective(String* value);
		String* get_msPerspective();
	};

	class XMLHttpRequest 
	{
	public:
		void set_withCredentials(bool value);
		bool get_withCredentials();
	};

	class PopStateEvent : Event 
	{
	public:
		void set_state(Object* value);
		Object* get_state();
		void initPopStateEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, Object* stateArg);
		static void set_prototype(PopStateEvent* value);
		static PopStateEvent* get_prototype();
		PopStateEvent();
	};

	class CSSKeyframeRule : CSSRule 
	{
	public:
		void set_keyText(String* value);
		String* get_keyText();
		void set_style(CSSStyleDeclaration* value);
		CSSStyleDeclaration* get_style();
		static void set_prototype(CSSKeyframeRule* value);
		static CSSKeyframeRule* get_prototype();
		CSSKeyframeRule();
	};

	class CSSGridProperties 
	{
	public:
		void set_msGridRows(String* value);
		String* get_msGridRows();
		void set_msGridColumnSpan(Object* value);
		Object* get_msGridColumnSpan();
		void set_msGridRow(Object* value);
		Object* get_msGridRow();
		void set_msGridRowSpan(Object* value);
		Object* get_msGridRowSpan();
		void set_msGridColumns(String* value);
		String* get_msGridColumns();
		void set_msGridColumnAlign(String* value);
		String* get_msGridColumnAlign();
		void set_msGridRowAlign(String* value);
		String* get_msGridRowAlign();
		void set_msGridColumn(Object* value);
		Object* get_msGridColumn();
	};

	class MSFileSaver 
	{
	public:
		bool msSaveBlob(Object* blob);
		bool msSaveBlob(Object* blob, const String& defaultName);
		bool msSaveOrOpenBlob(Object* blob);
		bool msSaveOrOpenBlob(Object* blob, const String& defaultName);
	};

	class MSStream 
	{
	public:
		void set_type(String* value);
		String* get_type();
		Object* msDetachStream();
		void msClose();
		static void set_prototype(MSStream* value);
		static MSStream* get_prototype();
		MSStream();
	};

	class MediaError : MSMediaErrorExtensions 
	{
	public:
	};

	class HTMLFieldSetElement 
	{
	public:
		void set_validationMessage(String* value);
		String* get_validationMessage();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_willValidate(bool value);
		bool get_willValidate();
		bool checkValidity();
		void setCustomValidity(const String& error);
	};

	class MSBlobBuilder 
	{
	public:
		void append(Object* data);
		void append(Object* data, const String& endings);
		Blob* getBlob();
		Blob* getBlob(const String& contentType);
		static void set_prototype(MSBlobBuilder* value);
		static MSBlobBuilder* get_prototype();
		MSBlobBuilder();
	};

	class MSRangeExtensions 
	{
	public:
		DocumentFragment* createContextualFragment(const String& fragment);
	};

	class HTMLElement 
	{
	public:
		typedef Object* (*callback_for_oncuechange)(Event* ev);
		void set_oncuechange(callback_for_oncuechange value);
		callback_for_oncuechange get_oncuechange();
		void set_spellcheck(bool value);
		bool get_spellcheck();
		void set_classList(DOMTokenList* value);
		DOMTokenList* get_classList();
		void set_draggable(bool value);
		bool get_draggable();
	};

	class DataTransfer 
	{
	public:
		void set_types(DOMStringList* value);
		DOMStringList* get_types();
		void set_files(FileList* value);
		FileList* get_files();
	};

	class DOMSettableTokenList : DOMTokenList 
	{
	public:
		void set_value(String* value);
		String* get_value();
		static void set_prototype(DOMSettableTokenList* value);
		static DOMSettableTokenList* get_prototype();
		DOMSettableTokenList();
	};

	class IDBFactory 
	{
	public:
		IDBOpenDBRequest* open(const String& name);
		IDBOpenDBRequest* open(const String& name, double version);
		double cmp(Object* first, Object* second);
		IDBOpenDBRequest* deleteDatabase(const String& name);
		static void set_prototype(IDBFactory* value);
		static IDBFactory* get_prototype();
		IDBFactory();
	};

	class Range : MSRangeExtensions 
	{
	public:
	};

	class HTMLObjectElement 
	{
	public:
		void set_validationMessage(String* value);
		String* get_validationMessage();
		void set_validity(ValidityState* value);
		ValidityState* get_validity();
		void set_willValidate(bool value);
		bool get_willValidate();
		bool checkValidity();
		void setCustomValidity(const String& error);
	};

	class MSPointerEvent : MouseEvent 
	{
	public:
		void set_width(double value);
		double get_width();
		void set_rotation(double value);
		double get_rotation();
		void set_pressure(double value);
		double get_pressure();
		void set_pointerType(double value);
		double get_pointerType();
		void set_isPrimary(bool value);
		bool get_isPrimary();
		void set_tiltY(double value);
		double get_tiltY();
		void set_height(double value);
		double get_height();
		void set_intermediatePoints(Object* value);
		Object* get_intermediatePoints();
		void set_currentPoint(Object* value);
		Object* get_currentPoint();
		void set_tiltX(double value);
		double get_tiltX();
		void set_hwTimestamp(double value);
		double get_hwTimestamp();
		void set_pointerId(double value);
		double get_pointerId();
		void initPointerEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, double screenXArg, double screenYArg, double clientXArg, double clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, double buttonArg, EventTarget* relatedTargetArg, double offsetXArg, double offsetYArg, double widthArg, double heightArg, double pressure, double rotation, double tiltX, double tiltY, double pointerIdArg, double pointerType, double hwTimestampArg, bool isPrimary);
		void getCurrentPoint(Element* element);
		void getIntermediatePoints(Element* element);
		void set_MSPOINTER_TYPE_PEN(double value);
		double get_MSPOINTER_TYPE_PEN();
		void set_MSPOINTER_TYPE_MOUSE(double value);
		double get_MSPOINTER_TYPE_MOUSE();
		void set_MSPOINTER_TYPE_TOUCH(double value);
		double get_MSPOINTER_TYPE_TOUCH();
		static void set_prototype(MSPointerEvent* value);
		static MSPointerEvent* get_prototype();
		MSPointerEvent();
		static void set_MSPOINTER_TYPE_PEN(double value);
		static double get_MSPOINTER_TYPE_PEN();
		static void set_MSPOINTER_TYPE_MOUSE(double value);
		static double get_MSPOINTER_TYPE_MOUSE();
		static void set_MSPOINTER_TYPE_TOUCH(double value);
		static double get_MSPOINTER_TYPE_TOUCH();
	};

	class CSSTextProperties 
	{
	public:
		void set_textShadow(String* value);
		String* get_textShadow();
		void set_msHyphenateLimitLines(Object* value);
		Object* get_msHyphenateLimitLines();
		void set_msHyphens(String* value);
		String* get_msHyphens();
		void set_msHyphenateLimitChars(String* value);
		String* get_msHyphenateLimitChars();
		void set_msHyphenateLimitZone(Object* value);
		Object* get_msHyphenateLimitZone();
	};

	class CSS2DTransformsProperties 
	{
	public:
		void set_transform(String* value);
		String* get_transform();
		void set_transformOrigin(String* value);
		String* get_transformOrigin();
	};

	class DOMException 
	{
	public:
		void set_name(String* value);
		String* get_name();
		void set_INVALID_NODE_TYPE_ERR(double value);
		double get_INVALID_NODE_TYPE_ERR();
		void set_DATA_CLONE_ERR(double value);
		double get_DATA_CLONE_ERR();
		void set_TIMEOUT_ERR(double value);
		double get_TIMEOUT_ERR();
	};

	class MSCSSHighContrastProperties 
	{
	public:
		void set_msHighContrastAdjust(String* value);
		String* get_msHighContrastAdjust();
	};

	class MSManipulationEvent : UIEvent 
	{
	public:
		void set_lastState(double value);
		double get_lastState();
		void set_currentState(double value);
		double get_currentState();
		void initMSManipulationEvent(const String& typeArg, bool canBubbleArg, bool cancelableArg, AbstractView* viewArg, double detailArg, double lastState, double currentState);
		void set_MS_MANIPULATION_STATE_STOPPED(double value);
		double get_MS_MANIPULATION_STATE_STOPPED();
		void set_MS_MANIPULATION_STATE_ACTIVE(double value);
		double get_MS_MANIPULATION_STATE_ACTIVE();
		void set_MS_MANIPULATION_STATE_INERTIA(double value);
		double get_MS_MANIPULATION_STATE_INERTIA();
		static void set_prototype(MSManipulationEvent* value);
		static MSManipulationEvent* get_prototype();
		MSManipulationEvent();
		static void set_MS_MANIPULATION_STATE_STOPPED(double value);
		static double get_MS_MANIPULATION_STATE_STOPPED();
		static void set_MS_MANIPULATION_STATE_ACTIVE(double value);
		static double get_MS_MANIPULATION_STATE_ACTIVE();
		static void set_MS_MANIPULATION_STATE_INERTIA(double value);
		static double get_MS_MANIPULATION_STATE_INERTIA();
	};

	class FormData 
	{
	public:
		void append(Object* name, Object* value);
		void append(Object* name, Object* value, const String& blobName);
		static void set_prototype(FormData* value);
		static FormData* get_prototype();
		FormData();
		FormData(HTMLFormElement* form);
	};

	class MSHTMLImageElementExtensions 
	{
	public:
		void set_msPlayToPrimary(bool value);
		bool get_msPlayToPrimary();
		void set_msPlayToDisabled(bool value);
		bool get_msPlayToDisabled();
		void set_msPlayToSource(Object* value);
		Object* get_msPlayToSource();
		static void set_prototype(MSHTMLImageElementExtensions* value);
		static MSHTMLImageElementExtensions* get_prototype();
		MSHTMLImageElementExtensions();
	};

	class MSHTMLMediaElementExtensions 
	{
	public:
		void set_msAudioCategory(String* value);
		String* get_msAudioCategory();
		void set_msRealTime(bool value);
		bool get_msRealTime();
		void set_msPlayToPrimary(bool value);
		bool get_msPlayToPrimary();
		void set_msPlayToDisabled(bool value);
		bool get_msPlayToDisabled();
		void set_msPlayToSource(Object* value);
		Object* get_msPlayToSource();
		void set_msAudioDeviceType(String* value);
		String* get_msAudioDeviceType();
		void msClearEffects();
		void msSetMediaProtectionManager();
		void msSetMediaProtectionManager(Object* mediaProtectionManager);
		void msInsertAudioEffect(const String& activatableClassId, bool effectRequired);
		void msInsertAudioEffect(const String& activatableClassId, bool effectRequired, Object* config);
	};

	class SVGFEImageElement : SVGElement, SVGLangSpace, SVGFilterPrimitiveStandardAttributes, SVGURIReference 
	{
	public:
		void set_preserveAspectRatio(SVGAnimatedPreserveAspectRatio* value);
		SVGAnimatedPreserveAspectRatio* get_preserveAspectRatio();
		static void set_prototype(SVGFEImageElement* value);
		static SVGFEImageElement* get_prototype();
		SVGFEImageElement();
	};

	class HTMLDataListElement : HTMLElement 
	{
	public:
		void set_options(HTMLCollection* value);
		HTMLCollection* get_options();
		static void set_prototype(HTMLDataListElement* value);
		static HTMLDataListElement* get_prototype();
		HTMLDataListElement();
	};

	class AbstractWorker : EventTarget 
	{
	public:
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
	};

	class SVGFECompositeElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_operator(SVGAnimatedEnumeration* value);
		SVGAnimatedEnumeration* get_operator();
		void set_in2(SVGAnimatedString* value);
		SVGAnimatedString* get_in2();
		void set_k2(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k2();
		void set_k1(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k1();
		void set_k3(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k3();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_k4(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_k4();
		void set_SVG_FECOMPOSITE_OPERATOR_OUT(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_OUT();
		void set_SVG_FECOMPOSITE_OPERATOR_OVER(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_OVER();
		void set_SVG_FECOMPOSITE_OPERATOR_XOR(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_XOR();
		void set_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC();
		void set_SVG_FECOMPOSITE_OPERATOR_UNKNOWN(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_UNKNOWN();
		void set_SVG_FECOMPOSITE_OPERATOR_IN(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_IN();
		void set_SVG_FECOMPOSITE_OPERATOR_ATOP(double value);
		double get_SVG_FECOMPOSITE_OPERATOR_ATOP();
		static void set_prototype(SVGFECompositeElement* value);
		static SVGFECompositeElement* get_prototype();
		SVGFECompositeElement();
		static void set_SVG_FECOMPOSITE_OPERATOR_OUT(double value);
		static double get_SVG_FECOMPOSITE_OPERATOR_OUT();
		static void set_SVG_FECOMPOSITE_OPERATOR_OVER(double value);
		static double get_SVG_FECOMPOSITE_OPERATOR_OVER();
		static void set_SVG_FECOMPOSITE_OPERATOR_XOR(double value);
		static double get_SVG_FECOMPOSITE_OPERATOR_XOR();
		static void set_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC(double value);
		static double get_SVG_FECOMPOSITE_OPERATOR_ARITHMETIC();
		static void set_SVG_FECOMPOSITE_OPERATOR_UNKNOWN(double value);
		static double get_SVG_FECOMPOSITE_OPERATOR_UNKNOWN();
		static void set_SVG_FECOMPOSITE_OPERATOR_IN(double value);
		static double get_SVG_FECOMPOSITE_OPERATOR_IN();
		static void set_SVG_FECOMPOSITE_OPERATOR_ATOP(double value);
		static double get_SVG_FECOMPOSITE_OPERATOR_ATOP();
	};

	class ValidityState 
	{
	public:
		void set_customError(bool value);
		bool get_customError();
		void set_valueMissing(bool value);
		bool get_valueMissing();
		void set_stepMismatch(bool value);
		bool get_stepMismatch();
		void set_rangeUnderflow(bool value);
		bool get_rangeUnderflow();
		void set_rangeOverflow(bool value);
		bool get_rangeOverflow();
		void set_typeMismatch(bool value);
		bool get_typeMismatch();
		void set_patternMismatch(bool value);
		bool get_patternMismatch();
		void set_tooLong(bool value);
		bool get_tooLong();
		void set_valid(bool value);
		bool get_valid();
		static void set_prototype(ValidityState* value);
		static ValidityState* get_prototype();
		ValidityState();
	};

	class HTMLVideoElement : MSHTMLVideoElementExtensions 
	{
	public:
	};

	class HTMLTrackElement : HTMLElement 
	{
	public:
		void set_kind(String* value);
		String* get_kind();
		void set_src(String* value);
		String* get_src();
		void set_srclang(String* value);
		String* get_srclang();
		void set_track(TextTrack* value);
		TextTrack* get_track();
		void set_label(String* value);
		String* get_label();
		void set_defaul(bool value);
		bool get_defaul();
		static void set_prototype(HTMLTrackElement* value);
		static HTMLTrackElement* get_prototype();
		HTMLTrackElement();
	};

	class MSApp 
	{
	public:
		File* createFileFromStorageFile(Object* storageFile);
		Blob* createBlobFromRandomAccessStream(const String& type, Object* seeker);
		MSStream* createStreamFromInputStream(const String& type, Object* inputStream);
		void terminateApp(Object* exceptionObject);
		Object* createDataPackage(Object* object);
		Object* execUnsafeLocalFunction(MSUnsafeFunctionCallback* unsafeFunction);
		Object* getHtmlPrintDocumentSource(Object* htmlDoc);
		Object* getHtmlPrintDocumentSource(Object* htmlDoc, const String& printTemplate);
		void addPublicLocalApplicationUri(const String& uri);
		Object* createDataPackageFromSelection();
	};
	extern MSApp* MSApp;

	class MSXMLHttpRequestExtensions 
	{
	public:
		void set_response(Object* value);
		Object* get_response();
		typedef Object* (*callback_for_onprogress)(ProgressEvent* ev);
		void set_onprogress(callback_for_onprogress value);
		callback_for_onprogress get_onprogress();
		typedef Object* (*callback_for_onabort)(Object* ev);
		void set_onabort(callback_for_onabort value);
		callback_for_onabort get_onabort();
		void set_responseType(String* value);
		String* get_responseType();
		typedef Object* (*callback_for_onloadend)(ProgressEvent* ev);
		void set_onloadend(callback_for_onloadend value);
		callback_for_onloadend get_onloadend();
		void set_upload(XMLHttpRequestEventTarget* value);
		XMLHttpRequestEventTarget* get_upload();
		typedef Object* (*callback_for_onerror)(ErrorEvent* ev);
		void set_onerror(callback_for_onerror value);
		callback_for_onerror get_onerror();
		typedef Object* (*callback_for_onloadstart)(Object* ev);
		void set_onloadstart(callback_for_onloadstart value);
		callback_for_onloadstart get_onloadstart();
		static void set_prototype(MSXMLHttpRequestExtensions* value);
		static MSXMLHttpRequestExtensions* get_prototype();
		MSXMLHttpRequestExtensions();
	};

	class SVGFEDiffuseLightingElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_kernelUnitLengthY(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_kernelUnitLengthY();
		void set_surfaceScale(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_surfaceScale();
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		void set_kernelUnitLengthX(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_kernelUnitLengthX();
		void set_diffuseConstant(SVGAnimatedNumber* value);
		SVGAnimatedNumber* get_diffuseConstant();
		static void set_prototype(SVGFEDiffuseLightingElement* value);
		static SVGFEDiffuseLightingElement* get_prototype();
		SVGFEDiffuseLightingElement();
	};

	class SVGFEComponentTransferElement : SVGElement, SVGFilterPrimitiveStandardAttributes 
	{
	public:
		void set_in1(SVGAnimatedString* value);
		SVGAnimatedString* get_in1();
		static void set_prototype(SVGFEComponentTransferElement* value);
		static SVGFEComponentTransferElement* get_prototype();
		SVGFEComponentTransferElement();
	};

	class MSCSSMatrix 
	{
	public:
		void set_m24(double value);
		double get_m24();
		void set_m34(double value);
		double get_m34();
		void set_a(double value);
		double get_a();
		void set_d(double value);
		double get_d();
		void set_m32(double value);
		double get_m32();
		void set_m41(double value);
		double get_m41();
		void set_m11(double value);
		double get_m11();
		void set_f(double value);
		double get_f();
		void set_e(double value);
		double get_e();
		void set_m23(double value);
		double get_m23();
		void set_m14(double value);
		double get_m14();
		void set_m33(double value);
		double get_m33();
		void set_m22(double value);
		double get_m22();
		void set_m21(double value);
		double get_m21();
		void set_c(double value);
		double get_c();
		void set_m12(double value);
		double get_m12();
		void set_b(double value);
		double get_b();
		void set_m42(double value);
		double get_m42();
		void set_m31(double value);
		double get_m31();
		void set_m43(double value);
		double get_m43();
		void set_m13(double value);
		double get_m13();
		void set_m44(double value);
		double get_m44();
		MSCSSMatrix* multiply(MSCSSMatrix* secondMatrix);
		MSCSSMatrix* skewY(double angle);
		void setMatrixValue(const String& value);
		MSCSSMatrix* inverse();
		MSCSSMatrix* rotateAxisAngle(double x, double y, double z, double angle);
		String* toString();
		MSCSSMatrix* rotate(double angleX);
		MSCSSMatrix* rotate(double angleX, double angleY);
		MSCSSMatrix* rotate(double angleX, double angleY, double angleZ);
		MSCSSMatrix* translate(double x, double y);
		MSCSSMatrix* translate(double x, double y, double z);
		MSCSSMatrix* scale(double scaleX);
		MSCSSMatrix* scale(double scaleX, double scaleY);
		MSCSSMatrix* scale(double scaleX, double scaleY, double scaleZ);
		MSCSSMatrix* skewX(double angle);
		static void set_prototype(MSCSSMatrix* value);
		static MSCSSMatrix* get_prototype();
		MSCSSMatrix();
		MSCSSMatrix(const String& text);
	};

	class Worker : AbstractWorker 
	{
	public:
		typedef Object* (*callback_for_onmessage)(Object* ev);
		void set_onmessage(callback_for_onmessage value);
		callback_for_onmessage get_onmessage();
		void postMessage(Object* message);
		void postMessage(Object* message, Object* ports);
		void terminate();
		static void set_prototype(Worker* value);
		static Worker* get_prototype();
		Worker(const String& stringUrl);
	};

	class HTMLIFrameElement 
	{
	public:
		void set_sandbox(DOMSettableTokenList* value);
		DOMSettableTokenList* get_sandbox();
	};

	class MSMediaErrorExtensions 
	{
	public:
		void set_msExtendedCode(double value);
		double get_msExtendedCode();
	};

	class MSNavigatorAbilities 
	{
	public:
		void set_msProtocols(MSProtocolsCollection* value);
		MSProtocolsCollection* get_msProtocols();
		void set_msMaxTouchPoints(double value);
		double get_msMaxTouchPoints();
		void set_msPointerEnabled(bool value);
		bool get_msPointerEnabled();
		void set_msManipulationViewsEnabled(bool value);
		bool get_msManipulationViewsEnabled();
		static void set_prototype(MSNavigatorAbilities* value);
		static MSNavigatorAbilities* get_prototype();
		MSNavigatorAbilities();
	};
	extern Object* (*onpopstate)(PopStateEvent* ev);
	extern ApplicationCache* applicationCache;
	extern MediaQueryList* matchMedia(const String& mediaQuery);
	extern MediaQueryList* msMatchMedia(const String& mediaQuery);
	extern double animationStartTime;
	extern double msAnimationStartTime;
	extern void msCancelRequestAnimationFrame(double handle);
	extern void cancelAnimationFrame(double handle);
	extern double requestAnimationFrame(FrameRequestCallback* callback);
	extern double msRequestAnimationFrame(FrameRequestCallback* callback);
	extern String* btoa(const String& rawString);
	extern String* atob(const String& encodedString);
	extern IDBFactory* msIndexedDB;
	extern IDBFactory* indexedDB;
	extern Console* console;
	extern void importScripts(String** urls);

} 
#endif
