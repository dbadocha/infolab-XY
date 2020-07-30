#pragma once

typedef unsigned long long ull;

/**
*
*/
class XYstring
{
public:
	XYstring();
	~XYstring();
	/**
	*
	*/
	char find(ull pos);

private:
	/**
	*
	*/
	ull iterationPivot(ull pos);
	/**
	*
	*/
	int iterationsParity(ull pos);
};