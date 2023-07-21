#include "variadic_functions.h"


/**
 * q_char - function char
 *
 * @separator : char
 *
 * @aa : pointer
 */

void q_char(char *separator, va_list aa)
{
	printf("%s%c", separator, va_arg(aa, int));

}

/**
 * q_int - function char
 *
 * @separator : char
 *
 * @aa : pointer
 */

void q_int(char *separator, va_list aa)
{
	printf("%s%d", separator, va_arg(aa, int));

}

/**
 * q_float - function char
 *
 * @separator : char
 *
 * @aa : pointer
 */

void q_float(char *separator, va_list aa)
{
	printf("%s%f", separator, va_arg(aa, double));

}

/**
 * q_string - function char
 *
 * @separator : char
 *
 * @aa : pointer
 */

void q_string(char *separator, va_list aa)
{
	char *b = va_arg(aa, char *);

	switch ((int)(!b))
		case 1:
			b = "(nil)";
	printf("%s%s", separator, b);

}




/**
 * print_all - function that prints anything
 *
 * @format : char
 *
 * @... : string
 *
 * Return: return
 */

void print_all(const char * const format, ...)
{
	int a, b;
	char *ba = "";
	va_list aa;

	q_e qq[] = {
		{"c", q_char},
		{"i", q_int},
		{"f", q_float},
		{"s", q_string},
		{NULL, NULL}
	};

	a = 0;

	va_start(aa, format);
	while (format[a] && format)
	{
		b = 0;
		while (qq[b].q)
		{
			if (format[a] == qq[b].q[0])
			{
				qq[b].a(ba, aa);
				ba = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(aa);


}

