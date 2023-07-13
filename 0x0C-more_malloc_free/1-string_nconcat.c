#include "main.h"


/**
 * _lt - function that return lenght
 *
 * @a : string
 *
 * Return: return
 *
 */

int _lt(char *c)
{
	int d;

	for (d = 0; c[d] != '\0'; d++)
		;
	return (d);

}



/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1 : string
 *
 * @s2 : string
 *
 * @n : int
 *
 * Return: return
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1s2;
	int lts1 = _lt(s1);
	int lts2 = _lt(s2);
	unsigned int a, b;

	if (lts1 == 0)
		s1 = "";
	if (lts2 == 0)
		s2 = "";
	s1s2 = malloc(lts1 + n + 1);
	if (s1s2 == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		s1s2[a] = s1[a];
	for (b = 0; b < n ; b++)
	{
		s1s2[a] = s2[b];
		a++;
	}
	s1s2[a] = '\0';
	return (s1s2);


}
