#include "XYstring.h"

#include <cmath>
#include <climits>

constexpr int ULL_SIZE = sizeof(ull) * 8;

XYstring::XYstring()
{
}

XYstring::~XYstring()
{
}

char XYstring::getChar(ull pos)
{
	if (iterationsParity(pos))
		return 'Y';
	else
		return 'X';
}

ull XYstring::iterationPivot(ull pos)
{
	int power = 0;
	power = static_cast<int>(trunc(log2(pos)));

	ull middlePositon = static_cast<ull>(pow(2, power));

	if (pos < middlePositon || power == ULL_SIZE)
		middlePositon = static_cast<ull>(pow(2, power - 1));

	return middlePositon;
}

int XYstring::iterationsParity(ull pos)
{
	ull foldedPosition = pos;
	int iterationCounter = 0;

	while (foldedPosition != 0)
	{
		++iterationCounter;
		foldedPosition -= iterationPivot(foldedPosition);
	}

	return iterationCounter % 2;
}