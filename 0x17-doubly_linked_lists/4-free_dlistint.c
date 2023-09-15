#include "lists.h"

/**
 * free_dlistint - function
 * @head: adress
 * Return: return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head)
	{
		a = head;
		head = head->next;
		free(a);
	}


}
