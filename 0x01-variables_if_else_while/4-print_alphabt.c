#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the alphabet in lowercase, followed by a new line
*Return: give a return 0 success
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	putchar('\n');
	return (0);
}
