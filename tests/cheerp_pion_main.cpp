/****************************************************************
 *
 * Copyright (C) 2016 Alessandro Pignotti <alessandro@leaningtech.com>
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

#include <pion/net/HTTPServer.hpp>
#include <pion/net/HTTPRequest.hpp>
#include <pion/net/HTTPResponse.hpp>
#include <pion/net/HTTPResponseWriter.hpp>
#include <pion/PionAlgorithms.hpp>
#include <iostream>
#include <fstream>
#include <cheerp/connection.h>

using namespace pion::net;
using namespace std;

class PionConnection: public cheerp::Connection
{
public:
	boost::shared_ptr<pion::net::HTTPResponseWriter> writer;
	PionConnection(boost::shared_ptr<pion::net::HTTPResponseWriter> w):writer(w)
	{
	}
	void flush()
	{
		writer->write(buffer, offset);
		offset=0;
	}
	void send()
	{
		writer->send();
	}
};

namespace cheerp
{
	Connection* connection;
}

void requestHandler(HTTPRequestPtr request, TCPConnectionPtr conn);

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
	ifstream file(("."+fileName).c_str(), std::ios::in | std::ios::binary);
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

bool cheerpRequestHandler(const char* callName, const char* callArgs);

void requestHandler(HTTPRequestPtr request, TCPConnectionPtr conn)
{
	const string& callName=request->getQuery("f");
	const string& callArgs=pion::algo::url_decode(request->getQuery("a"));
	cheerp::connection =
		new PionConnection(HTTPResponseWriter::create(conn, *request, boost::bind(&TCPConnection::finish, conn)));
	bool validCall=cheerpRequestHandler(callName.c_str(), callArgs.c_str());
	if(!validCall)
	{
		cout << "Invalid call " << callName << endl;
		HTTPResponse response(*request);
		response.setStatusCode(404);
		boost::system::error_code error;
		response.send(*conn, error);
		conn->finish();
	}
}

int main()
{
	pion::PionSingleServiceScheduler sched;
	sched.setNumThreads(1);
	HTTPServerPtr server(new HTTPServer(sched,1987));
	server->addResource("/cheerp_call", requestHandler);
	server->addResource("/", fileRequestHandler);
	server->start();
	server->join();
}

