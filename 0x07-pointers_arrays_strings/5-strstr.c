#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack : pointer
 *
 * @needle: pointer
 *
 * Return: return pointer
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	for (*haystack != '\0'; haystack++)
	{
		*a = haystack;
		*b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (b != '\0')
			return (haystack);
	}
	return (0);
}
