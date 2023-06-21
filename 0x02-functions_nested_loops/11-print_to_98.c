#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from 'i' to 98
 *
 * @n : int
 *
 * Return: return the value 0 or 1
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (int i = n; i < 98; i++)
			printf("%d, ", i);
		printf("98");
		printf("\n");
	}
	else if (n == 98)
	{
		printf("98");
		printf("\n");
	}
	else
	{
		for (int i = n; i > 98; i--)
			printf("%d, ", i);
		printf("98");
		printf("\n");
	}
}
