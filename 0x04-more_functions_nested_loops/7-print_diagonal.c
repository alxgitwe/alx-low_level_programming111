#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n : int
 */

void print_diagonal(int n)
{
	int i, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (y = 1; y < i; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}

}
