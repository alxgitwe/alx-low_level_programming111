#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}

/**
 * *_strcpy - function that copies the string pointed
 *
 * @dest : char
 *
 * @src : char
 *
 * Return: return value dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
 * new_dog - function that creates a new dog
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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *q;

	if (age < 0 || name == NULL || owner == NULL)
		return (NULL);
	q = (dog_t *) malloc(sizeof(dog_t));
	if (q == NULL)
		return (NULL);
	q->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (q->name == NULL)
	{
		free(q);
		return (NULL);
	}
	q->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (q->owner == NULL)
	{
		free(q->name);
		free(q);
		return (NULL);
	}

	q->name = _strcpy(q->name, name);
	q->age = age;
	q->owner = _strcpy(q->owner, owner);

	return (q);
}
