#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: string to be evaluated
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}

