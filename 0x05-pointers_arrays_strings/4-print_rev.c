#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line
 *
 * @s : string
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	i--
	while (i != 0)
	{
		char *c = s;

		_putchar(*(c + i));
		i--;
	}
	_putchar('\0');
}

