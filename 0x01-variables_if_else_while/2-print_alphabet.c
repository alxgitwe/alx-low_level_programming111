#include <stdio.h>
/**
*main - prints the alphabet in lowercase, followed by a new line
*Return: give a return 0 success
*/
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
		putchar("%c \n", alphabet);
	return (0);
}
