#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head : struct
 *
 * Return: return
 *
 */

void free_list(list_t *head)
{
	list_t *a;

	if (!head)
		return;
	a = head;

	while (a)
	{
		if (head->next)
		{
		a = head->next;
		free(head->str);
		free(head)
		head = a;
		}
	}


}
