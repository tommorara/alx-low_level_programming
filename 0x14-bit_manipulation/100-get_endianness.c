#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 * Return: 1 for little-endian, 0 for big-endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_check = (char *)&num;

	/* Check the value of the first byte in memory */
	return ((int)endian_check[0]);
}

