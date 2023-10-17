#include "main.h"

/**
* print_array - The function prints n elements of an array
* @a: array name
* @n: number of elements OF the array to be printed
* Return: always 0 (success)
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
