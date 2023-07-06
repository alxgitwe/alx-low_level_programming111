#include "main"

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
	int k;

	if (n == 2)
		return (1);
	else if (n < 2 && n >= 0)
		return (0);
	else if (n < 0)
		return (is_prime_number(n * -1));
	for (k = 2; k < n; k++)
	{
		if (n % k == 0)
			break;
		return (1);
	}
	return (0);
}
