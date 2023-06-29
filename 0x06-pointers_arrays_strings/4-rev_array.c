#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a : pointer
 * @n : int
 *
 * Return: return (dest)
 *
 */

void reverse_array(int *a, int n)
{
	int b;
	int c = n - 1;
	int d;

	for (b = 0; b < n / 2; b++)
	{
		d = a[b];
		a[b] = a[c];
		a[c--] = d;

	}

}
