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

#ifndef _DUETTO_CONNECTION_H
#define _DUETTO_CONNECTION_H

#include <pion/net/HTTPResponseWriter.hpp>
#include <pion/net/HTTPServer.hpp>

// This file contains the backend specific connection data
// Currently we assume pion
namespace duetto
{

class SerializationInterface
{
protected:
	enum { BUFFER_SIZE = 128 };
	char buffer[BUFFER_SIZE];
	uint32_t offset;
public:
	SerializationInterface():offset(0)
	{
	}
	virtual void flush() = 0;
	void write(const char* buf, uint32_t length)
	{
		while(length)
		{
			uint32_t cur = (length<(128-offset))?length:128-offset;
			memcpy(buffer+offset, buf, cur);
			buf+=cur;
			length-=cur;
			offset+=cur;
			if(length)
				flush();
		}
	}
};

class Connection: public SerializationInterface
{
public:
	boost::shared_ptr<pion::net::HTTPResponseWriter> writer;
	Connection(boost::shared_ptr<pion::net::HTTPResponseWriter> w):writer(w)
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

class Server
{
public:
	boost::shared_ptr<pion::net::HTTPServer> server;
	boost::asio::io_service& service;
	Server(boost::shared_ptr<pion::net::HTTPServer> _server, boost::asio::io_service& _service):
		server(_server),service(_service)
	{
	}
};

extern Connection* connection;

extern Server* server;

}

#endif
