#ifndef _DUETTO_COMMON_H
#define _DUETTO_COMMON_H

#include <functional>
#include <vector>

namespace duetto
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
	std::function<void()> callback;
	bool fulfilled;
	bool completed;
	PromiseBase():fulfilled(false),completed(false)
	{
	}
	template<class T>
	typename PromiseTypes<T>::callbackType& getCastedCallback()
	{
		return (typename PromiseTypes<T>::callbackType&)PromiseBase::callback;
	}
};

template<class T>
class Promise;

template<class T>
class PromiseMid: public PromiseBase
{
private:
	T fulfillValue [[noinit]];
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
			getCastedCallback<T>()(std::forward<T>(t));
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
			getCastedCallback<T>()(t);
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
			getCastedCallback<T>()(fulfillValue);
			delete this;
		}
	}
};


template<>
class PromiseMid<void>: public PromiseBase
{
public:
	void done()
	{
		fulfilled = true;
		if(completed)
		{
			getCastedCallback<void>()();
			delete this;
		}
	}
	void complete()
	{
		completed = true;
		if(fulfilled)
		{
			getCastedCallback<void>()();
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
		PromiseBase::getCastedCallback<T>() = std::forward<F>(f);
	}
};

};
#endif
