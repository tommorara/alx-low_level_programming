#include "main.h"
/**
* _isalpha - the function checks for an alphabetic character
*@c: is the character in questions
* Return: the function returns 1 and 0
*/
	int _isalpha(int c)

	{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
