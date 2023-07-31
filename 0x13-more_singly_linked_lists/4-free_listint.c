#include "lists.h"

/**
 * free_listint - function that frees a
 *
 * @head : pointer
 *
 * Return: pointer
 *
 */

void free_listint(listint_t *head)
{
	listint_t *a;

	while (a)
	{
		a = head->next;
		free(head);
		head = a;
	}


}
