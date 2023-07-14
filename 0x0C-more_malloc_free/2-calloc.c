#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb : int
 *
 * @size : int
 *
 * Return: return
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char b;
	unsigned int c = nmeb * sizeof(int);

	void *d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * sizeof(int));
	if (d == 0)
		return (NULL);
	while (c--)
		*d++ = 0;
	return (d);

}
