//===---------------------------------------------------------------------===//
//	Copyright 2017 Leaning Technlogies
//===----------------------------------------------------------------------===//

#include <tests.h>
#include <cheerp/client.h>
#include <cstdint>


void webMain()
{
	const char ascii[] = "a";
	uint32_t ascii_codepoint = 97;
	client::String* ascii_converted = client::String::fromUtf8(ascii);
	assertEqual(ascii_codepoint, (uint32_t)ascii_converted->charCodeAt(0), "UTF-8 support: 1/5");

	const char accent[] = "è";
	uint32_t accent_codepoint = 232;
	client::String* accent_converted = client::String::fromUtf8(accent);
	assertEqual(accent_codepoint, (uint32_t)accent_converted->charCodeAt(0), "UTF-8 support: 2/5");

	const char cjk[] = "不";
	uint32_t cjk_codepoint = 19981;
	client::String* cjk_converted = client::String::fromUtf8(cjk);
	assertEqual(cjk_codepoint, (uint32_t)cjk_converted->charCodeAt(0), "UTF-8 support: 3/5");

	const char emoji[] = "🤔";
	uint32_t emoji_codepoint1 = 55358;
	uint32_t emoji_codepoint2 = 56596;
	client::String* emoji_converted = client::String::fromUtf8(emoji);
	assertEqual(emoji_codepoint1, (uint32_t)emoji_converted->charCodeAt(0), "UTF-8 support: 4/5");
	assertEqual(emoji_codepoint2, (uint32_t)emoji_converted->charCodeAt(1), "UTF-8 support: 5/5");
}
