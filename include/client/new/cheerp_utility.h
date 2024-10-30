//===-- cheerp_utility.h - Utilities for Cheerp Client API --------------===//
//
//                     Cheerp: The C++ compiler for the Web
//
// This file is distributed under the Apache License v2.0 with LLVM Exceptions.
// See LICENSE.TXT for details.
//
// Copyright 2011-2023 Leaning Technologies
//
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_CLIENT_UTILITY
#define _CHEERP_CLIENT_UTILITY

// The purpose of this header file is to not have to include any C++ standard library header files in client.h

namespace [[cheerp::genericjs]] cheerp
{

namespace [[cheerp::genericjs]] utility
{

template<class T>
struct remove_reference
{
	typedef T type;
};
template<class T>
struct remove_reference<T&>
{
	typedef T type;
};
template<class T>
struct remove_reference<T&&>
{
	typedef T type;
};

template<class T>
struct remove_cv
{
	typedef T type;
};
template<class T>
struct remove_cv<const T>
{
	typedef T type;
};
template<class T>
struct remove_cv<volatile T>
{
	typedef T type;
};
template<class T>
struct remove_cv<const volatile T>
{
	typedef T type;
};

template<bool B, class T = void>
struct enable_if
{
};
template<class T>
struct enable_if<true, T>
{
	typedef T type;
};

template<class T, T v>
struct integral_constant
{
	static constexpr T value = v;
	typedef T value_type;
	typedef integral_constant type;
	constexpr operator value_type() const noexcept { return value; }
};
typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

template<class T, class U>
struct is_same : false_type {};
template<class T>
struct is_same<T, T> : true_type {};

template<class T>
struct is_const : false_type {};
template<class T>
struct is_const<const T> : true_type {};

template<class T>
struct is_reference : false_type {};
template<class T>
struct is_reference<T&> : true_type {};
template<class T>
struct is_reference<T&&> : true_type {};

template<class T>
struct is_function : integral_constant<bool, !is_const<const T>::value && !is_reference<T>::value> {};

template<class T>
struct is_void : is_same<void, typename remove_cv<T>::type> {};

template<class T>
struct is_array : false_type {};
template<class T>
struct is_array<T[]> : true_type {};
template<class T, size_t N>
struct is_array<T[N]> : true_type {};

template<class T>
T&& __declval(int);

template<class T>
T __declval(long);

template<class T>
decltype(__declval<T>(0)) declval() noexcept;

namespace detail
{
	template<class T>
	auto test_returnable(int) -> decltype(
		void(static_cast<T(*)()>(nullptr)), true_type{}
	);
	template<class>
	auto test_returnable(...) -> false_type;
	template<class From, class To>
	auto test_implicitly_convertible(int) -> decltype(
		void(declval<void(&)(To)>()(declval<From>())), true_type{}
	);
	template<class, class>
	auto test_implicitly_convertible(...) -> false_type;
} // End of namespace cheerp::utility::detail

template<class From, class To>
struct is_convertible : integral_constant<bool,
	(decltype(detail::test_returnable<To>(0))::value &&
	decltype(detail::test_implicitly_convertible<From, To>(0))::value) ||
	(is_void<From>::value && is_void<To>::value)
> {};

template<typename T>
typename cheerp::utility::remove_reference<T>::type&& move(T&& t) noexcept
{
	return static_cast<typename cheerp::utility::remove_reference<T>::type&&>(t);
}
template<typename T>
T&& forward(typename cheerp::utility::remove_reference<T>::type&& t) noexcept
{
	return static_cast<T&&>(t);
}
template<typename T>
T&& forward(typename cheerp::utility::remove_reference<T>::type& t) noexcept
{
	return static_cast<T&&>(t);
}

} // End of namespace cheerp::utility

} // End of namespace cheerp

#endif // _CHEERP_CLIENT_UTILITY
