#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers
 *
 * @i : int
 *
 * Return: return the value 0 or 1
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf ('%d, ', i);
	}
	else
	{
		for (i = n; i >= 98; i--)
			printf ('%d, ', i);
	}
}
