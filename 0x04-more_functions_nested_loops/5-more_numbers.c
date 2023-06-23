#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: return
 */

void more_numbers(void)
{
	int i, y, z;

	for (y = 1; y <= 10; y++)
	{
		for (z = 0; z <= 14; z++)
		{
			i = z;
			if (z > 9)
			{
				_putchar (49);
				i = z % 10;
			}
			_putchar (i + 48);
		}
		_putchar('\n');
	}
}
