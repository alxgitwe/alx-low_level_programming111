#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 *
 * @c: character
 *
 * Return: return the value 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
