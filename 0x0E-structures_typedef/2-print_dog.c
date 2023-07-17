#include <stddef.h>
#include <stdio.h>
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
	if ((d->name == NULL) || (d->age == 0) || (d->owner == NULL))
		printf("nil");
	else if (d->name == NULL)
		printf("Name: (nil)");


}
