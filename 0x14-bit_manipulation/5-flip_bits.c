#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integer
 * You are allowed to use % or / operators
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_flipped_bits = n ^ m;
	unsigned int count_flipped_bits = 0;

	/* Count the number of set bits in the XOR of n and m */
	while (xor_flipped_bits)
	{
		if (xor_flipped_bits & 1)
		{
			count_flipped_bits++;
		}
		xor_flipped_bits >>= 1;
	}

	return (count_flipped_bits);
}

