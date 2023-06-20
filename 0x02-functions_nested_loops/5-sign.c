#include "main.h"
/**
 * print_sign  - start of the program function that prints the sign of a number
 *
 * 5-sign.c : prints the sign of a number
 *
 * @n :a number
 *
 * Return: return the value 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);

	}


}
