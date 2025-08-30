#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the sizes (in bytes) of various
 * C data types: char, int, long int, long long int, and float.
 * It uses the sizeof operator to determine the actual size on the
 * system where the program is compiled and run. The output may
 * differ depending on whether the code is compiled in 32-bit
 * (-m32) or 64-bit (-m64) mode, especially for the 'long int' type.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long: %d byte(s)\n", sizeof(long));
	printf("Size of a long long: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
