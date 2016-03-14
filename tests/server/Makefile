SERVERLIBS = -lboost_system -lpion-net-4.0 -pthread -lpion-common-4.0 -lboost_thread -lssl -lcrypto -llog4cpp -lboost_filesystem
SERVEROBJS = cheerp_server_stub.o cheerp_pion_main.o deserializer.o

CXXFLAGS = -O2

all: server1 server2 server2-client.js server3 server3-client.js tictactoe tictactoe-client.js async_chat async_chat-client.js

cheerp_server_stub.o: /opt/cheerp/share/cheerp/cheerp_server_stub.cpp
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=server -c $^ -o $@

cheerp_pion_main.o: /opt/cheerp/share/cheerp/cheerp_pion_main.cpp
	g++ $(CXXFLAGS) -I /opt/cheerp/include/server/ -c $^ -o $@

deserializer.o: /opt/cheerp/share/cheerp/deserializer.cpp
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -D_GLIBCXX_USE_CXX11_ABI=0 -cheerp-side=server -c $^ -o $@

server1: server1.cpp $(SERVEROBJS)
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=server $^ -o $@ $(SERVERLIBS)

server2: server2.cpp $(SERVEROBJS)
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=server $^ -o $@ $(SERVERLIBS)

server2-client.js: server2.cpp
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=client -target cheerp $^ -o $@

server3: server3.cpp $(SERVEROBJS)
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=server $^ -o $@ $(SERVERLIBS)

server3-client.js: server3.cpp
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=client -target cheerp $^ -o $@

tictactoe: tictactoe.cpp $(SERVEROBJS)
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=server $^ -o $@ $(SERVERLIBS)

tictactoe-client.js: tictactoe.cpp
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=client -target cheerp $^ -o $@

async_chat: async_chat.cpp $(SERVEROBJS)
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -D_GLIBCXX_USE_CXX11_ABI=0 -cheerp-side=server $^ -o $@ $(SERVERLIBS)

async_chat-client.js: async_chat.cpp
	/opt/cheerp/bin/clang++ $(CXXFLAGS) -cheerp-side=client -target cheerp $^ -o $@
