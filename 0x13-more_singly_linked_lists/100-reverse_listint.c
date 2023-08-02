#include "lists.h"

/**
 * reverse_listint - function that reverses a
 *
 * @head : pointer
 *
 * Return: return
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = *head;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	} return (a);



}
