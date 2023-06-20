#include "main.h"
/**
 * times_table - function that prints the 9 times table
 *
 * 3-islower.c :retunr 0 or 1 when checks for lowercase
 *
 * Return: return the value 0 or 1
 */

void times_table(void)

	for (int n = 0; n <= 9; n++)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		int i;

		i = d * n;

		if (i < 10)
		{
			_putchar(i + 48);
			if d == 9
				break;
			_putchar(44);
			_putchar(32)
		}
		else
		{
			int a, b;

			a = i % 10;
			b = (i - a) / 10;
			_putchar(b + 48);
			_putchar(a + 48);
			if d == 9
				break;
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar(36);
	_putchar('\n');
}
