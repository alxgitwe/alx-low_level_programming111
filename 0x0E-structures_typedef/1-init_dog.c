#include "dog.h"

/**
 * init_dog - initialize a dog
 *
 * @d: struct dog
 *
 * @name: char
 *
 * @age: float
 *
 * @owner: char
 *
 * Return: return vod
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

