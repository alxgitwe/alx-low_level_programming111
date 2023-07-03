#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: return the number of bytes in the initial segment of s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int c;

	int d;

	int i = 0;

	for (c = 0; accept[c] >= '\0'; c++)
		for (d = 0; s[d] >= '\0'; d++)
			if (s[d] == accept[c])
				i++;
	return (i);

}
