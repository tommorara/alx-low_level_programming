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
int coins[] = {25, 10, 5, 2, 1};
int i = 0;
int cents;
int c = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents <= 0)
{
printf("0\n");
return (0);
}

while (cents >= 0 && i < 5)
{
if ((cents - coins[i]) >= 0)
{
c++;
cents = cents - coins[i];
}
else
i++;
}
printf("%d\n", c);
return (0);
}
