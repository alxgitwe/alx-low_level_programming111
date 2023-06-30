#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @s : pointer
 *
 * Return: return (t)
 *
 */

int *leet(char *s)
{
	char *t = s;

	char d[] = {'4', '3', '0', '7', '1'};

	char l[] = {'a', 'e', ''o', 't', 'l'};

	char L[] = {'A', 'E', 'O', 'T', 'L'};


	while (*s)
	{
		unsigned int i;

		for (i = 0; i < sizeof(d) / sizeof (char); i++)
		{
			if (*t == l[i] || * == L[i])
				*s = d[i] + 48;
		}
		s++;
	}
	return (t);
}
