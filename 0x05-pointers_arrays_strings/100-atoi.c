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

	int si = 1;

	while (*s++)
	{
		if (*s == '-')
			si = si * -1;
		else if (*s >= '0' && *s <= '9')

			n = (n * 10) + (*s - 48);
		else if (num > 0)
			break;
	}
	return (n * si);
}
