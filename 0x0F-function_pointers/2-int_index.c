#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array : int
 *
 * @size : int
 *
 * @cmp : int
 *
 * Return: return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	a = 0;

	if (cmp && size && array)
		while (a < size)
		{
			if (cmp(array[a]))
				return (i);
			i++;
		}
	return (-1);

}
