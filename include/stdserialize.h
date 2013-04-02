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

#ifndef STDSERIALIZE_H
#define STDSERIALIZE_H

namespace client
{
//TODO: does not work for emscripten limits
template<>
std::string deserialize<std::string>(const String& s) [[client]]
{
	String* tmp=static_cast<String*>(Client::get_JSON()->parse(s));
	std::string ret;
	for(int i=0;i<tmp->get_length();i++)
		ret.push_back(tmp->charCodeAt(i));
	return ret;
}

};

#endif
