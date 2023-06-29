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
	int c;
	int d;

	for (b = 0; c = (n - 1); b < c; b++; c--)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;

	}

}
