#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number in which to find the bit
 * @index: the index of the bit to get (0-based)
 * Return: the value of the bit at the given index
 * or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	/* Check if the index is within the valid range */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* Create a mask with the bit at the specified index set to 1 */
	mask = 1UL << index;

	/* Use bitwise AND to check the value of the bit at the index */
	bit = (n & mask) ? 1 : 0;

	/* Return the value of the bit at the given index */
	return (bit);
}

