#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: adress
 * @idx: int
 * @n: int
 * Return: return
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a = *h;
	dlistint_t *b;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		a = a->next;
		if (a == NULL)
			return (NULL);
	}

	if (a->next == NULL)
		return (add_dnodeint_end(h, n));

	b = malloc(sizeof(dlistint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	b->prev = a;
	b->next = a->next;
	a->next->prev = b;
	a->next = b;

	return (b);


}
