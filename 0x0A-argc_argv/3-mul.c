#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc : int
 *
 * @argv : char pointer
 *
 * Return: return (0) or return (1)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		i = atoi(argv[2]) * atoi(argv[1]);
		printf("%d\n", i);
	}
	return (0);
}
