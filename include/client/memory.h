/****************************************************************
 *
 * Copyright (C) 2018 Alessandro Pignotti <alessandro@leaningtech.com>
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
