#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s : string
 *
 * Return: return value of n
 *
 */

int _atoi(char *s)
{
	int n = 0;

	int i = 0;

	int si = 1;

	int l;

	l = _strlen(char *s);

	for (i < l, i++)
	{
		if (*s == '-')
			si = si * -1;
		else
			n = (n * 10) + (*s - 48);
		*S++;
	}
	return (n * si);
}
