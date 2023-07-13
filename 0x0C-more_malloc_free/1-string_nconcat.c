#include "main.h"

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
	unsigned int lts1, lts2;
	unsigned int a, b;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (lts1 = 0; s1[lts1] != '\0'; lts1++)
		;
	for (lts2 = 0; s2[lts2] != '\0'; lts2++)
		;
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
