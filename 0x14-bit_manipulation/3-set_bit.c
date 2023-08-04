#include "main.h"

/**
 * set_bit - function that sets the value of a bit to
 *
 * @n : int
 *
 * @index : int
 *
 * Return: return
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = sizeof(n) * 8;

	if (a <= index)
		return (-1);
	return (!!(*n = *n | 1l << index));

}
