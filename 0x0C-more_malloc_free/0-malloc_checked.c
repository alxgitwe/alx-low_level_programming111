#include "main.h"

/**
 * malloc_checked - function that allocates memory
 *
 * @b : int
 *
 * Return: return
 *
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);

}
