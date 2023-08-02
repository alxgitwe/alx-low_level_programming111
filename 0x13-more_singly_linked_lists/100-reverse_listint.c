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
	listint_t *a = NULL;
	listint_t *b = NULL;

	
	a = *head;

	if (!head || !*head)
		return (NULL);
	*head = NULL;

	while (a)
	{
		b = a->next;
		a->next = *head;
		*head = a;
		a = b;
	} return (*head);



}
