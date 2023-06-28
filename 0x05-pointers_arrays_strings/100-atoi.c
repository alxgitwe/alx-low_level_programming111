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

	for (int i = 0; *s[i] != '\0'; i++)
	{
		if (*s[i] == '-' || *s[i] == '+')
			continue;
		else
			n = n * 10 + (*s[i] - 48);
	}
	return (n);
}
