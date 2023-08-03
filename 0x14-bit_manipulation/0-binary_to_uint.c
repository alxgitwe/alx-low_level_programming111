#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 *
 * @b : char
 *
 * Return: return
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (!b)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		a = (*b++ - '0') + a * 2;
	} return (a);

}
