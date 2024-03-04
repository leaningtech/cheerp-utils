//===-- jsexception.h - C++ Wrapper for JS exceptions --------------===//
//
//                     Cheerp: The C++ compiler for the Web
//
// This file is distributed under the Apache License v2.0 with LLVM Exceptions.
// See LICENSE.TXT for details.
//
// Copyright 2011-2023 Leaning Technologies
//
//===----------------------------------------------------------------------===//

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
