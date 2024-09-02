#ifndef CHEERP_TYPES_H
#define CHEERP_TYPES_H
#ifndef LEAN_CXX_LIB
#include <string>
#endif
#include "jsobject.h"
#include "jshelper.h"
namespace [[cheerp::genericjs]] client {
	class EventListener;
	template<class _T0>
	class IterableIterator;
	template<class _T0>
	class ConcatArray;
	class Array: public Object {
	public:
		Object* find(EventListener* predicate);
		Object* find(const _Function<_Union<bool, Object*>*(_Any*, double, TArray<_Any*>*)>& predicate);
		Object* find(EventListener* predicate, const _Any& thisArg);
		Object* find(const _Function<_Union<bool, Object*>*(_Any*, double, TArray<_Any*>*)>& predicate, const _Any& thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(const _Function<Object*(_Any*, double, TArray<_Any*>*)>& predicate);
		double findIndex(EventListener* predicate, const _Any& thisArg);
		double findIndex(const _Function<Object*(_Any*, double, TArray<_Any*>*)>& predicate, const _Any& thisArg);
		TArray<_Any*>* fill(const _Any& value);
		TArray<_Any*>* fill(const _Any& value, double start);
		TArray<_Any*>* fill(const _Any& value, double start, double end);
		TArray<_Any*>* copyWithin(double target, double start);
		TArray<_Any*>* copyWithin(double target, double start, double end);
		[[cheerp::interface_name(("[Symbol.iterator]"))]]
		IterableIterator<_Any*>* _91_Symbol_46_iterator_93_();
		IterableIterator<Object*>* entries();
		IterableIterator<double>* keys();
		IterableIterator<_Any*>* values();
		[[cheerp::interface_name(("get_[Symbol.unscopables]"))]]
		Object* get__91_Symbol_46_unscopables_93_();
		bool includes(const _Any& searchElement);
		bool includes(const _Any& searchElement, double fromIndex);
		template<class _T0>
		TArray<_T0>* flatMap(EventListener* callback);
		template<class _T0>
		TArray<_T0>* flatMap(const _Function<_Union<_T0, ReadonlyArray<_T0>*>*(_Any*, double, TArray<_Any*>*)>& callback);
		template<class _T0, class _T1 = _Any*>
		TArray<_T0>* flatMap(EventListener* callback, _T1 thisArg);
		template<class _T0, class _T1 = _Any*>
		TArray<_T0>* flatMap(const _Function<_Union<_T0, ReadonlyArray<_T0>*>*(_Any*, double, TArray<_Any*>*)>& callback, _T1 thisArg);
		TArray<Object*>* flat();
		TArray<Object*>* flat(double depth);
		int get_length() const;
		void set_length(double length);
		String* toString();
		String* toLocaleString();
		Object* pop();
		template<class... _Args>
		[[gnu::always_inline]]
		double push(_Args... items) {
			return _push(cheerp::clientCast(items)...)->template cast<double>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("push"))]]
		_Any* _push(_Args... data);
	public:
		template<class... _Args>
		[[gnu::always_inline]]
		_Union<cheerp::EnableIf<(cheerp::CanCastArgs<_Args, ConcatArray<_Any*>*> && ...), TArray<_Any*>*>, TArray<_Any*>*>* concat(_Args... items) const {
			return _concat(cheerp::clientCast(items)...)->template cast<TArray<_Any*>*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("concat"))]]
		_Any* _concat(_Args... data) const;
	public:
		String* join();
		String* join(const String& separator);
		TArray<_Any*>* reverse();
		Object* shift();
		TArray<_Any*>* slice();
		TArray<_Any*>* slice(double start);
		TArray<_Any*>* slice(double start, double end);
		TArray<_Any*>* sort();
		TArray<_Any*>* sort(EventListener* compareFn);
		TArray<_Any*>* sort(const _Function<double(_Any*, _Any*)>& compareFn);
		TArray<_Any*>* splice(double start);
		TArray<_Any*>* splice(double start, double deleteCount);
		template<class... _Args>
		[[gnu::always_inline]]
		TArray<_Any*>* splice(double start, double deleteCount, _Args... items) {
			return _splice(cheerp::clientCast(start), cheerp::clientCast(deleteCount), cheerp::clientCast(items)...)->template cast<TArray<_Any*>*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("splice"))]]
		_Any* _splice(_Args... data);
	public:
		template<class... _Args>
		[[gnu::always_inline]]
		double unshift(_Args... items) {
			return _unshift(cheerp::clientCast(items)...)->template cast<double>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("unshift"))]]
		_Any* _unshift(_Args... data);
	public:
		int indexOf(const _Any& searchElement) const;
		int indexOf(const _Any& searchElement, double fromIndex) const;
		int lastIndexOf(const _Any& searchElement) const;
		int lastIndexOf(const _Any& searchElement, double fromIndex) const;
		bool every(EventListener* predicate);
		bool every(const _Function<_Union<bool, Object*>*(_Any*, double, TArray<_Any*>*)>& predicate);
		bool every(EventListener* predicate, const _Any& thisArg);
		bool every(const _Function<_Union<bool, Object*>*(_Any*, double, TArray<_Any*>*)>& predicate, const _Any& thisArg);
		bool some(EventListener* predicate);
		bool some(const _Function<Object*(_Any*, double, TArray<_Any*>*)>& predicate);
		bool some(EventListener* predicate, const _Any& thisArg);
		bool some(const _Function<Object*(_Any*, double, TArray<_Any*>*)>& predicate, const _Any& thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(const _Function<void(_Any*, double, TArray<_Any*>*)>& callbackfn);
		void forEach(EventListener* callbackfn, const _Any& thisArg);
		void forEach(const _Function<void(_Any*, double, TArray<_Any*>*)>& callbackfn, const _Any& thisArg);
		template<class _T0>
		TArray<_T0>* map(EventListener* callbackfn);
		template<class _T0>
		TArray<_T0>* map(const _Function<_T0(_Any*, double, TArray<_Any*>*)>& callbackfn);
		template<class _T0>
		TArray<_T0>* map(EventListener* callbackfn, const _Any& thisArg);
		template<class _T0>
		TArray<_T0>* map(const _Function<_T0(_Any*, double, TArray<_Any*>*)>& callbackfn, const _Any& thisArg);
		TArray<_Any*>* filter(EventListener* predicate);
		TArray<_Any*>* filter(const _Function<_Union<bool, Object*>*(_Any*, double, TArray<_Any*>*)>& predicate);
		TArray<_Any*>* filter(EventListener* predicate, const _Any& thisArg);
		TArray<_Any*>* filter(const _Function<_Union<bool, Object*>*(_Any*, double, TArray<_Any*>*)>& predicate, const _Any& thisArg);
		Object* reduce(EventListener* callbackfn);
		Object* reduce(const _Function<_Any*(_Any*, _Any*, double, TArray<_Any*>*)>& callbackfn);
		Object* reduce(EventListener* callbackfn, const _Any& initialValue);
		Object* reduce(const _Function<_Any*(_Any*, _Any*, double, TArray<_Any*>*)>& callbackfn, const _Any& initialValue);
		template<class _T0>
		_T0 reduce(EventListener* callbackfn, _T0 initialValue);
		template<class _T0>
		_T0 reduce(const _Function<_T0(_T0, _Any*, double, TArray<_Any*>*)>& callbackfn, _T0 initialValue);
		Object* reduceRight(EventListener* callbackfn);
		Object* reduceRight(const _Function<_Any*(_Any*, _Any*, double, TArray<_Any*>*)>& callbackfn);
		Object* reduceRight(EventListener* callbackfn, const _Any& initialValue);
		Object* reduceRight(const _Function<_Any*(_Any*, _Any*, double, TArray<_Any*>*)>& callbackfn, const _Any& initialValue);
		template<class _T0>
		_T0 reduceRight(EventListener* callbackfn, _T0 initialValue);
		template<class _T0>
		_T0 reduceRight(const _Function<_T0(_T0, _Any*, double, TArray<_Any*>*)>& callbackfn, _T0 initialValue);
		Object* operator[](double n) const;
#ifndef LEAN_CXX_LIB
		Object*& operator[](double n) {
			return __builtin_cheerp_make_regular<Object*>(this, 0)[static_cast<int>(n)];
		}
#endif
		template<class _T0>
		static TArray<_T0>* from(ArrayLike<_T0>* arrayLike);
		template<class _T0, class _T1>
		static TArray<_T1>* from(ArrayLike<_T0>* arrayLike, EventListener* mapfn);
		template<class _T0, class _T1>
		static TArray<_T1>* from(ArrayLike<_T0>* arrayLike, const _Function<_T1(_T0, double)>& mapfn);
		template<class _T0, class _T1>
		static TArray<_T1>* from(ArrayLike<_T0>* arrayLike, EventListener* mapfn, const _Any& thisArg);
		template<class _T0, class _T1>
		static TArray<_T1>* from(ArrayLike<_T0>* arrayLike, const _Function<_T1(_T0, double)>& mapfn, const _Any& thisArg);
		template<class _T0>
		static TArray<_T0>* from(Iterable<_T0>* iterable);
		template<class _T0>
		static TArray<_T0>* from(const _Union<Iterable<_T0>*, ArrayLike<_T0>*>& iterable);
		template<class _T0, class _T1>
		static TArray<_T1>* from(Iterable<_T0>* iterable, EventListener* mapfn);
		template<class _T0, class _T1>
		static TArray<_T1>* from(const _Union<Iterable<_T0>*, ArrayLike<_T0>*>& iterable, EventListener* mapfn);
		template<class _T0, class _T1>
		static TArray<_T1>* from(Iterable<_T0>* iterable, const _Function<_T1(_T0, double)>& mapfn);
		template<class _T0, class _T1>
		static TArray<_T1>* from(const _Union<Iterable<_T0>*, ArrayLike<_T0>*>& iterable, const _Function<_T1(_T0, double)>& mapfn);
		template<class _T0, class _T1>
		static TArray<_T1>* from(Iterable<_T0>* iterable, EventListener* mapfn, const _Any& thisArg);
		template<class _T0, class _T1>
		static TArray<_T1>* from(const _Union<Iterable<_T0>*, ArrayLike<_T0>*>& iterable, EventListener* mapfn, const _Any& thisArg);
		template<class _T0, class _T1>
		static TArray<_T1>* from(Iterable<_T0>* iterable, const _Function<_T1(_T0, double)>& mapfn, const _Any& thisArg);
		template<class _T0, class _T1>
		static TArray<_T1>* from(const _Union<Iterable<_T0>*, ArrayLike<_T0>*>& iterable, const _Function<_T1(_T0, double)>& mapfn, const _Any& thisArg);
		template<class _T0, class... _Args>
		[[gnu::always_inline]]
		static cheerp::EnableIf<(cheerp::CanCastArgs<_Args, _T0> && ...), TArray<_T0>*> of(_Args... items) {
			return _of(cheerp::clientCast(items)...)->template cast<TArray<_T0>*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("of"))]]
		static _Any* _of(_Args... data);
	public:
		static _Any* _91_Symbol_46_species_93_;
		Array();
		Array(double arrayLength);
		template<class... _Args>
		Array(_Args... items);
		[[gnu::always_inline]]
		static Array* _New() {
			return new Array();
		}
		[[gnu::always_inline]]
		static Array* _New(double arrayLength) {
			return new Array(arrayLength);
		}
		template<class... _Args>
		[[gnu::always_inline]]
		static Array* _New(_Args... items) {
			return new Array(items...);
		}
		static bool isArray(const _Any& arg);
		static TArray<_Any*>* prototype;
	public:
		using client::Object::operator[];
	};
	template<class _T0 = _Any*>
	class TArray: public Array {
		static_assert(cheerp::CheckTemplate<_T0>);
	public:
		_T0 find(EventListener* predicate);
		_T0 find(const _Function<_Union<bool, Object*>*(_T0, double, TArray<_T0>*)>& predicate);
		_T0 find(EventListener* predicate, const _Any& thisArg);
		_T0 find(const _Function<_Union<bool, Object*>*(_T0, double, TArray<_T0>*)>& predicate, const _Any& thisArg);
		double findIndex(EventListener* predicate);
		double findIndex(const _Function<Object*(_T0, double, TArray<_T0>*)>& predicate);
		double findIndex(EventListener* predicate, const _Any& thisArg);
		double findIndex(const _Function<Object*(_T0, double, TArray<_T0>*)>& predicate, const _Any& thisArg);
		TArray<_T0>* fill(_T0 value);
		TArray<_T0>* fill(_T0 value, double start);
		TArray<_T0>* fill(_T0 value, double start, double end);
		TArray<_T0>* copyWithin(double target, double start);
		TArray<_T0>* copyWithin(double target, double start, double end);
		[[cheerp::interface_name(("[Symbol.iterator]"))]]
		IterableIterator<_T0>* _91_Symbol_46_iterator_93_();
		IterableIterator<Object*>* entries();
		IterableIterator<double>* keys();
		IterableIterator<_T0>* values();
		[[cheerp::interface_name(("get_[Symbol.unscopables]"))]]
		Object* get__91_Symbol_46_unscopables_93_();
		bool includes(_T0 searchElement);
		bool includes(_T0 searchElement, double fromIndex);
		template<class _T1>
		TArray<_T1>* flatMap(EventListener* callback);
		template<class _T1>
		TArray<_T1>* flatMap(const _Function<_Union<_T1, ReadonlyArray<_T1>*>*(_T0, double, TArray<_T0>*)>& callback);
		template<class _T1, class _T2 = _Any*>
		TArray<_T1>* flatMap(EventListener* callback, _T2 thisArg);
		template<class _T1, class _T2 = _Any*>
		TArray<_T1>* flatMap(const _Function<_Union<_T1, ReadonlyArray<_T1>*>*(_T0, double, TArray<_T0>*)>& callback, _T2 thisArg);
		TArray<Object*>* flat();
		TArray<Object*>* flat(double depth);
		int get_length() const;
		void set_length(double length);
		String* toString();
		String* toLocaleString();
		_T0 pop();
		template<class... _Args>
		[[gnu::always_inline]]
		cheerp::EnableIf<(cheerp::CanCastArgs<_Args, _T0> && ...), double> push(_Args... items) {
			return _push(cheerp::clientCast(items)...)->template cast<double>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("push"))]]
		_Any* _push(_Args... data);
	public:
		template<class... _Args>
		[[gnu::always_inline]]
		_Union<cheerp::EnableIf<(cheerp::CanCastArgs<_Args, ConcatArray<_T0>*> && ...), TArray<_T0>*>, TArray<_T0>*>* concat(_Args... items) const {
			return _concat(cheerp::clientCast(items)...)->template cast<TArray<_T0>*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("concat"))]]
		_Any* _concat(_Args... data) const;
	public:
		String* join();
		String* join(const String& separator);
		TArray<_T0>* reverse();
		_T0 shift();
		TArray<_T0>* slice();
		TArray<_T0>* slice(double start);
		TArray<_T0>* slice(double start, double end);
		TArray<_T0>* sort();
		TArray<_T0>* sort(EventListener* compareFn);
		TArray<_T0>* sort(const _Function<double(_T0, _T0)>& compareFn);
		TArray<_T0>* splice(double start);
		TArray<_T0>* splice(double start, double deleteCount);
		template<class... _Args>
		[[gnu::always_inline]]
		cheerp::EnableIf<(cheerp::CanCastArgs<_Args, _T0> && ...), TArray<_T0>*> splice(double start, double deleteCount, _Args... items) {
			return _splice(cheerp::clientCast(start), cheerp::clientCast(deleteCount), cheerp::clientCast(items)...)->template cast<TArray<_T0>*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("splice"))]]
		_Any* _splice(_Args... data);
	public:
		template<class... _Args>
		[[gnu::always_inline]]
		cheerp::EnableIf<(cheerp::CanCastArgs<_Args, _T0> && ...), double> unshift(_Args... items) {
			return _unshift(cheerp::clientCast(items)...)->template cast<double>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("unshift"))]]
		_Any* _unshift(_Args... data);
	public:
		int indexOf(_T0 searchElement) const;
		int indexOf(_T0 searchElement, double fromIndex) const;
		int lastIndexOf(_T0 searchElement) const;
		int lastIndexOf(_T0 searchElement, double fromIndex) const;
		bool every(EventListener* predicate);
		bool every(const _Function<_Union<bool, Object*>*(_T0, double, TArray<_T0>*)>& predicate);
		bool every(EventListener* predicate, const _Any& thisArg);
		bool every(const _Function<_Union<bool, Object*>*(_T0, double, TArray<_T0>*)>& predicate, const _Any& thisArg);
		bool some(EventListener* predicate);
		bool some(const _Function<Object*(_T0, double, TArray<_T0>*)>& predicate);
		bool some(EventListener* predicate, const _Any& thisArg);
		bool some(const _Function<Object*(_T0, double, TArray<_T0>*)>& predicate, const _Any& thisArg);
		void forEach(EventListener* callbackfn);
		void forEach(const _Function<void(_T0, double, TArray<_T0>*)>& callbackfn);
		void forEach(EventListener* callbackfn, const _Any& thisArg);
		void forEach(const _Function<void(_T0, double, TArray<_T0>*)>& callbackfn, const _Any& thisArg);
		template<class _T1>
		TArray<_T1>* map(EventListener* callbackfn);
		template<class _T1>
		TArray<_T1>* map(const _Function<_T1(_T0, double, TArray<_T0>*)>& callbackfn);
		template<class _T1>
		TArray<_T1>* map(EventListener* callbackfn, const _Any& thisArg);
		template<class _T1>
		TArray<_T1>* map(const _Function<_T1(_T0, double, TArray<_T0>*)>& callbackfn, const _Any& thisArg);
		TArray<_T0>* filter(EventListener* predicate);
		TArray<_T0>* filter(const _Function<_Union<bool, Object*>*(_T0, double, TArray<_T0>*)>& predicate);
		TArray<_T0>* filter(EventListener* predicate, const _Any& thisArg);
		TArray<_T0>* filter(const _Function<_Union<bool, Object*>*(_T0, double, TArray<_T0>*)>& predicate, const _Any& thisArg);
		_T0 reduce(EventListener* callbackfn);
		_T0 reduce(const _Function<_T0(_T0, _T0, double, TArray<_T0>*)>& callbackfn);
		_T0 reduce(EventListener* callbackfn, _T0 initialValue);
		_T0 reduce(const _Function<_T0(_T0, _T0, double, TArray<_T0>*)>& callbackfn, _T0 initialValue);
		template<class _T1>
		_T1 reduce(EventListener* callbackfn, _T1 initialValue);
		template<class _T1>
		_T1 reduce(const _Function<_T1(_T1, _T0, double, TArray<_T0>*)>& callbackfn, _T1 initialValue);
		_T0 reduceRight(EventListener* callbackfn);
		_T0 reduceRight(const _Function<_T0(_T0, _T0, double, TArray<_T0>*)>& callbackfn);
		_T0 reduceRight(EventListener* callbackfn, _T0 initialValue);
		_T0 reduceRight(const _Function<_T0(_T0, _T0, double, TArray<_T0>*)>& callbackfn, _T0 initialValue);
		template<class _T1>
		_T1 reduceRight(EventListener* callbackfn, _T1 initialValue);
		template<class _T1>
		_T1 reduceRight(const _Function<_T1(_T1, _T0, double, TArray<_T0>*)>& callbackfn, _T1 initialValue);
		_T0 operator[](double n) const;
#ifndef LEAN_CXX_LIB
		_T0& operator[](double n) {
			return __builtin_cheerp_make_regular<_T0>(this, 0)[static_cast<int>(n)];
		}
#endif
		template<class _T1>
		static TArray<_T1>* from(ArrayLike<_T1>* arrayLike);
		template<class _T1, class _T2>
		static TArray<_T2>* from(ArrayLike<_T1>* arrayLike, EventListener* mapfn);
		template<class _T1, class _T2>
		static TArray<_T2>* from(ArrayLike<_T1>* arrayLike, const _Function<_T2(_T1, double)>& mapfn);
		template<class _T1, class _T2>
		static TArray<_T2>* from(ArrayLike<_T1>* arrayLike, EventListener* mapfn, const _Any& thisArg);
		template<class _T1, class _T2>
		static TArray<_T2>* from(ArrayLike<_T1>* arrayLike, const _Function<_T2(_T1, double)>& mapfn, const _Any& thisArg);
		template<class _T1>
		static TArray<_T1>* from(Iterable<_T1>* iterable);
		template<class _T1>
		static TArray<_T1>* from(const _Union<Iterable<_T1>*, ArrayLike<_T1>*>& iterable);
		template<class _T1, class _T2>
		static TArray<_T2>* from(Iterable<_T1>* iterable, EventListener* mapfn);
		template<class _T1, class _T2>
		static TArray<_T2>* from(const _Union<Iterable<_T1>*, ArrayLike<_T1>*>& iterable, EventListener* mapfn);
		template<class _T1, class _T2>
		static TArray<_T2>* from(Iterable<_T1>* iterable, const _Function<_T2(_T1, double)>& mapfn);
		template<class _T1, class _T2>
		static TArray<_T2>* from(const _Union<Iterable<_T1>*, ArrayLike<_T1>*>& iterable, const _Function<_T2(_T1, double)>& mapfn);
		template<class _T1, class _T2>
		static TArray<_T2>* from(Iterable<_T1>* iterable, EventListener* mapfn, const _Any& thisArg);
		template<class _T1, class _T2>
		static TArray<_T2>* from(const _Union<Iterable<_T1>*, ArrayLike<_T1>*>& iterable, EventListener* mapfn, const _Any& thisArg);
		template<class _T1, class _T2>
		static TArray<_T2>* from(Iterable<_T1>* iterable, const _Function<_T2(_T1, double)>& mapfn, const _Any& thisArg);
		template<class _T1, class _T2>
		static TArray<_T2>* from(const _Union<Iterable<_T1>*, ArrayLike<_T1>*>& iterable, const _Function<_T2(_T1, double)>& mapfn, const _Any& thisArg);
		template<class _T1, class... _Args>
		[[gnu::always_inline]]
		static cheerp::EnableIf<(cheerp::CanCastArgs<_Args, _T1> && ...), TArray<_T1>*> of(_Args... items) {
			return _of(cheerp::clientCast(items)...)->template cast<TArray<_T1>*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("of"))]]
		static _Any* _of(_Args... data);
	public:
		static _Any* _91_Symbol_46_species_93_;
		TArray(): Array() {
		}
		TArray(double arrayLength): Array(arrayLength) {
		}
		template<class... _Args>
		TArray(_Args... items): Array(items...) {
		}
		[[gnu::always_inline]]
		static TArray* _New() {
			return new TArray();
		}
		[[gnu::always_inline]]
		static TArray* _New(double arrayLength) {
			return new TArray(arrayLength);
		}
		template<class... _Args>
		[[gnu::always_inline]]
		static TArray* _New(_Args... items) {
			return new TArray(items...);
		}
		static bool isArray(const _Any& arg);
		static TArray<_Any*>* prototype;
	public:
		using client::Array::operator[];
		using client::Object::operator[];
	};
	class Function: public Object {
	public:
		String* get_name();
		[[cheerp::interface_name(("[Symbol.hasInstance]"))]]
		bool _91_Symbol_46_hasInstance_93_(const _Any& value);
		Object* apply(const _Any& thisArg);
		Object* apply(const _Any& thisArg, const _Any& argArray);
		template<class... _Args>
		[[gnu::always_inline]]
		Object* call(const _Any& thisArg, _Args... argArray) {
			return _call(cheerp::clientCast(thisArg), cheerp::clientCast(argArray)...)->template cast<Object*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("call"))]]
		_Any* _call(_Args... data);
	public:
		template<class... _Args>
		[[gnu::always_inline]]
		Object* bind(const _Any& thisArg, _Args... argArray) {
			return _bind(cheerp::clientCast(thisArg), cheerp::clientCast(argArray)...)->template cast<Object*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("bind"))]]
		_Any* _bind(_Args... data);
	public:
		String* toString();
		Object* get_prototype();
		void set_prototype(const _Any& prototype);
		int get_length() const;
		Object* get_arguments();
		void set_arguments(const _Any& arguments);
		Function* get_caller();
		void set_caller(const _Function<void()>& caller);
		void set_caller(Function* caller);
		template<class... _Args>
		Function(_Args... args);
		template<class... _Args>
		[[gnu::always_inline]]
		static Function* _New(_Args... args) {
			return new Function(args...);
		}
		static Function* prototype;
	protected:
		[[cheerp::client_transparent]]
		Function(EventListener* listener) noexcept;
		[[cheerp::client_transparent]]
		Function(const EventListener* listener) noexcept;
	};
	class RegExpMatchArray;
	class RegExp;
	namespace Intl {
		class CollatorOptions;
	}
	class String: public Object {
	public:
		double codePointAt(double pos);
		bool includes(const String& searchString);
		bool includes(const String& searchString, double position);
		bool endsWith(const String& searchString);
		bool endsWith(const String& searchString, double endPosition);
		String* normalize(const String& form);
		String* normalize();
		String* repeat(double count);
		bool startsWith(const String& searchString) const;
		bool startsWith(const String& searchString, double position) const;
		String* anchor(const String& name);
		String* big();
		String* blink();
		String* bold();
		String* fixed();
		String* fontcolor(const String& color);
		String* fontsize(double size);
		String* fontsize(const String& size);
		String* italics();
		String* link(const String& url);
		String* small();
		String* strike();
		String* sub();
		String* sup();
		[[cheerp::interface_name(("[Symbol.iterator]"))]]
		IterableIterator<String*>* _91_Symbol_46_iterator_93_();
		RegExpMatchArray* match(Object* matcher);
		RegExpMatchArray* match(const String& regexp);
		RegExpMatchArray* match(RegExp* regexp);
		String* replace(Object* searchValue, const String& replaceValue) const;
		String* replace(Object* searchValue, EventListener* replacer) const;
		String* replace(Object* searchValue, const _Function<String*(String*, TArray<_Any*>*)>& replacer) const;
		String* replace(const String& searchValue, const String& replaceValue) const;
		String* replace(RegExp* searchValue, const String& replaceValue) const;
		String* replace(const String& searchValue, EventListener* replacer) const;
		String* replace(RegExp* searchValue, EventListener* replacer) const;
		String* replace(const String& searchValue, const _Function<String*(String*, TArray<_Any*>*)>& replacer) const;
		String* replace(RegExp* searchValue, const _Function<String*(String*, TArray<_Any*>*)>& replacer) const;
		double search(Object* searcher);
		double search(const String& regexp);
		double search(RegExp* regexp);
		TArray<String*>* split(Object* splitter) const;
		TArray<String*>* split(Object* splitter, double limit) const;
		TArray<String*>* split(const String& separator) const;
		TArray<String*>* split(RegExp* separator) const;
		TArray<String*>* split(const String& separator, double limit) const;
		TArray<String*>* split(RegExp* separator, double limit) const;
		String* padStart(double maxLength);
		String* padStart(double maxLength, const String& fillString);
		String* padEnd(double maxLength);
		String* padEnd(double maxLength, const String& fillString);
		String* trimEnd();
		String* trimStart();
		String* trimLeft();
		String* trimRight();
		IterableIterator<RegExpMatchArray*>* matchAll(RegExp* regexp);
		String* toString();
		String* charAt(double pos);
		int charCodeAt(double index) const;
		template<class... _Args>
		[[gnu::always_inline]]
		String* concat(_Args... strings) const {
			return _concat(cheerp::clientCast(strings)...)->template cast<String*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("concat"))]]
		_Any* _concat(_Args... data) const;
	public:
		int indexOf(const String& searchString) const;
		int indexOf(const String& searchString, double position) const;
		int lastIndexOf(const String& searchString) const;
		int lastIndexOf(const String& searchString, double position) const;
		double localeCompare(const String& that) const;
		double localeCompare(const String& that, const String& locales) const;
		double localeCompare(const String& that, TArray<String*>* locales) const;
		double localeCompare(const String& that, const String& locales, Intl::CollatorOptions* options) const;
		double localeCompare(const String& that, TArray<String*>* locales, Intl::CollatorOptions* options) const;
		String* slice();
		String* slice(double start);
		String* slice(double start, double end);
		String* substring(double start) const;
		String* substring(double start, double end) const;
		String* toLowerCase();
		String* toLocaleLowerCase();
		String* toLocaleLowerCase(const String& locales);
		String* toLocaleLowerCase(TArray<String*>* locales);
		String* toUpperCase();
		String* toLocaleUpperCase();
		String* toLocaleUpperCase(const String& locales);
		String* toLocaleUpperCase(TArray<String*>* locales);
		String* trim();
		int get_length() const;
		String* substr(double from) const;
		String* substr(double from, double length) const;
		String* valueOf();
		String* operator[](double index) const;
#ifndef LEAN_CXX_LIB
		String*& operator[](double index) {
			return __builtin_cheerp_make_regular<String*>(this, 0)[static_cast<int>(index)];
		}
#endif
		template<class... _Args>
		[[gnu::always_inline]]
		static cheerp::EnableIf<(cheerp::CanCastArgs<_Args, double> && ...), String*> fromCodePoint(_Args... codePoints) {
			return _fromCodePoint(cheerp::clientCast(codePoints)...)->template cast<String*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("fromCodePoint"))]]
		static _Any* _fromCodePoint(_Args... data);
	public:
		template<class... _Args>
		[[gnu::always_inline]]
		static String* raw(Object* template_, _Args... substitutions) {
			return _raw(cheerp::clientCast(template_), cheerp::clientCast(substitutions)...)->template cast<String*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("raw"))]]
		static _Any* _raw(_Args... data);
	public:
		String();
		explicit String(const _Any& value);
		[[gnu::always_inline]]
		static String* _New() {
			return new String();
		}
		[[gnu::always_inline]]
		static String* _New(const _Any& value) {
			return new String(value);
		}
		static String* prototype;
		template<class... _Args>
		[[gnu::always_inline]]
		static cheerp::EnableIf<(cheerp::CanCastArgs<_Args, double> && ...), String*> fromCharCode(_Args... codes) {
			return _fromCharCode(cheerp::clientCast(codes)...)->template cast<String*>();
		}
	private:
		template<class... _Args>
		[[cheerp::interface_name(("fromCharCode"))]]
		static _Any* _fromCharCode(_Args... data);
	public:
		[[cheerp::client_transparent]]
		String(const String* x) noexcept;
		[[cheerp::client_transparent]]
		String(const String& x) noexcept;
		String(long x) noexcept;
		String(unsigned long x) noexcept;
		String(int x) noexcept;
		String(unsigned int x) noexcept;
		String(double x) noexcept;
		[[gnu::always_inline]]
		static String* fromUtf8(const char* in, unsigned long len = 4294967295) {
			client::String* out = new client::String();
			unsigned int cp;
			for (unsigned long i = 0; i < len && in[i];) {
				unsigned char ch = in[i++];
				cp =
					ch < 0x80 ? ch :
					ch < 0xc0 ? cp << 6 | (ch & 0x3f) :
					ch < 0xe0 ? ch & 0x1f :
					ch < 0xf0 ? ch & 0x0f : ch & 0x07;
				if (i == len || (in[i] & 0xc0) != 0x80) {
					if (cp <= 0xffff) {
						out = out->concat(fromCharCode(cp));
					} else {
						out = out->concat(fromCharCode((cp - 0x10000) >> 10 | 0xd800));
						out = out->concat(fromCharCode((cp & 0x3ff) | 0xdc00));
					}
				}
			}
			return out;
		}
		[[gnu::always_inline]]
		static String* fromWide(const wchar_t* in, unsigned long len = 4294967295) {
			client::String* out = new client::String();
			for (unsigned long i = 0; i < len && in[i]; i++) {
				out = out->concat(fromCharCode(in[i]));
			}
			return out;
		}
#ifndef LEAN_CXX_LIB
		std::string toUtf8() const {
			std::string out;
			unsigned long len = get_length();
			unsigned int cp;
			for (unsigned long i = 0; i < len;) {
				unsigned int ch = charCodeAt(i++);
				cp =
					ch < 0xd800 || ch > 0xdfff ? ch :
					ch < 0xdc00 ? (ch & 0x3ff) << 10 : (cp | (ch & 0x3ff)) + 0x10000;
				if (i == len || (ch & 0xdc00) != 0xd800) {
					if (cp <= 0x7f) {
						out.push_back(cp);
					} else if (cp <= 0x7ff) {
						out.push_back(0xc0 | cp >> 6);
						out.push_back(0x80 | (cp & 0x3f));
					} else if (cp <= 0xffff) {
						out.push_back(0xe0 | cp >> 12);
						out.push_back(0x80 | (cp >> 6 & 0x3f));
						out.push_back(0x80 | (cp & 0x3f));
					} else {
						out.push_back(0xf0 | cp >> 18);
						out.push_back(0x80 | (cp >> 12 & 0x3f));
						out.push_back(0x80 | (cp >> 6 & 0x3f));
						out.push_back(0x80 | (cp & 0x3f));
					}
				}
			}
			return out;
		}
#endif
		String(const char* x): String(fromUtf8(x)) {
		}
		String(const wchar_t* x): String(fromWide(x)) {
		}
#ifndef LEAN_CXX_LIB
		explicit operator std::string() const {
			return this->toUtf8();
		}
#endif
	public:
		using client::Object::operator[];
	};
	class MapConstructor;
	template<class _T0 = _Any*, class _T1 = _Any*>
	class Map: public Object {
		static_assert(cheerp::CheckTemplate<_T0, _T1>);
	public:
		void clear();
		[[cheerp::interface_name(("delete"))]]
		bool delete_(_T0 key);
		void forEach(EventListener* callbackfn);
		void forEach(const _Function<void(_T1, _T0, Map<_T0, _T1>*)>& callbackfn);
		void forEach(EventListener* callbackfn, const _Any& thisArg);
		void forEach(const _Function<void(_T1, _T0, Map<_T0, _T1>*)>& callbackfn, const _Any& thisArg);
		_T1 get(_T0 key);
		bool has(_T0 key);
		Map<_T0, _T1>* set(_T0 key, _T1 value);
		int get_size() const;
		[[cheerp::interface_name(("[Symbol.iterator]"))]]
		IterableIterator<Object*>* _91_Symbol_46_iterator_93_();
		IterableIterator<Object*>* entries();
		IterableIterator<_T0>* keys();
		IterableIterator<_T1>* values();
		[[cheerp::interface_name(("get_[Symbol.toStringTag]"))]]
		String* get__91_Symbol_46_toStringTag_93_();
		Map();
		Map(ReadonlyArray<Object*>* entries);
		Map(Iterable<Object*>* iterable);
		[[gnu::always_inline]]
		static Map* _New() {
			return new Map();
		}
		[[gnu::always_inline]]
		static Map* _New(ReadonlyArray<Object*>* entries) {
			return new Map(entries);
		}
		[[gnu::always_inline]]
		static Map* _New(Iterable<Object*>* iterable) {
			return new Map(iterable);
		}
		static Map<_Any*, _Any*>* prototype;
		static MapConstructor* _91_Symbol_46_species_93_;
	};
	class RegExpMatchArray: public TArray<String*> {
	public:
		Object* get_groups();
		void set_groups(Object* groups);
		double get_index();
		void set_index(double index);
		String* get_input();
		void set_input(const String& input);
		[[cheerp::interface_name(("get_0"))]]
		String* get__48_();
		[[cheerp::interface_name(("set_0"))]]
		void set__48_(const String& _48_);
	};
	namespace Intl {
		class Locale;
		class NumberFormatOptions;
	}
	class Number: public Object {
	public:
		String* toLocaleString();
		String* toLocaleString(const String& locales);
		String* toLocaleString(const _Union<Intl::Locale*, ReadonlyArray<_Any*>*>& locales);
		String* toLocaleString(const String& locales, Intl::NumberFormatOptions* options);
		String* toLocaleString(const _Union<Intl::Locale*, ReadonlyArray<_Any*>*>& locales, Intl::NumberFormatOptions* options);
		String* toLocaleString(TArray<String*>* locales);
		String* toLocaleString(TArray<String*>* locales, Intl::NumberFormatOptions* options);
		String* toString();
		String* toString(double radix);
		String* toFixed();
		String* toFixed(double fractionDigits);
		String* toExponential();
		String* toExponential(double fractionDigits);
		String* toPrecision();
		String* toPrecision(double precision);
		double valueOf();
		static double EPSILON;
		static bool isFinite(Object* number);
		static bool isInteger(Object* number);
		static bool isNaN(Object* number);
		static bool isSafeInteger(Object* number);
		static double MAX_SAFE_INTEGER;
		static double MIN_SAFE_INTEGER;
		static double parseFloat(const String& string);
		static double parseInt(const String& string);
		static double parseInt(const String& string, double radix);
		Number();
		Number(const _Any& value);
		[[gnu::always_inline]]
		static Number* _New() {
			return new Number();
		}
		[[gnu::always_inline]]
		static Number* _New(const _Any& value) {
			return new Number(value);
		}
		static Number* prototype;
		static double MAX_VALUE;
		static double MIN_VALUE;
		static double NaN;
		static double NEGATIVE_INFINITY;
		static double POSITIVE_INFINITY;
		Number(double x) noexcept;
	};
}
namespace [[cheerp::genericjs]] cheerp {
	client::String* makeString(const wchar_t* str) {
		return new client::String(str);
	}
	client::String* makeString(const char* str) {
		return new client::String(str);
	}
}
#endif
