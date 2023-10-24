#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - main function
 * @size: function parameter
 * @a: function parameter
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;  /* Sum of the main diagonal*/
	int sum2 = 0;  /* Sum of the other diagonal*/

	for (int i = 0; i < size; i++)
	{
	/* Sum of the main diagonal (top-left to bottom-right)*/
	sum1 += a[i * size + i];

	/* Sum of the other diagonal (top-right to bottom-left)*/
	sum2 += a[i * size + (size - 1 - i)];
	}

printf("%d, %d\n", sum1, sum2);
}
