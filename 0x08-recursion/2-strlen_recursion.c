#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the stringed to be checked
 * Return: an integer
 */

int _strlen_recursion(char *s)
{

	if (*s)
	{
	lnt++;
	lnt += _strlen_recursion(s + 1);
	}
	return (lnt);
}
