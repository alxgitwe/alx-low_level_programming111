#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position
 *
 * @head : list
 *
 * @idx : int
 *
 * @n : int
 *
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a = malloc(sizeof(listint_t));
	listint_t *b;
	unsigned int c = 0;

	if (!head || !a)
		return (NULL);

	a->n = n;
	a->next = NULL;
	b = *head;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}

	while (b)
	{
		if (c == idx - 1)
		{
			a->next = b->next;
			b->next = a;
			return (a);
		} c++;
		b = b->next;
	} free(a);
	return (NULL);
}


