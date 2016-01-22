/****************************************************************
 *
 * Copyright (C) 2014-2016 Alessandro Pignotti <alessandro@leaningtech.com>
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

#ifndef _CHEERP_PROMISE_H
#define _CHEERP_PROMISE_H

#include <functional>
#include <vector>

namespace cheerp
{

template<class T>
class PromiseTypes
{
public:
	typedef std::function<void(const T&)> callbackType;
};

template<>
class PromiseTypes<void>
{
public:
	typedef std::function<void()> callbackType;
};

// Helper classes for asynchronous RPCs
class PromiseBase
{
protected:
	bool fulfilled;
	bool completed;
	PromiseBase():fulfilled(false),completed(false)
	{
	}
};

template<class T>
class Promise;

template<class T>
class PromiseMid: public PromiseBase
{
protected:
	std::function<void(const T&)> callback;
private:
	T fulfillValue [[cheerp::noinit]];
public:
	~PromiseMid()
	{
		//Manually destroy the saved value if needed
		if(fulfilled)
			fulfillValue.~T();
	}
	void done(T&& t)
	{
		// If the promise is already complete, we can just invoke the callback
		// Otherwise we need to store the data for later use
		if(completed)
		{
			callback(t);
			delete this;
		}
		else
		{
			new (&fulfillValue) T(std::forward<T>(t));
			fulfilled = true;
		}
	}
	void done(const T& t)
	{
		if(completed)
		{
			callback(t);
			delete this;
		}
		else
		{
			new (&fulfillValue) T(t);
			fulfilled = true;
		}
	}
	/**
		Until the promise is completed the callbacks will not be triggered.
		This make it possible to assign the return value before the callbacks
		are assigned.
	*/
	void complete()
	{
		completed = true;
		// If the promise is already fulfilled we can call back directly
		if(fulfilled)
		{
			callback(fulfillValue);
			delete this;
		}
	}
};


template<>
class PromiseMid<void>: public PromiseBase
{
protected:
	std::function<void()> callback;
public:
	void done()
	{
		fulfilled = true;
		if(completed)
		{
			callback();
			delete this;
		}
	}
	void complete()
	{
		completed = true;
		if(fulfilled)
		{
			callback();
			delete this;
		}
	}
};

template<class T>
class Promise: public PromiseMid<T>
{
public:
	template<class F>
	void then(F&& f)
	{
		this->callback = std::forward<F>(f);
	}
};

};
#endif
