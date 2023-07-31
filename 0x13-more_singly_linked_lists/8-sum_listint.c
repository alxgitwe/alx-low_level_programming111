#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 *
 * @head : pointer
 *
 * Return: pointer
 *
 */

int sum_listint(listint_t *head)
{
	int b = 0;

	if (!head)
		return (0);
	while (head)
	{
		b = b + head->n;
		head = head->next;
	}
	return (b);




}
