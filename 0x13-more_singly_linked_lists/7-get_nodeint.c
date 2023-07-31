#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 *
 * @head : pointer
 *
 * @index: int
 *
 * Return: pointer
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a;
	unsigned int b = 0;

	a = head;

	while (a && b < index)
	{
		a = a->next;
		b++;
	}
	return (a);

}
