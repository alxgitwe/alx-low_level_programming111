#include "main.h"


/**
 * _lt - function that return lenght
 *
 * @a : string
 *
 * Return: return
 *
 */

int _lt(char *a)
{
	int a;

	for (a = 0; l[a] != '\0'; a++)
		;
	return (a);

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
	int lts1 = _lt(*s1);
	int lts2 = _lt(*s2);
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
	for (j = 0; j < n ; j++)
	{
		s1s2[a + 1] = s2[j];
		i++;
	}
	s1s2[a] = '\0';
	return (s1s2);


}
