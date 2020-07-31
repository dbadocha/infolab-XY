#pragma once

typedef unsigned long long ull;

/**
*	Returns a character on a given position of iterativly created XY string
*/
class XYstring
{
public:
	XYstring();
	~XYstring();
	/**
	*	Returns a character on a given position
	*	@param	pos	Position of a character to be found
	*	@return	Returns	the character on a given position
	*/
	char getChar(ull pos);

private:
	/**
	*	Calculates the string pivot value needed to reverse XY string creating process
	*	@param	pos	Position of the character in XY string
	*	$return Position
	*/
	ull iterationPivot(ull pos);
	/**
	*	Reverse the creation process of XY string and returns parity of the minimal amount of iterations used
	*	@param	pos	Position of the character in XY string
	*	@return Patiry of iterations
	*/
	int iterationsParity(ull pos);
};