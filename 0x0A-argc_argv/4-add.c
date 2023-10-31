#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: add positive numbers
* @argv: Array of command-line arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int result = 0;
int i;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
char *arg = argv[i];
int j = 0;
while (arg[j])
{
if (arg[j] < '0' || arg[j] > '9')
{
printf("Error\n");
return (1);
}
j++;
}
result += atoi(arg);
}

printf("%d\n", result);
return (0);
}
