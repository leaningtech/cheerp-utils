/****************************************************************
 *
 * Copyright (C) 2022 Alessandro Pignotti <alessandro@leaningtech.com>
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

#ifndef _CHEERP_JSEXCEPTION
#define _CHEERP_JSEXCEPTION

#include "cheerp/jsobject.h"

#ifdef __cplusplus

namespace [[cheerp::genericjs]] cheerp
{

class JSException {
	client::Object* inner;
	public:
		JSException(client::Object* e): inner(e)
		{
		}
		client::Object* get()
		{
			return inner;
		}
};


} //End of namespace cheerp

#endif

#endif
