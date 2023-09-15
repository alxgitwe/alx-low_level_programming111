#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: adress
 * @index: int
 * Return: return
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);

}
