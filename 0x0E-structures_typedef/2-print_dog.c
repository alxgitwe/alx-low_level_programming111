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
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else if (d->name == NULL)
		printf("Name: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
