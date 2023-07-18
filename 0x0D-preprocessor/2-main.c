#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 *
 * Return: return
 *
 */

int main(void)
{
	char q = __FILE__;

	printf("%s\n", q);
	return (0);

}

