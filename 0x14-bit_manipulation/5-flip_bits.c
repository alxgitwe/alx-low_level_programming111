#include "main.h"

/**
 * flip_bits - function that returns the number of
 *
 * @n : int
 *
 * @m : int
 *
 * Return: return
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = m ^ n;
	unsigned int b = 0;
	unsigned long int c = 1ul;

	while (a)
	{
		if (a & c)
			b++;
		a = a >> 1;
	} return (b);




}
