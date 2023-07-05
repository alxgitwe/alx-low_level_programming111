#include "main.h"

/**
 * _sqr - returns the natural square
 *
 * @n : int
 *
 * @sq :sq
 *
 * Return: return value of sq
 */


int _sqr(int n, int sq)
{
	if (sq * sq < n)
		return (_sqr(n, sq + 1));
	else if (sq * sq == n)
		return (sq);
	else
		return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 *
 * @n : int
 *
 * Return: return value of _sqrt
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
