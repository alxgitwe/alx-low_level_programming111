#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_dog - function that frees dogs
 *
 * @d : struct
 *
 * Return: return
 *
 */


void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}


