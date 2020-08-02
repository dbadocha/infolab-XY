#include "gtest/gtest.h"
#include "../infolab-XY/XYstring.h"

#include <string>

TEST(XYstring, ExampleValues)
{
	XYstring xstring;
	EXPECT_EQ(xstring.getChar(0), 'X');
	EXPECT_EQ(xstring.getChar(2), 'Y');
	EXPECT_EQ(xstring.getChar(1000000000000000), 'X');
}


TEST(XYstring, SpecialCases)
{
	ull maxValue = ULLONG_MAX;
	XYstring xstring;
	EXPECT_EQ(xstring.getChar(0), 'X');
	EXPECT_EQ(xstring.getChar(maxValue), 'X');
	EXPECT_EQ(xstring.getChar(maxValue - 1), 'Y');
	EXPECT_EQ(xstring.getChar(2^63), 'Y');
	EXPECT_EQ(xstring.getChar((2 ^ 63) - 1), 'X');
	EXPECT_EQ(xstring.getChar(-1), xstring.getChar(maxValue));
	EXPECT_EQ(xstring.getChar(-2), xstring.getChar(maxValue-1));
}

