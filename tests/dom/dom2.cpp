#include <cheerp/client.h> //Misc client side stuff
#include <cheerp/clientlib.h> //Complete DOM/HTML5 interface
#include <string>

using namespace client;

void setupInputAndDisplay()
{
    client::HTMLElement * body = document.get_body();
    
    std::string original_text = "hello, world!";

    HTMLElement * textDisplay = document.createElement("h1");
    textDisplay->set_textContent(original_text.c_str());

    HTMLInputElement * inputBox = static_cast<HTMLInputElement*>(document.createElement("input") );
    inputBox->setAttribute("type", "text");
    inputBox->setAttribute("style", "width:200px");
    
    // This sets the default value
    inputBox->setAttribute("value", original_text.c_str() );

    inputBox->addEventListener("input", cheerp::Callback([textDisplay, inputBox]() -> void { 
        String * text = inputBox->get_value();
        textDisplay->set_textContent( text );

    }) );
    
    body->appendChild( textDisplay );
    body->appendChild( inputBox );
    
}

void webMain()
{
        document.addEventListener("DOMContentLoaded",cheerp::Callback(setupInputAndDisplay));
}
