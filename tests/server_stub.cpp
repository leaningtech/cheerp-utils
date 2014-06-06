/****************************************************************
 *
 * Copyright (C) 2012-2014 Alessandro Pignotti <alessandro@leaningtech.com>
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

#define BOOST_NO_CXX11_NOEXCEPT
#define BOOST_ASIO_DISABLE_MOVE
#include <pion/net/HTTPServer.hpp>
#include <pion/net/HTTPRequest.hpp>
#include <pion/net/HTTPResponse.hpp>
#include <pion/PionAlgorithms.hpp>
#include <iostream>
#include <fstream>
#include <cheerp/server.h>
#include <cheerp/promise.h>
#include <cheerp/connection.h>

using namespace pion::net;
using namespace std;

namespace cheerp
{
	Connection* connection;
	Server* server;
}

typedef cheerp::PromiseBase* (*entryPointSig)(cheerp::SerializationInterface* inData, const char* outData);

struct CheerpMap
{
	char* funcName;
	entryPointSig entryPoint;
};

extern CheerpMap cheerpFuncMap[];

void requestHandler(HTTPRequestPtr request, TCPConnectionPtr conn)
{
	const string& callName=request->getQuery("f");
	const string& callArgs=pion::algo::url_decode(request->getQuery("a"));
	entryPointSig callFunc=NULL;
	for(CheerpMap* cur=cheerpFuncMap; cur->funcName!=NULL; cur++)
	{
		if(callName==cur->funcName)
		{
			cout << "Found " << cur->funcName << endl;
			callFunc=cur->entryPoint;
			break;
		}
	}
	if(callFunc==NULL)
	{
		cout << "Invalid call " << callName << endl;
		HTTPResponse response(*request);
		response.setStatusCode(404);
		boost::system::error_code error;
		response.send(*conn, error);
		conn->finish();
		return;
	}

	cheerp::connection =
		new cheerp::Connection(HTTPResponseWriter::create(conn, *request, boost::bind(&TCPConnection::finish, conn)));
	//Send the data using the serialization interface
	cheerp::PromiseBase* promise=callFunc(cheerp::connection,callArgs.c_str());
	if(!promise)
	{
		cheerp::connection->flush();
		cheerp::connection->send();
	}
}

void fileRequestHandler(HTTPRequestPtr request, TCPConnectionPtr conn)
{
	cout << "Requesting static file " << request->getResource() << "\n";
	HTTPResponse response(*request);
	boost::system::error_code error;
	const std::string fileName = request->getResource();
	//Avoid naive directory traversal attacks
	if(fileName.find("..")!=std::string::npos)
	{
		response.setStatusCode(404);
		response.send(*conn, error);
		conn->finish();
		return;
	}
	ifstream file("."+fileName, std::ios::in | std::ios::binary);
	if(!file.is_open())
	{
		response.setStatusCode(404);
		response.send(*conn, error);
	}
	else
	{
		size_t fileSize=file.seekg(0, ios_base::end).tellg();
		file.seekg(0, ios_base::beg);
		response.setStatusCode(200);
		response.setContentLength(fileSize);
		response.send(*conn, error);
		char buf[512];
		while(file.read(buf,512).gcount() > 0)
		  conn->write(boost::asio::buffer(buf, file.gcount()), error);
	}
	conn->finish();
}

int main()
{
	pion::PionSingleServiceScheduler sched;
	sched.setNumThreads(1);
	HTTPServerPtr server(new HTTPServer(sched,1987));
	cheerp::server = new cheerp::Server(server, sched.getIOService());
	server->addResource("/cheerp_call", requestHandler);
	server->addResource("/", fileRequestHandler);
	server->start();
	server->join();
}
