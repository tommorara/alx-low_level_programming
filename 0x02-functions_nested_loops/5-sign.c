#include "main.h"
/**
* print_sign - the functio prints either the +ve or -ve sign of a no.
* @n: checks the int
* Return: 1 and prints + if n is greater than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
