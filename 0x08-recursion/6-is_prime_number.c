#include "main.h"

/**
 * modulo - function modulo
 *
 * @k : unsigned int
 *
 * @n: int
 * Return: return (1)
 *
 */

int modulo(int n, unsigned int k)
{
	if ((n % k) == 0)
		return (0);
	else
		return (1);
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number
 *
 * @n : int
 *
 * Return: return (1)
 *
 */

int is_prime_number(int n)
{
	unsigned int k = n - 1;

	if (n == 2)
		return (1);
	else if (n < 2 && n >= 0)
		return (0);
	else if (n < 0)
		return (is_prime_number(-n));
	else if (modulo(n, k) == 1)
		return (1);
	else if (modulo(n, k) == 0)
		return (modulo(n, k - 1));
	return (0);
}
