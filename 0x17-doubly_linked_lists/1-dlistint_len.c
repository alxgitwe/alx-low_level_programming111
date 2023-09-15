#include "lists.h"

/**
 * dlistint_len - function
 * @h: adress
 * Return: return
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a)
}

}
