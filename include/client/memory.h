//===-- memory.h - Type safe implementation of memcmp  --------------===//
//
//                     Cheerp: The C++ compiler for the Web
//
// This file is distributed under the Apache License v2.0 with LLVM Exceptions.
// See LICENSE.TXT for details.
//
// Copyright 2011-2023 Leaning Technologies
//
//===----------------------------------------------------------------------===//

#ifndef _CHEERP_MEMORY_H_2a82c4dc
#define _CHEERP_MEMORY_H_2a82c4dc

#define CHEERP_MEMCMP(s1, s2, n) \
({ \
        /* Type safety check, types should be the same */ \
	int ret = 0; \
	typeof(s1) tmp1 = s1; \
	typeof(s1) tmp2 = s2; \
	for (size_t i=0;i<n/sizeof(*tmp1);i++) \
	{ \
		if (tmp1[i] != tmp2[i]) \
		{ \
			ret = tmp1[i] < tmp2[i] ? -1 : 1; \
			break; \
		} \
	} \
        ret; \
})

#ifdef __cplusplus
namespace cheerp
{

template<class T>
inline int memcmp(const T* s1, const T* s2, size_t n)
{
	if (n == 0)
		return 0;
	for (size_t i=0; i<n/sizeof(T); i++)
	{
		if (s1[i] != s2[i])
			return s1[i] < s2[i] ? -1 : 1;
	}
	return 0;
}

}
#endif

#endif
