#include <cheerp/promise.h>
#include <string>
#include <vector>

#ifdef __CHEERP_SERVER__
#include <cheerp/server.h>
#endif
#ifdef __CHEERP_CLIENT__
#include <cheerp/client.h>
#include <cheerp/clientlib.h>
#endif

using cheerp::Promise;
using namespace std;

// Pending requests for messages
vector<Promise<string>*> pendingRequests;

Promise<string>* getChatMessageRemote() [[cheerp::server]]
{
    auto ret=new Promise<std::string>();
    // Store the new promise, you can use it later to complete
    // the request in asynchronous manner
    pendingRequests.push_back(ret);
    return ret;
}

void sendMessageRemote(const string& str) [[cheerp::server]]
{
    for (auto p: pendingRequests)
        p->done(str);
    pendingRequests.clear();
}

void messageHandler(const string& newMessage) [[cheerp::client]]
{
    client::console.log("Message received ",newMessage.c_str());
}

void badMessageHandler(int newMessage) [[cheerp::client]];

void webMain() [[cheerp::client]]
{
    // First wait for messages
    auto promise = getChatMessageRemote();
    // Add a callback to the promise
    promise->then(messageHandler);
    // The next line would cause an error because the callback
    // do no accept a string as the only argument
    //promise->then(badMessageHandler);
    // Tell the promise that no more callbacks will be added
    promise->complete();
    // Now send a message, it will be echoed back
    sendMessageRemote("Test message");
}
