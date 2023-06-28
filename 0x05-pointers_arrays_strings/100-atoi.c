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

	while (*s++)
	{
		if (*s == '-' || *s == '+')
			continue;
		else
			n = (n * 10) + (*s - 48);
		i++;
	}
	return (n);
}
