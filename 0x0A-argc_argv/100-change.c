#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *
 * @argc : int
 *
 * @argv : pointer int
 *
 * Return: return
 *
 */

int main(int argc, int *argv[])
{
	if (argc > 1)
	{
		int a, b, c, d;

		b = 0;

		c = atoi(argv[1]);

		d[] = {25, 10, 5, 2 1};

		for (a = 0; a < 5; a++)
		{
			if (c >= d[a])
			{
				b = b + (c / d[a]);
				c = c % d[a];
				if  (c % d[a] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
