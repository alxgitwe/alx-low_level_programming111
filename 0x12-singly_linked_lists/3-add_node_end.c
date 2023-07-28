#include "lists.h"

/**
 * add_node_end - function that adds a new node
 *
 * @head : struct
 *
 * @str : char
 *
 * Return: return
 *
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *b = *head;
	list_t *a = malloc(sizeof(list_t));


	if (!a || !head)
		return (NULL);
	if (str)
	{
		a->str = strdup(str);
		if (!a->str)
		{
			free(a);
			return (NULL);
		} a->len = _strlen(a->str);
	}

	if (!b)
		*head = a;

	else if (b)
	{
		while (b->next)
		{
			b = b->next;
		} b->next = a;
	}
	return (a);


}
