#include "lists.h"

/**
 * add_dnodeint - function
 * @head: adress
 * @n: int
 * Return: return
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a = malloc(sizeof(dlistint_t));

	if (!head || a)
		return (a ? free(a), NULL : NULL);
	a->n = n;
	a->prev = NULL;
	if (!*head)
	{
		*head = a;
		a->next = NULL;
	}
	else
	{
		a->next = *head;
		(*head)->prev = a;
		*head = a;
	}
	return (a);



}
