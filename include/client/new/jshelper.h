#ifndef CHEERP_JSHELPER_H
#define CHEERP_JSHELPER_H
namespace [[cheerp::genericjs]] client {
	class _Any;
	template<class... Variants>
	class _Union;
	template<class F>
	class _Function;
	class Object;
	class String;
	template<class T>
	class TArray;
}
namespace [[cheerp::genericjs]] cheerp {
	using Nullptr = decltype(nullptr);
	struct FalseType {
		constexpr static bool value = false;
	};
	struct TrueType {
		constexpr static bool value = true;
	};
	template<class T, class U>
	struct IsSameImpl : FalseType {};
	template<class T>
	struct IsSameImpl<T, T> : TrueType {};
	template<bool B, class T = void>
	struct EnableIfImpl {};
	template<class T>
	struct EnableIfImpl<true, T> {
		using type = T;
	};
	template<bool B, class T, class F>
	struct ConditionalImpl {
		using type = T;
	};
	template<class T, class F>
	struct ConditionalImpl<false, T, F> {
		using type = F;
	};
	template<class T>
	struct RemoveConstImpl {
		using type = T;
	};
	template<class T>
	struct RemoveConstImpl<const T> {
		using type = T;
	};
	template<class T>
	struct RemoveVolatileImpl {
		using type = T;
	};
	template<class T>
	struct RemoveVolatileImpl<volatile T> {
		using type = T;
	};
	template<class T>
	struct RemovePointerImpl {
		using type = T;
	};
	template<class T>
	struct RemovePointerImpl<T*> {
		using type = T;
	};
	template<class T>
	struct RemoveReferenceImpl {
		using type = T;
	};
	template<class T>
	struct RemoveReferenceImpl<T&> {
		using type = T;
	};
	template<class T>
	struct RemoveReferenceImpl<T&&> {
		using type = T;
	};
	template<class T>
	struct RemoveExtentImpl {
		using type = T;
	};
	template<class T>
	struct RemoveExtentImpl<T[]> {
		using type = T;
	};
	template<class T, unsigned N>
	struct RemoveExtentImpl<T[N]> {
		using type = T;
	};
	template<class T, class U>
	constexpr bool IsSame = IsSameImpl<T, U>::value;
	template<bool B, class T = void>
	using EnableIf = typename EnableIfImpl<B, T>::type;
	template<bool B, class T, class F>
	using Conditional = typename ConditionalImpl<B, T, F>::type;
	template<class T>
	using RemoveConst = typename RemoveConstImpl<T>::type;
	template<class T>
	using RemoveVolatile = typename RemoveVolatileImpl<T>::type;
	template<class T>
	using RemoveCv = RemoveVolatile<RemoveConst<T>>;
	template<class T>
	using RemovePointer = Conditional<IsSame<typename RemovePointerImpl<RemoveCv<T>>::type, RemoveCv<T>>, T, typename RemovePointerImpl<RemoveCv<T>>::type>;
	template<class T>
	using RemoveReference = typename RemoveReferenceImpl<T>::type;
	template<class T>
	using RemoveExtent = typename RemoveExtentImpl<T>::type;
	template<class T, class U>
	constexpr bool IsSimilar = IsSame<RemoveCv<T>, RemoveCv<U>>;
	template<class T>
	constexpr bool IsVoid = IsSimilar<T, void>;
	template<class T>
	constexpr bool IsConst = !IsSame<RemoveConst<T>, T>;
	template<class T>
	constexpr bool IsVolatile = !IsSame<RemoveVolatile<T>, T>;
	template<class T>
	constexpr bool IsPointer = !IsSame<RemovePointer<T>, T>;
	template<class T>
	constexpr bool IsReference = !IsSame<RemoveReference<T>, T>;
	template<class T>
	constexpr bool IsArray = !IsSame<RemoveExtent<T>, T>;
	template<class T>
	struct ArrayElementTypeImpl {
		using type = client::_Any*;
	};
	template<class T>
	struct ArrayElementTypeImpl<client::TArray<T>> {
		using type = T;
	};
	template<class T>
	using ArrayElementType = typename ArrayElementTypeImpl<T>::type;
	template<class T>
	using Normalize = RemoveCv<RemovePointer<RemoveReference<T>>>;
	template<class T>
	constexpr bool IsConstReference = IsReference<T> && IsConst<RemoveReference<T>>;
	template<class T>
	constexpr bool IsPrimitive = IsSimilar<T, bool> || IsSimilar<T, char> || IsSimilar<T, signed char> || IsSimilar<T, unsigned char> || IsSimilar<T, short> || IsSimilar<T, unsigned short> || IsSimilar<T, int> || IsSimilar<T, unsigned int> || IsSimilar<T, long> || IsSimilar<T, unsigned long> || IsSimilar<T, float> || IsSimilar<T, double> || IsSimilar<T, wchar_t> || IsSimilar<T, char16_t> || IsSimilar<T, char32_t>;
	template<class From, class To>
	struct CanCastHelper : FalseType {};
	template<class From, class To, bool = IsPrimitive<From> && IsPrimitive<To>>
	struct CanCastImpl {
		constexpr static TrueType testAny(client::_Any*);
		constexpr static FalseType testAny(...);
		constexpr static TrueType test(To*);
		constexpr static FalseType test(...);
		constexpr static bool value = ((IsVoid<From> || IsSame<From, client::_Any>) && (IsPrimitive<To> || IsSame<To, Nullptr> || decltype(testAny((To*) nullptr))::value)) || ((IsVoid<To> || IsSame<To, client::_Any>) && (IsPrimitive<From> || IsSame<From, Nullptr> || decltype(testAny((From*) nullptr))::value)) || decltype(test((From*) nullptr))::value || CanCastHelper<From, To>::value;
	};
	template<class From, class To>
	struct CanCastImpl<From, To, true> {
		constexpr static TrueType test(To);
		constexpr static FalseType test(...);
		constexpr static bool value = decltype(test(*(From*) nullptr))::value;
	};
	template<class From, class... To>
	constexpr bool CanCast = (CanCastImpl<Normalize<From>, Normalize<To>>::value || ...);
	template<class From, template<class...> class To, class... T>
	struct CanCastHelper<From, To<T...>> {
		template<class... U>
		[[cheerp::genericjs]]
		constexpr static bool test(To<U...>*) {
			return CanCast<To<U...>*, To<T...>*>;
		}
		[[cheerp::genericjs]]
		constexpr static bool test(void*) {
			return false;
		}
		constexpr static bool value = test((From*) nullptr);
	};
	template<template<class...> class Class, class... From, class... To>
	struct CanCastHelper<Class<From...>, Class<To...>> {
		constexpr static bool value = (CanCast<From, To> && ...);
	};
	template<class From, class To, class... Args>
	struct CanCastHelper<client::_Function<From()>, client::_Function<To(Args...)>> {
		constexpr static bool value = CanCast<From, To>;
	};
	template<class From, class To, class FromFirstArg, class ToFirstArg, class... FromArgs, class... ToArgs>
	struct CanCastHelper<client::_Function<From(FromFirstArg, FromArgs...)>, client::_Function<To(ToFirstArg, ToArgs...)>> {
		constexpr static bool value = CanCast<ToFirstArg, FromFirstArg> && CanCastHelper<client::_Function<From(FromArgs...)>, client::_Function<To(ToArgs...)>>::value;
	};
	template<class... From, class... To>
	struct CanCastHelper<client::_Union<From...>, client::_Union<To...>> {
		constexpr static bool value = (CanCast<From, client::_Union<To...>> && ...);
	};
	template<class... From, class To>
	struct CanCastHelper<client::_Union<From...>, To> {
		constexpr static bool value = (CanCast<From, To> && ...);
	};
	template<class From, class... To>
	struct CanCastHelper<From, client::_Union<To...>> {
		constexpr static bool value = (CanCast<From, To> || ...);
	};
	template<class... T>
	constexpr bool CheckTemplate = ((IsPrimitive<T> || IsPointer<T>) && ...);
	template<class T>
	struct GetTypeHelper {
		static client::Object* getType();
	};
	template<class T>
	[[gnu::always_inline]]
	client::Object* getType() {
		return GetTypeHelper<T>::getType();
	}
}
namespace [[cheerp::genericjs]] client {
	class [[cheerp::client_layout]] _Any {
		struct [[cheerp::client_layout]] Cast {
			template<class T, class = cheerp::EnableIf<cheerp::CanCast<_Any, T>>>
			[[gnu::always_inline]]
			operator T() const {
				T out;
				asm("%1" : "=r"(out) : "r"(this));
				return out;
			}
		};
	public:
		template<class T>
		[[cheerp::client_transparent]]
		_Any(T value) noexcept;
		template<class T, class = cheerp::EnableIf<cheerp::CanCast<_Any, T>>>
		[[gnu::always_inline]]
		T cast() const {
			T out;
			asm("%1" : "=r"(out) : "r"(this));
			return out;
		}
		[[gnu::always_inline]]
		const Cast& cast() const {
			return *reinterpret_cast<const Cast*>(this);
		}
		template<class T>
		[[gnu::always_inline]]
		bool instanceof() const {
			bool out;
			asm("%1 instanceof %2" : "=r"(out) : "r"(this), "r"(cheerp::getType<T>()));
			return out;
		}
		[[gnu::always_inline]]
		client::String* _typeof() const {
			client::String* out;
			asm("typeof %1" : "=r"(out) : "r"(this));
			return out;
		}
		template<class T, class = cheerp::EnableIf<cheerp::CanCast<_Any, T>>>
		[[gnu::always_inline]]
		explicit operator T() const {
			return this->cast<T>();
		}
		[[gnu::always_inline]]
		explicit operator int() const {
			return this->cast<int>();
		}
	};
	template<class... Variants>
	class [[cheerp::client_layout]] _Union {
		struct [[cheerp::client_layout]] Cast {
			template<class T, class = cheerp::EnableIf<(cheerp::CanCast<Variants, T> || ...)>>
			[[gnu::always_inline]]
			operator T() const {
				T out;
				asm("%1" : "=r"(out) : "r"(this));
				return out;
			}
		};
	public:
		template<class T, class = cheerp::EnableIf<cheerp::CanCast<T, _Union<Variants...>>>>
		[[cheerp::client_transparent]]
		_Union(T value) noexcept;
		template<class T, class = cheerp::EnableIf<(cheerp::CanCast<Variants, T> || ...)>>
		[[gnu::always_inline]]
		T cast() const {
			T out;
			asm("%1" : "=r"(out) : "r"(this));
			return out;
		}
		[[gnu::always_inline]]
		const Cast& cast() const {
			return *reinterpret_cast<const Cast*>(this);
		}
		template<class T, class = cheerp::EnableIf<(cheerp::CanCast<Variants, T> || ...)>>
		[[gnu::always_inline]]
		explicit operator T() const {
			return this->cast<T>();
		}
	};
}
namespace [[cheerp::genericjs]] cheerp {
	[[gnu::always_inline]]
	inline client::String* makeString(const char* str);
	[[gnu::always_inline]]
	inline client::String* makeString(const wchar_t* str);
	[[gnu::always_inline]]
	inline client::String* clientCast(const char* str) {
		return makeString(str);
	}
	[[gnu::always_inline]]
	inline client::String* clientCast(const wchar_t* str) {
		return makeString(str);
	}
	template<class T>
	[[gnu::always_inline]]
	Conditional<IsConstReference<T>, RemoveReference<T>*, T&&> clientCast(T&& value) {
		if constexpr (IsConstReference<T>)
			return &value;
		else
			return value;
	}
	template<class T>
	T declval();
	template<class From, class... To>
	constexpr bool CanCastArgs = CanCast<decltype(clientCast(declval<From>())), To...>;
}
#endif
