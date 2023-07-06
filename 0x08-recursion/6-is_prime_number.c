#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number
 *
 * modulo - function modulo
 *
 * @n : int
 *
 * Return: return (1)
 *
 */

int is_prime_number(int n)
{
	int k = 2;

	if (n == 2)
		return (1);
	else if (n < 2 && n >= 0)
		return (0);
	else if (n < 0)
		return (is_prime_number(n * -1));
	int modulo(n, k)
	{
		if (k == n)
			break;
		else if ((n % k) == 0)
			return (1);
		else
			return (modulo(n, k + 1));
	return (0);
}
