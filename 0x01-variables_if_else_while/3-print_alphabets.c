#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the alphabet in lowercase and  uppercase, followed by a new line
*Return: give a return 0 success
*/
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; ++lowercase)
		putchar(lowercase);

	for (uppercase = 'A'; uppercase <= 'Z'; ++uppercase)
		putchar(uppercase);
	putchar('\n');
	return (0);
}
