#include "lists.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s : char
 *
 * Return: length of a string
 *
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}


/**
 * print_list - function that prints all the elements
 *
 * @h : struct
 *
 * Return: return
 *
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	int b = _strlen(h->str);

	while (h->str != NULL)
	{
		printf("[%d] %s\n", b, h->str);
		h = h->next;
		a++;
	}

	if (h->str == NULL)
	{
	printf("[0] (nil)");
	}
	return (0);

}
