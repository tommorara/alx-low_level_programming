#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the unsigned long integer to modify
 * @index: index (starting from 0) of the bit to set to 1
 * Return: 1 if it works or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is within the valid range */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* Create a mask with the bit at the specified index set to 1 */
	mask = 1UL << index;

	/* Use bitwise OR to set the bit at the index to 1 */
	*n = *n | mask;

	/* Return 1 to indicate success */
	return (1);
}

