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

	list_t *b;

	if (!head)
		return;

	a = head;

	while (a)
	{
		b = a->next;
		free(a->str);
		free(a);
		a = b;
	}


}
