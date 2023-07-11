#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *
 * @argc : int
 *
 * @argv : pointer
 *
 * Return: return
 *
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int a, b, c;

		int d[] = {25, 10, 5, 2, 1};

		b = 0;

		c = atoi(argv[1]);

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
		printf("%d\n", b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}
