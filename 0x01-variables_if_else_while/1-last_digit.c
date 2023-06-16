#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - check if a number is less than 6 or greater than 5 or zero
*Return: give a return 0 success
*/
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	/* your code goes there */
	if (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	return (0);
}
