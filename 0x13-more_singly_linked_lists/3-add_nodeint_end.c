#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a
 *
 * @head: pointer
 *
 * @n: int
 *
 * Return: pointer
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a = malloc(sizeof(listint_t));
	listint_t *b = malloc(sizeof(listint_t));

	if (!*head || !a)
		return (NULL);
	a->n = n;
	b = *head;

	while (b->next)
	{
		b = b->next;
	} b->next = a;
	return (a);


}
