#include "main.h"
/**
 * print_alphabet - start of the program it prints the alphabet, in lowercase
 *
 * 1-alphabet.c :prints the alphabet, in lowercase, followed by a new line
 *
 * Return: return the value 0
 */



void print_alphabet(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
