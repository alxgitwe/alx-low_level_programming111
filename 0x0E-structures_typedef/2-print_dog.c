#include "dog.h"

/**
 * print_dog - function that prints
 *
 * @d : struct
 *
 * Return: return
 *
 */

void print_dog(struct dog *d)
{
	if ((d->name == NULL) || (d->age == NULL) || (d->owner == NULL))
		printf("nil");
	else if (d->name == NULL)
		printf("Name: (nil)");


}
