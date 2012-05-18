/****************************************************************
 *
 * Copyright (C) 2012 Alessandro Pignotti <alessandro@leaningtech.com>
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
#include <iostream>

using namespace pion::net;
using namespace std;

typedef void (*entryPointSig)(char*);

struct DuettoMap
{
	char* funcName;
	entryPointSig entryPoint;
};

extern DuettoMap duettoFuncMap[];
//extern char* duettoFuncMap;

void requestHandler(HTTPRequestPtr request, TCPConnectionPtr conn)
{
	const string& callName=request->getQuery("f");
	for(DuettoMap* cur=duettoFuncMap; cur->funcName!=NULL; cur++)
	{
		cout << cur->funcName << endl;
//		cout << duettoFuncMap[i] << endl;
	}

	HTTPResponse response(*request);
	response.setStatusCode(200);
	response.setContent("PUPPA");
	boost::system::error_code error;
	response.send(*conn, error);
	cout << "FINISH" << endl;
	conn->finish();
}

int main()
{
	HTTPServerPtr server(new HTTPServer(1987));  
	server->addResource("/", requestHandler);
	server->start();
	server->join();
}
