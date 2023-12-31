#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum
 *
 * @n : arguments
 *
 * @... : sum
 *
 * Return: return
 */

int sum_them_all(const unsigned int n, ...)
{
	int a, b;

	va_list c;

	a = 0;

	b = n;

	if (!n)
		return (0);
	va_start(c, n);
	while (b--)
		a += va_arg(c, int);
	va_end(c);
	return (a);

}
