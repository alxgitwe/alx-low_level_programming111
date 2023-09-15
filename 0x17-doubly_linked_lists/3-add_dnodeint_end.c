#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: adress
 * @n: int
 * Return: return
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a = malloc(sizeof(dlistint_t)), *b;

	if (!head || !a)
		return (a ? free(a), NULL : NULL);

	a->n = n;
	a->next = NULL;
	if (!head)
	{
		a->prev = NULL;
		*head = a;
	}
	else
	{
		b = *head;
		while (b->next)
			b = b->next;
		b->next = a;
		a->prev = b;
	}
	return (a);


}
