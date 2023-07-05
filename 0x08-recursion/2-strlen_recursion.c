#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s : pointer
 *
 * Return: return value (lenght)
 *
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s != '\0')
		l =  _strlen_recursion(s++) + 1;
	return (l);
}
