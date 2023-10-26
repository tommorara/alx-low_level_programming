#include "main.h"

/**
 * main - check the code
 * @s*: the stringed to be checked
 * Return: 
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
