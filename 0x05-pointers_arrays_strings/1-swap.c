#include "main.h"

/**
 * swap_int - The function swaps the values of two integer
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
