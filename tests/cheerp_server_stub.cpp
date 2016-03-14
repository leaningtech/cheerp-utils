/****************************************************************
 *
 * Copyright (C) 2012-2016 Alessandro Pignotti <alessandro@leaningtech.com>
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

#include <iostream>
#include <cheerp/promise.h>
#include <cheerp/connection.h>

using namespace std;

typedef cheerp::PromiseBase* (*entryPointSig)(cheerp::SerializationInterface* inData, const char* outData);

struct CheerpMap
{
	char* funcName;
	entryPointSig entryPoint;
};

extern CheerpMap cheerpFuncMap[];

// Do not use std::string in this interface, due to ABI incompatibilities between system libraries and the code we generate
bool cheerpRequestHandler(const char* callName, const char* callArgs)
{
	entryPointSig callFunc=NULL;
	for(CheerpMap* cur=cheerpFuncMap; cur->funcName!=NULL; cur++)
	{
		if(strcmp(callName,cur->funcName)==0)
		{
			cout << "Found " << cur->funcName << endl;
			callFunc=cur->entryPoint;
			break;
		}
	}
	if(callFunc==NULL)
		return false;
	//Send the data using the serialization interface
	cheerp::PromiseBase* promise=callFunc(cheerp::connection,callArgs);
	if(!promise)
	{
		cheerp::connection->flush();
		cheerp::connection->send();
	}
	return true;
}

