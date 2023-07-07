#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
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

	int j;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (*argv[j] < '0' || *argv[j] > '9')
				return (printf("Error\n"), 1);
			i = i + atoi(argv[j]);
		}
	}
	printf("%d\n", i);
	return (0);

}
