#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a
 *
 * @n : int;
 *
 * @index : int;
 *
 * Return: return;
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(index) * 8 <= index)
		return (-1);

	return (n >> index & 1);



}
