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
	int a = 0;

	while (h->str != NULL)
	{
		int b;

		_putchar(91);
		_putchar(_strlen(h->str + 48);
		_putchar(93);
		_putchar(32);

		for (b = 0; b <= _strlen(h->str; b++)
			_putchar(h->str);
		h = h->next;
	}

	if (h->str == NULL)
	{
	printf("[0] (nil)");
	return (0);
	}

}
