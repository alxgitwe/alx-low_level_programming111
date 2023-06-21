#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers
 *
 * @n : int
 *
 * Return: return the value 0 or 1
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				_putchar(i + '0');
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else
	{
		for (i = n; i > 98; i--)
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				 _putchar(i + '0');
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}