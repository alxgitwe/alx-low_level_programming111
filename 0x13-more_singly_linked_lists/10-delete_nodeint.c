#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 *
 * @head : list;
 *
 * @index : int;
 *
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a;
	listint_t *b;

	unsigned int c = 0;

	if (!head || !index)
		return (-1);
	a = *head;

	while (a)
	{
		if (c == index)
		{
			b->next = a->next;
			free(a);
			return (1);
		} c++;
		b = a;
		a = a->next;
	} return (-1);


}
