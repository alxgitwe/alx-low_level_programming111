#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct q - check the code
 *
 * @q : struct
 *
 * @a : function
 */

typedef struct q
{
	char *q;
	void (*a)(char *, va_list);

} q_e;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
