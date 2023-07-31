#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 *
 * @head : pointer
 *
 * Return: pointer
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *a;

	int b;

	if (!head)
		return (0);
	a = (*head)->next;
	b = (*head)->n;
	free(*head);
	*head = a;
	return (b);



}
