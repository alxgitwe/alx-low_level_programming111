#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 *
 * @array : int
 *
 * @size : size_t
 *
 * @action : function
 *
 * Return: return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int q = array + size - 1;

	if (action && size && array)
		while (array <= q)
			action(*array++);
}
