#include "lists.h"

/**
 * print_dlistint - function
 * @h: adress
 * Return: return
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
