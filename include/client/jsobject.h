#ifndef CHEERP_JSOBJECT_H
#define CHEERP_JSOBJECT_H
#include "jshelper.h"
namespace [[cheerp::genericjs]] client {
	class Function;
	class String;
	class Symbol;
	template<class _T0>
	class TArray;
	template<class _T0>
	class ArrayLike;
	template<class _T0>
	class Iterable;
	template<class _T0>
	class ReadonlyArray;
	class PropertyDescriptor;
	class PropertyDescriptorMap;
	class [[cheerp::client_layout]] Object: public _Any {
	public:
		Function* get_constructor();
		void set_constructor(const _Function<void()>& constructor);
		void set_constructor(Function* constructor);
		String* toString();
		String* toLocaleString();
		Object* valueOf();
		bool hasOwnProperty(const String& v);
		bool hasOwnProperty(const _Union<double, Symbol*>& v);
		bool isPrototypeOf(Object* v);
		bool propertyIsEnumerable(const String& v);
		bool propertyIsEnumerable(const _Union<double, Symbol*>& v);
		template<class _T0, class _T1>
		static cheerp::EnableIf<cheerp::CanCast<_T0, Object*>, _T0> assign(_T0 target, _T1 source);
		template<class _T0, class _T1, class _T2>
		static cheerp::EnableIf<cheerp::CanCast<_T0, Object*>, _T0> assign(_T0 target, _T1 source1, _T2 source2);
		template<class _T0, class _T1, class _T2, class _T3>
		static cheerp::EnableIf<cheerp::CanCast<_T0, Object*>, _T0> assign(_T0 target, _T1 source1, _T2 source2, _T3 source3);
		template<class... _Args>
		[[gnu::always_inline]]
		static Object* assign(Object* target, _Args... sources) {
			return _assign(cheerp::clientCast(target), cheerp::clientCast(sources)...)->template cast<Object*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("assign"))]]
		static _Any* _assign(_Args... data);
	public:
		static TArray<Symbol*>* getOwnPropertySymbols(const _Any& o);
		static TArray<String*>* keys(Object* o);
		static bool is(const _Any& value1, const _Any& value2);
		static Object* setPrototypeOf(const _Any& o, Object* proto);
		template<class _T0>
		static TArray<_T0>* values(ArrayLike<_T0>* o);
		template<class _T0>
		static TArray<_T0>* values(const _Union<Object*, ArrayLike<_T0>*>& o);
		static TArray<_Any*>* values(Object* o);
		template<class _T0>
		static TArray<Object*>* entries(ArrayLike<_T0>* o);
		template<class _T0>
		static TArray<Object*>* entries(const _Union<Object*, ArrayLike<_T0>*>& o);
		static TArray<Object*>* entries(Object* o);
		static Object* getOwnPropertyDescriptors(const _Any& o);
		static Object* fromEntries(Iterable<Object*>* entries);
		static Object* fromEntries(Iterable<ReadonlyArray<_Any*>*>* entries);
		Object();
		Object(const _Any& value);
		static Object* prototype;
		static Object* getPrototypeOf(const _Any& o);
		static PropertyDescriptor* getOwnPropertyDescriptor(const _Any& o, const String& p);
		static PropertyDescriptor* getOwnPropertyDescriptor(const _Any& o, const _Union<double, Symbol*>& p);
		static TArray<String*>* getOwnPropertyNames(const _Any& o);
		static Object* create(Object* o);
		static Object* create(Object* o, PropertyDescriptorMap* properties);
		template<class _T0>
		static _T0 defineProperty(_T0 o, const String& p, PropertyDescriptor* attributes);
		template<class _T0>
		static _T0 defineProperty(_T0 o, const _Union<double, Symbol*>& p, PropertyDescriptor* attributes);
		template<class _T0>
		static _T0 defineProperties(_T0 o, PropertyDescriptorMap* properties);
		template<class _T0>
		static _T0 seal(_T0 o);
		template<class _T0>
		static cheerp::EnableIf<cheerp::CanCast<_T0, Function*>, _T0> freeze(_T0 f);
		static Object* freeze(Object* o);
		static Object* freeze(const _Any& o);
		template<class _T0>
		static _T0 preventExtensions(_T0 o);
		static bool isSealed(const _Any& o);
		static bool isFrozen(const _Any& o);
		static bool isExtensible(const _Any& o);
		void set_(const String& name, const Object* v);
		template<class T>
		void set_(const String& name, T v);
		Object* operator[](const String& name) const;
	};
}
#endif
