#include "main.h"

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
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++
	}
	return (dest);
}
