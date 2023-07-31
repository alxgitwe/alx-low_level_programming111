#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 *
 * @h: pointer
 *
 * Return: pointer
 *
 */

size_t listint_len(const listint_t *h)
{
	int a = 0;

	while (h)
	{
		h = h->next;
		a++;
	} return (a);

}
