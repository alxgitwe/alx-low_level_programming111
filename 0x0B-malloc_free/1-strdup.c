#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 *
 * @str : char
 *
 * Return: return pointer
 *
 */

char *_strdup(char *str)
{
	char *p;

	int s, j;

	s = 0;
	j = 0;

	if (str == NULL)
		return (NULL);
	for (; str[s] != '\0'; s++)
		;
	p = malloc(s * sizeof(*str) + 1);
	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (; j < s; j++)
			p[j] = str[j];
	}
	return (p);



}
