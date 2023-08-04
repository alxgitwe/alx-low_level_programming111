#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to
 *
 * @n: int
 *
 * @index: index
 *
 * Return: retunr
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = sizeof(n) * 8;
/*	unsigned long int b = *n & 1L; */

	if (a <= index)
		return (-1);
	if (*n & 1L << index)
		*n = *n ^ 1L << index;
	return (1);


}
