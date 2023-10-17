#include "main.h"
/**
 * _puts - The function prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: always zero
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
