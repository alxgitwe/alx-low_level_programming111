#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s : pointer
 *
 * @c: char
 *
 * Return: return NULL or pointer
 *
 */

char *_strchr(char *s, char c)
{
	unsigned int d;

	unsigned int k = sizeof(s);

	for (d = 0; d < k; d++)
		if (s[d] == c)
			break;

	if (s[d] == c)
		return (s + d);
	else
		return (NULL);
}
