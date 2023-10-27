#include "main.h"
/**
* _isupper - the function checks for uppercase letters
* @c: The char to be checked
*
* Return: 0 or 1
*/
/*function declaration*/
int _isupper(int c)/*intergral promotion of char to int*/
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
