#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @separator : char
 *
 * @n : int
 *
 * @... : int
 *
 * Return: return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a;
	va_list b;

	a = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(b, n);
	while (a--)
		printf("%d%s", va_arg(b, int),
			a ? (separator ? separator : "") : "\n");
	va_end(b);

}
