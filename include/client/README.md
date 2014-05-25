Duetto: A C++ compiler for the Web {#mainpage}
=========

# Introduction
Duetto is a C++ compiler for the Web. As so it provides full access to all the capabilities provided by modern browsers. Duetto is not a framework, so it does not provide any high level construct such as widgets or abstraction layers. You are free to build such capabilities on top of the browser APIs exposed by Duetto.

This introductory page will show how to use Duetto to code a client-side application to run on the browser. When using any browser API with Duetto, you are directly accessing the implementation which provided by the browser. There is no implementation or abstraction layer inside Duetto.

# Hello World!

~~~~~~~~~~~~~{.cpp}
		#include <duetto/client.h> //Misc client side stuff
		#include <duetto/clientlib.h> //Complete DOM/HTML5 interface

		using namespace client;

		void webMain()
		{
				console.log("Hello World (Wide Web)!");
		}
~~~~~~~~~~~~~

To compile this code into JavaScript, just type:

~~~~~~~~~~~~~{.sh}
		/opt/duetto/bin/clang++ -O3 -target duetto HelloClient.cpp -o HelloClient.js
~~~~~~~~~~~~~

# The webMain entry point

In the example above you can see that, in Duetto, ```webMain``` is the entry point of your application. On the other hand traditional C++ applications starts in the ```main``` function, which is not only the entry point of the application, but actually contains the whole program execution, as the program terminates when main returns.

```webMain``` instead is only the entry point of the application, as your program will be executing after webMain returns. In ```webMain``` you should register callbacks for any event you might be interested on, then the browser will invoke the callbacks you registered when the relevant event happens.

If you are porting an existing application, be careful about any object allocated in your ```webMain``` function. Contrarily to the ones allocated in ```main``` they will not be alive for the whole life of the application, but will be destroyed when ```webMain``` terminates.

# Accessing the DOM

## The client namespace

Browser APIs are declared inside headers which are provided with Duetto, namely

~~~~~~~~~~~~~{.cpp}
		#include <duetto/client.h> //Misc client side stuff
		#include <duetto/clientlib.h> //Complete DOM/HTML5 interface
		#include <duetto/webgl.h> //WebGL interface
~~~~~~~~~~~~~

All classes, global variables and methods exposed by the browser are declared into the ```client`` namespace. 

~~~~~~~~~~~~~{.cpp}
		using namespace client;
~~~~~~~~~~~~~

## The document object

You can access the ```document``` global object directly from C++ code. In the next example we will add an event handler to run our code after the DOM is fully loaded.

~~~~~~~~~~~~~{.cpp}
		#include <duetto/client.h> //Misc client side stuff
		#include <duetto/clientlib.h> //Complete DOM/HTML5 interface

		using namespace client;

		void loadCallback()
		{
				HTMLElement* body=document.get_body();
				//Do something with the document body
		}

		void webMain()
		{
				document.addEventListener("DOMContentLoaded",Callback(loadCallback));
		}
~~~~~~~~~~~~~

## Manipulating the DOM

Duetto works at the same level as JavaScript. It is designed to complement or replace JavaScript as a programming language for the Web. It does not attempt at replacing other Web technologies such as HTML and CSS. When using Duetto you still have to design your page using HTML, CSS and the tools you already know.

If you want to manipulate the DOM at run-time you can use the same APIs you would use when writing JavaScript. In the following example we will create two DOM elements and set up event handling using the DOM APIs exposed by the browser.

~~~~~~~~~~~~~{.cpp}
		void setupInputAndDisplay()
		{
			//Retrieve the <body> element
			client::HTMLElement * body = document.get_body();

			//Prepare a string
			std::string original_text = "hello, world!";

			//Create a new <h1> element, and set it's content to the string
			HTMLElement * textDisplay = document.createElement("h1");
			textDisplay->set_textContent(original_text.c_str());

			//Create a text input element <input type="text">
			HTMLInputElement * inputBox = static_cast<HTMLInputElement*>(document.createElement("input") );
			inputBox->setAttribute("type", "text");

			//We can also style it here, but CSS would be better
			inputBox->setAttribute("style", "width:200px");

			//This sets the default value
			inputBox->setAttribute("value", original_text.c_str() );

			//Set up the handler for the input event. Use a C++11 lambda to capture the variables we need
			inputBox->addEventListener("input", Callback([textDisplay, inputBox]() -> void {

				//Update the <h1> element with whatever is written in the <input> element
				String * text = inputBox->get_value();
				textDisplay->set_textContent( text );
			}));

			//Add the new elements to the <body>
			body->appendChild( textDisplay );
			body->appendChild( inputBox );
		}
~~~~~~~~~~~~~

## Using DOM Strings

DOM/JS String can be used from Duetto through the ```client::String``` object. DOM Strings are immutable data types which are used to pass text to DOM APIs. Given that this is a browser-native implementation, it may be more efficient to manipulate text data using ```client::String``` than equivalent ```std::string``` or plain buffers of ```char```s.

```client::String``` has a constructor which accepts C-style ```const char*``` and can be used to create DOM Strings from C++ string literals or arrays of characters. This constructor will also be invoked implicitly whenever passing a ```const char*``` where a DOM String is expected

~~~~~~~~~~~~~{.cpp}
		//The following four lines or code are fully equivalent
		document.getElementById("testId");
		document.getElementById(client::String("testId"));
		document.getElementById(new client::String("testId"));
		document.getElementById(std::string("testId").c_str());
~~~~~~~~~~~~~

Conversion between different string types are computationally intensive and should be avoided where possible. We suggest manipulating Strings from DOM or XMLHttpRequest directly (i.e. no conversion) where possible. Since ```client::String``` is a native implementation, you may consider converting C strings to DOM String to benefit from the efficient implementations provided by the browser.

Converting from ```client::String``` to std::string is supported through an explicit conversion operator. This means that you need to explicitly tell the compiler you want a conversion to happen.

~~~~~~~~~~~~~{.cpp}
		void StdStringUser(const std::string& str);

		void DOMStringUser(const String* str)
		{
			//The next line is valid
			doSomethingWithString((std::string)*str);

			//The next line will raise an error, since the conversion is implicit
			doSomethingWithString(*str);
		}
~~~~~~~~~~~~~

## Loading data (XMLHttpRequest)

You can use ```client::XMLHttpRequest``` to load data using HTTP, both in synchronous and asynchronous mode.

~~~~~~~~~~~~~{.cpp}
		//Synchronous mode
		client::XMLHttpRequest* xhr=new client::XMLHttpRequest();
		xhr->open("GET","/someurl",false);
		xhr->send();
		String* response=xhr->get_responseText();

		//Asynchronous mode
		client::XMLHttpRequest* xhrA=new client::XMLHttpRequest();
		xhrA->open("GET","/someurl"/*,true*/);
		xhrA->addEventListener("load",Callback(asyncXHRLoaded));
		xhrA->send();
~~~~~~~~~~~~~

## Managing DOM types

DOM objects created using ```new```, such as the ```client::XMLHttpRequest``` objects in the example above or ```client::String``` objects, do not need to be freed using the C++ ```delete``` operator. Generally speaking you should consider all types which are provided by the browser as being managed by the browser itself through the garbage collection mechanism.

# Accessing the DOM, under the hood

Duetto provides access to the DOM using a simple convention on the way the APIs are declared. All the APIs are compiled to the corresponding function call inside the generated JavaScript code with no intermediate implementation.

The convention used by Duetto is to declare all the functionalities provided by the browser in the ```client``` namespace.

~~~~~~~~~~~~~{.cpp}
		namespace client
		{
			...
			// NOTE: This is an excerpt for documentation purpose
			class XMLHttpRequest: public EventTarget {
			public:
				double get_readyState();
				String* get_responseText();
				Document* get_responseXML();
				String* get_statusText();
				void open(const String& method, const String& url);
				void open(const String& method, const String& url, Boolean async);
				void open(const String& method, const String& url, Boolean async, const String& user);
				void open(const String& method, const String& url, Boolean async, const String& user, const String& password);
				void send();
				void send(Object* data);
				void abort();
				String* getAllResponseHeaders();
				void setRequestHeader(const String& header, const String& value);
				String* getResponseHeader(const String& header);
				int get_LOADING();
				int get_DONE();
				int get_UNSENT();
				int get_OPENED();
				int get_HEADERS_RECEIVED();
				XMLHttpRequest();
			};
			...
		}
~~~~~~~~~~~~~		

In the example above ```XMLHttpRequest``` is a class (or an interface) implemented by the browser. All the methods offered by the class are exposed using C++ member functions, all the variables are exposed as getters and setters, recognizable by the ```get_``` or ```set_``` prefix. Currently most of the Web APIs which are exposed in the ```clientlib.h``` header are automatically generated from TypeScript headers.
