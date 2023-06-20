#include "main.h"
/**
 * times_table - function that prints the 9 times table
 *
 * 3-islower.c :retunr 0 or 1 when checks for lowercase
 *
 * Return: return the value 0 or 1
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b);
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c < 10 && b != 0)
			{
				_putchar(' ');
				_putchar((c % 10) + '0');
			}
			else
				_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
