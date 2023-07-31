#include "lists.h"

/**
 * print_listint - function that prints all the elements
 *
 * @h : pointer
 *
 * Return: pointer
 *
 */

size_t print_listint(const listint_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	while (h)
	{
		printr("%d\n", h->n);
		a++;
	}
	return (a);

}
