SERVERLIBS = -lboost_system -lpion-net-4.0 -pthread -lpion-common-4.0 -lboost_thread -lssl -lcrypto -llog4cpp -lboost_filesystem
SERVEROBJS = server_stub.o deserializer.o

CXXFLAGS = -O2

all: server1 server2 server2-client.js server3 server3-client.js tictactoe tictactoe-client.js async_chat async_chat-client.js

server_stub.o: /opt/duetto/share/duetto/server_stub.cpp
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=server -c $^ -o $@

deserializer.o: /opt/duetto/share/duetto/deserializer.cpp
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=server -c $^ -o $@

server1: server1.cpp $(SERVEROBJS)
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=server $^ -o $@ $(SERVERLIBS)

server2: server2.cpp $(SERVEROBJS)
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=server $^ -o $@ $(SERVERLIBS)

server2-client.js: server2.cpp
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=client -target duetto $^ -o $@

server3: server3.cpp $(SERVEROBJS)
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=server $^ -o $@ $(SERVERLIBS)

server3-client.js: server3.cpp
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=client -target duetto $^ -o $@

tictactoe: tictactoe.cpp $(SERVEROBJS)
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=server $^ -o $@ $(SERVERLIBS)

tictactoe-client.js: tictactoe.cpp
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=client -target duetto $^ -o $@

async_chat: async_chat.cpp $(SERVEROBJS)
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=server $^ -o $@ $(SERVERLIBS)

async_chat-client.js: async_chat.cpp
	/opt/duetto/bin/clang++ $(CXXFLAGS) -duetto-side=client -target duetto $^ -o $@
