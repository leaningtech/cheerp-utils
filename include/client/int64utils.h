/****************************************************************
 *
 * Copyright (C) 2014 Alessandro Pignotti <alessandro@leaningtech.com>
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

#ifndef __CHEERP_PLATFORM_UTILS
#define __CHEERP_PLATFORM_UTILS

#include <stdint.h>

namespace cheerp
{

template<bool Signed>
class BaseInt64
{
public:
	int32_t high;
	uint32_t low;
	BaseInt64():high(0),low(0)
	{
	}
	BaseInt64(uint32_t l):high(0),low(l)
	{
	}
	BaseInt64(uint32_t h, uint32_t l):high(h),low(l)
	{
	}
	template<bool S>
	BaseInt64(BaseInt64<S> r):high(r.high),low(r.low)
	{
	}
	BaseInt64<Signed>& operator=(unsigned long r)
	{
		high = 0;
		low = r;
		return *this;
	}
	BaseInt64<Signed>& operator=(long r)
	{
		high = (r<0)?0xffffffff:0;
		low = r;
		return *this;
	}
	BaseInt64<Signed>& operator=(unsigned int r)
	{
		high = 0;
		low = r;
		return *this;
	}
	BaseInt64<Signed>& operator=(int r)
	{
		high = (r<0)?0xffffffff:0;
		low = r;
		return *this;
	}
	template<bool S>
	BaseInt64<Signed>& operator=(BaseInt64<S> r)
	{
		high = r.high;
		low = r.low;
		return *this;
	}
	BaseInt64<Signed>& operator+=(bool b)
	{
		uint32_t r = (b==true)?1:0;
		bool overflow = low > 0xffffffff - r;
		high+=overflow;
		low+=r;
		return *this;
	}
	BaseInt64<Signed>& operator+=(unsigned long r)
	{
		bool overflow = low > 0xffffffff - r;
		high+=overflow;
		low+=r;
		return *this;
	}
	BaseInt64<Signed>& operator+=(long r)
	{
		bool overflow = low > 0xffffffff - r;
		high+=overflow;
		low+=r;
		return *this;
	}
	BaseInt64<Signed>& operator+=(unsigned int r)
	{
		bool overflow = low > 0xffffffff - r;
		high+=overflow;
		low+=r;
		return *this;
	}
	BaseInt64<Signed>& operator+=(int r)
	{
		bool overflow = low > 0xffffffff - r;
		high+=overflow;
		low+=r;
		return *this;
	}
	template<bool S>
	BaseInt64<Signed>& operator+=(BaseInt64<S> r)
	{
		bool overflow = low > 0xffffffff - r.low;
		high+=r.high+overflow;
		low+=r.low;
		return *this;
	}
	BaseInt64<Signed>& operator-=(unsigned long r)
	{
		*this += (-r);
		return *this;
	}
	BaseInt64<Signed>& operator-=(long r)
	{
		*this += (-r);
		return *this;
	}
	BaseInt64<Signed>& operator-=(unsigned int r)
	{
		*this += (-r);
		return *this;
	}
	BaseInt64<Signed>& operator-=(int r)
	{
		*this += (-r);
		return *this;
	}
	template<bool S>
	BaseInt64<Signed>& operator-=(BaseInt64<S> r)
	{
		*this += (-r);
		return *this;
	}
	BaseInt64<Signed>& operator*=(unsigned long r)
	{
		*this *= BaseInt64<false>(r);
		return *this;
	}
	BaseInt64<true>& operator*=(long r)
	{
		*this *= BaseInt64<true>(r);
		return *this;
	}
	BaseInt64<Signed>& operator*=(unsigned int r)
	{
		*this *= BaseInt64<false>(r);
		return *this;
	}
	BaseInt64<true>& operator*=(int r)
	{
		*this *= BaseInt64<true>(r);
		return *this;
	}
	template<bool S>
	BaseInt64<Signed>& operator*=(BaseInt64<S> r)
	{
		//[(a * 2^48) + (b * 2^32) + (c * 2^16) + d] *
		//[(e * 2^48) + (f * 2^32) + (g * 2^16) + h]
		//============================================
		//(ae * 2^96) + (be * 2^80) + (ce * 2^64) + (de * 2^48) +
		//(af * 2^80) + (bf * 2^64) + (cf * 2^48) + (df * 2^32) +
		//(ag * 2*64) + (bg * 2^48) + (cg * 2^32) + (dg * 2^16) +
		//(ah * 2^48) + (bh * 2^32) + (ch * 2^16) + dh
		//We need 64 bit, drop anything higher
		//                                          (de * 2^48) +
		//                            (cf * 2^48) + (df * 2^32) +
		//              (bg * 2^48) + (cg * 2^32) + (dg * 2^16) +
		//(ah * 2^48) + (bh * 2^32) + (ch * 2^16) + dh
		uint16_t a = uint32_t(high) >> 16;
		uint16_t b = high & 0xffff;
		uint16_t c = low >> 16;
		uint16_t d = low & 0xffff;
		
		uint16_t e = uint32_t(r.high) >> 16;
		uint16_t f = r.high & 0xffff;
		uint16_t g = r.low >> 16;
		uint16_t h = r.low & 0xffff;

		uint32_t resH = ((d*e + c*f + b*g + a*h) << 16) + (d*f + c*g + b*h);
		uint32_t resL = ((d*g + c*h) << 16) + d*h;
		high = resH;
		low = resL;
		return *this;
	}
	BaseInt64<Signed> operator+(bool b) const
	{
		BaseInt64<Signed> ret=*this;
		ret+=b;
		return ret;
	}
	BaseInt64<Signed> operator+(unsigned long r) const
	{
		BaseInt64<Signed> ret=*this;
		ret+=r;
		return ret;
	}
	BaseInt64<true> operator+(long r) const
	{
		BaseInt64<true> ret=*this;
		ret+=r;
		return ret;
	}
	BaseInt64<Signed> operator+(unsigned int r) const
	{
		BaseInt64<Signed> ret=*this;
		ret+=r;
		return ret;
	}
	BaseInt64<true> operator+(int r) const
	{
		BaseInt64<true> ret=*this;
		ret+=r;
		return ret;
	}
	template<bool S>
	BaseInt64<Signed || S> operator+(BaseInt64<S> r) const
	{
		BaseInt64<Signed || S> ret=*this;
		ret+=r;
		return ret;
	}
	BaseInt64<true> operator-(unsigned long r) const
	{
		BaseInt64<true> ret=*this;
		ret-=r;
		return ret;
	}
	BaseInt64<true> operator-(long r) const
	{
		BaseInt64<true> ret=*this;
		ret-=r;
		return ret;
	}
	BaseInt64<true> operator-(unsigned int r) const
	{
		BaseInt64<true> ret=*this;
		ret-=r;
		return ret;
	}
	BaseInt64<true> operator-(int r) const
	{
		BaseInt64<true> ret=*this;
		ret-=r;
		return ret;
	}
	template<bool S>
	BaseInt64<true> operator-(BaseInt64<S> r) const
	{
		BaseInt64<true> ret=*this;
		ret-=r;
		return ret;
	}
	BaseInt64<Signed> operator*(unsigned long r) const
	{
		BaseInt64<Signed> ret=*this;
		ret*=r;
		return ret;
	}
	BaseInt64<true> operator*(long r) const
	{
		BaseInt64<Signed> ret=*this;
		ret*=r;
		return ret;
	}
	BaseInt64<Signed> operator*(unsigned int r) const
	{
		BaseInt64<Signed> ret=*this;
		ret*=r;
		return ret;
	}
	BaseInt64<true> operator*(int r) const
	{
		BaseInt64<Signed> ret=*this;
		ret*=r;
		return ret;
	}
	template<bool S>
	BaseInt64<Signed || S> operator*(BaseInt64<S> r) const
	{
		BaseInt64<Signed || S> ret=*this;
		ret*=r;
		return ret;
	}
	//TODO: Support division
	BaseInt64<true> operator-() const
	{
		//~(V - 1)
		return BaseInt64<true>(low == 0 ? ~(high-(low==0)): ~high, -low);
	}
	BaseInt64<Signed>& operator++()
	{
		bool overflow = low == 0xffffffff;
		++low;
		high+=overflow;
		return *this;
	}
	BaseInt64<Signed> operator++(int)
	{
		BaseInt64<Signed> ret=*this;
		bool overflow = low == 0xffffffff;
		++low;
		high+=overflow;
		return ret;
	}
	BaseInt64<Signed>& operator--()
	{
		bool underflow = low == 0;
		--low;
		high-=underflow;
		return *this;
	}
	BaseInt64<Signed> operator--(int)
	{
		BaseInt64<Signed> ret=*this;
		bool underflow = low == 0;
		--low;
		high-=underflow;
		return ret;
	}
	BaseInt64<Signed> operator~() const
	{
		return BaseInt64<Signed>(~high, ~low);
	}
	BaseInt64<Signed>& operator>>=(int r)
	{
		assert(r <= 64);
		if(r<32)
		{
			low = low >> r | (high << (32-r));
			if(Signed)
				high = int32_t(high) >> r;
			else
				high = uint32_t(high) >> r;
		}
		else
		{
			if(Signed)
				low = int32_t(high) >> (r-32);
			else
				low = uint32_t(high) >> (r-32);
			high = 0;
		}
		return *this;
	}
	BaseInt64<Signed>& operator<<=(int r)
	{
		assert(r <= 64);
		if(r<32)
		{
			high = (high << r) | (low >> (32-r));
			low = low << r;
		}
		else
		{
			high = low << (r-32);
			low = 0;
		}
		return *this;
	}
	BaseInt64<Signed> operator>>(int r) const
	{
		BaseInt64<Signed> ret=*this;
		ret >>= r;
		return ret;
	}
	BaseInt64<Signed> operator<<(int r) const
	{
		BaseInt64<Signed> ret=*this;
		ret <<= r;
		return ret;
	}
	bool operator==(unsigned long r) const
	{
		return high==0 && low==r;
	}
	bool operator==(long r) const
	{
		return high==0 && low==r;
	}
	bool operator==(unsigned int r) const
	{
		return high==0 && low==r;
	}
	bool operator==(int r) const
	{
		return high==0 && low==r;
	}
	template<bool S>
	bool operator==(BaseInt64<S> r) const
	{
		return high==r.high && low==r.low;
	}
	bool operator<(unsigned long r) const
	{
		return *this < BaseInt64<false>(r);
	}
	bool operator<(long r) const
	{
		return *this < BaseInt64<true>(r);
	}
	bool operator<(unsigned int r) const
	{
		return *this < BaseInt64<false>(r);
	}
	bool operator<(int r) const
	{
		return *this < BaseInt64<true>(r);
	}
	template<bool S>
	bool operator<(BaseInt64<S> r) const
	{
		if(S || Signed)
		{
			if(high < 0 && r.high >= 0)
				return true;
			if(high >= 0 && r.high < 0)
				return false;
		}
		if(high < r.high)
			return true;
		if(high > r.high)
			return false;
		if(low < r.low)
			return true;
		return false;
	}
	bool operator<=(unsigned long r) const
	{
		return *this < BaseInt64<false>(r);
	}
	bool operator<=(long r) const
	{
		return *this < BaseInt64<true>(r);
	}
	bool operator<=(unsigned int r) const
	{
		return *this < BaseInt64<false>(r);
	}
	bool operator<=(int r) const
	{
		return *this < BaseInt64<true>(r);
	}
	template<bool S>
	bool operator<=(BaseInt64<S> r) const
	{
		if(S || Signed)
		{
			if(high < 0 && r.high >= 0)
				return true;
			if(high >= 0 && r.high < 0)
				return false;
		}
		if(high < r.high)
			return true;
		if(high > r.high)
			return false;
		if(low <= r.low)
			return true;
		return false;
	}
	bool operator>(unsigned long r) const
	{
		return *this > BaseInt64<false>(r);
	}
	bool operator>(long r) const
	{
		return *this > BaseInt64<true>(r);
	}
	bool operator>(unsigned int r) const
	{
		return *this > BaseInt64<false>(r);
	}
	bool operator>(int r) const
	{
		return *this > BaseInt64<true>(r);
	}
	template<bool S>
	bool operator>(BaseInt64<S> r) const
	{
		if(S || Signed)
		{
			if(high < 0 && r.high >= 0)
				return false;
			if(high >= 0 && r.high < 0)
				return true;
		}
		if(high > r.high)
			return true;
		if(high < r.high)
			return false;
		if(low > r.low)
			return true;
		return false;
	}
	bool operator>=(unsigned long r) const
	{
		return *this >= BaseInt64<false>(r);
	}
	bool operator>=(long r) const
	{
		return *this >= BaseInt64<true>(r);
	}
	bool operator>=(unsigned int r) const
	{
		return *this >= BaseInt64<false>(r);
	}
	bool operator>=(int r) const
	{
		return *this >= BaseInt64<true>(r);
	}
	template<bool S>
	bool operator>=(BaseInt64<S> r) const
	{
		if(S || Signed)
		{
			if(high < 0 && r.high >= 0)
				return false;
			if(high >= 0 && r.high < 0)
				return true;
		}
		if(high > r.high)
			return true;
		if(high < r.high)
			return false;
		if(low >= r.low)
			return true;
		return false;
	}
	operator double() const
	{
		const double _2e16 = 0x10000;
		const double _2e32 = _2e16*_2e16;
		return double(high) * _2e32 + double(low);
	}
};

typedef BaseInt64<true> Int64;
typedef BaseInt64<false> UInt64;

inline Int64 operator*(long l, Int64 r)
{
	return BaseInt64<true>(l)*r;
}

inline Int64 operator*(int l, Int64 r)
{
	return BaseInt64<true>(l)*r;
}

}

#ifdef CHEERP_EMULATE_INT64
typedef cheerp::Int64 int64_t;
typedef cheerp::UInt64 uint64_t;
#endif

#endif
