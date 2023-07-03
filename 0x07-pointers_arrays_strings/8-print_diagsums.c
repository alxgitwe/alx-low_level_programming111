#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer
 * @size: pointer
 *
 */

void print_diagsums(int *a, int size)
{
	int b;
	int c = 0;
	int d = 0;

	for (b = 0; b < size; b++)
	{
		c = c + a[b];
		d = d + a[size - b - 1];
		a = a + size;
	}
	printf("%d, ", c);
	printf("%d\n", d);

}
