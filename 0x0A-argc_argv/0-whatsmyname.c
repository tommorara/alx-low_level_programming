#include "main.h"

/**
  * main - prints the name of the program
  * @argc: counts of arguments taken by the program
  * @argv: a pointer containing the all the arguments of the program
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
