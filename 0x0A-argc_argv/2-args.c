#include "main.h"

/**
  * main - prints the the number of argments passed into the program
  * @argc: counts of arguments taken by the program
  * @argv: a pointer containing the all the arguments of the program
  * Return: Always 0 (success)
  */
int i;
int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
