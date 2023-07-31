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

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);

}
