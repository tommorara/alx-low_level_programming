#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - main function
 * @a: function parameter declared
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])

{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
		putchar(a[i][j]);
	}
	putchar('\n');
	}
}
