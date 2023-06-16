#include <stdio.h>
#include <stdlib.h>
/**
*main - prints all single digit numbers of base 10
*Return: give a return 0 success
*/
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; ++digit)
		putchar(digit);
	putchar('\n');
	return (0);
}
