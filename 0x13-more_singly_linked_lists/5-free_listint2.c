#include "lists.h"

/**
 * free_listint2 -  function that frees a
 *
 * @head : pointer
 *
 * Return: pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = *head;

	while (a)
	{
		b = a->next;
		free(a);
		a = b;
	} *head = NULL;



}
