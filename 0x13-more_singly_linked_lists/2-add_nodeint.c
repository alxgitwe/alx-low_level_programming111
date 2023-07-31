#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a
 *
 * @head : pointer
 *
 * @n: int
 *
 * Return: pointer
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a = malloc(sizeof(listint_t));

	if (!head || !a)
		return (NULL);

	a->n  = n;
	a->next = NULL;

	if (*head)
		a->next = *head;

	*head = a;
	return (a);



}
