#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the unsigned long integer
 * @index: index of the bit to clear
 * Return: 1 if it works or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Create a mask with the bit at the specified index set to 1 */
	mask = 1UL << index;

	/* Use bitwise AND with the complement of the mask to clear the bit */
	*n &= ~mask;

	/* Return 1 to indicate success */
	return (1);
}

