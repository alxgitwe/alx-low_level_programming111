#include "main.h"

/**
 * mm - function to memory 
 *
 * @b : char
 *
 * @e : char
 *
 * @c : int
 *
 * Return: return
 *
 */

char *mm(char *b, char e, unsigned int c)
{
	char *q = b;

	while (c--)
		*b++ = e;
	return (q);
}

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

	unsigned int c = nmemb * sizeof(int);

	void *d;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * sizeof(int));
	if (d == 0)
		return (NULL);
	mm(d, 0, c);
	return (d);
}
