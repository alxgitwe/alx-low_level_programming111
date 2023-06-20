#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @d : char in ascii
 *
 * Return: Returns the value of the last digit
 */

int print_last_digit(int d)
{
	int n;

	n = d % 10;

	if (n >= 0)
	{
		_putchar (n + 48);
		return (n);
	}

	else
	{
		_putchar (-n + 48
		return (-n);
	}
}
