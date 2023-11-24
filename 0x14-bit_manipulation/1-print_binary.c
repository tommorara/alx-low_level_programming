#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: number to be printed in binary
 *
 * Description:
 * - You are not allowed to use arrays
 * - You are not allowed to use malloc
 * - You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	/* Determine the number of bits in the input data type*/
	int move = sizeof(n) * 8 - 1;
	int leading_zeros = 0; /* Variable to track leading zeros*/
	unsigned long int bit; /* Variable to store the current bit value*/

	while (move >= 0)
	{
		bit = (n >> move) & 1; /* Extract the current bit*/
		if (leading_zeros == 0 && bit == 0 && move != 0)
		{
			/* Skip leading zeros until a non-zero bit is encountered*/
		}
		else
		{
			_putchar('0' + bit); /* Print the binary digit*/
			leading_zeros++;
		}
		move--;
	}

	if (leading_zeros == 0)
	{
		_putchar('0'); /* Print a '0' if the input is zero*/
	}
}

