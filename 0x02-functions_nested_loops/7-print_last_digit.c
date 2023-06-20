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
	if (d > -10 && d < 10)
	{
		return (d);
	}

	else
	{
		return (d % 10);
	}
}
