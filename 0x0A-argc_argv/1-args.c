#include <stdio.h>

/**
 * main  - a program that prints the number of arguments passed into it
 *
 * @argc : int
 *
 * @argv : char list
 *
 * Return: return (0)
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);

}
