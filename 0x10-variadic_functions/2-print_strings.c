#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator : char
 *
 * @n : int
 *
 * Return: return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int a;
	char *b;
	va_list c;

	a = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(c, n);
	while (a--)
		printf("%s%s", (b = va_arg(c, char *)) ? b : "(nil)",
				a ? (separator ? separator : "") : "\n");
	va_end(c);


}
