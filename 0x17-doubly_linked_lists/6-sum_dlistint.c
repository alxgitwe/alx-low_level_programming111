#include "lists.h"

/**
 * head - function
 * @head: adress
 * Return: return
 */

int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	while (head)
	{
		a = a + head->n;
		head = head->next;
	}
	return (a);

}
