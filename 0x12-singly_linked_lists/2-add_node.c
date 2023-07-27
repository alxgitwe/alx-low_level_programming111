#include "lists.h"

/**
 * add_node - function that adds a new node
 *
 * @head : struct
 *
 * @str : char
 *
 * Return: return
 *
 */

list_t *add_node(list_t **head, const char *str)
{
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
	a->next = *head;
	*head = a;
	return (a);

}
