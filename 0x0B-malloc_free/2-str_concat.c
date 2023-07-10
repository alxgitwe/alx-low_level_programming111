#include "main.h"
#include <stdlib.h>


#include "main.h"

/**
 * _len - length of string
 *
 * @k : string
 *
 * Return: int
 *
 */

int _len(char *k)
{
	int s = 0;

	for (; k[s] != '\0'; s++)
		;
	return (k);

}


/**
 * str_concat - function that concatenates two strings
 *
 * @s1 : pointer char
 *
 * @s2 : pointer char
 * Return: return value
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *j;
	int a, b, c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	a = _len(s1);
	b = _len(s2);
	j = malloc((a + b) * sizeof(char) + 1);
	if (j == 0)
		return (0);
	for (c = 0; c < a + b; c++)
	{
		if (c < a)
			j[c] = s1[c];
		else
			j[c] = s2[c - a];
	}
	j[c] = "\0";
	return (j);

}
