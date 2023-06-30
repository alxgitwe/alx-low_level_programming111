#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @s : pointer
 *
 * Return: return (t)
 *
 */
char *leet(char *s)
{
	char *t = s;

	char d[] = {'4', '3', '0', '7', '1'};

	char l[] = {'a', 'e', 'o', 't', 'l'};

	char L[] = {'A', 'E', 'O', 'T', 'L'};

	unsigned int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == l[i] || *s == L[i])
				*s = d[i];
		}
		s++;
	}

	return (t);
}
