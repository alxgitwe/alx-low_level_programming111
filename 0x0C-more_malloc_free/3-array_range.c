#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min : int
 *
 * @max : int
 *
 * Return: return
 *
 */

int *array_range(int min, int max)
{
	int a, b, *c;

	if (min > max)
		return (NULL);
	b = 1 + max - min;
	c = malloc(b * sizeof(int));

	if (!c)
		return (NULL);
	for (a = 0; a < b; a++)
		c[a] = min++;
	return (c);


}
