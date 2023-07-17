#include "dog.h"
#include "dog.h"

/**
 * init_dog - function that initialize a variable
 *
 * @d : struct dog
 *
 * @name : char
 *
 * @age : float
 *
 * @owner : char
 *
 * Return: return
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

