#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: return
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');

}
