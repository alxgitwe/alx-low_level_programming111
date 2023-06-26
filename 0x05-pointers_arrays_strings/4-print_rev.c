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
	for (i >= 0; int j = 0; j <= i; j++)
	{
		int c[];

		c[j] = s[i];
		_putchar(c[j]);
		i--;
	}
	_putchar('\0');
}

