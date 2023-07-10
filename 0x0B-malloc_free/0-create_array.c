#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @c : char
 *
 * @size: int
 * Return: pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (s == 0 || size == 0)
		return (NULL);
	while (size--)
		s[size] = c;

	return (s);

}
