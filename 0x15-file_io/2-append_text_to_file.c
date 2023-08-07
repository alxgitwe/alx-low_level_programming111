#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s : char
 *
 * Return: length of a string
 *
 */

int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);
	while (*s++)
		a++;
	return (a);
}

/**
 * append_text_to_file -  function that appends text at the end of a file
 *
 * @filename : char
 *
 * @text_content : char
 *
 * Return: return
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t a = 0;
	int b = 0;
	ssize_t c = _strlen(text_content);

	if (!filename)
		return (-1);

	b = open(filename, O_WRONLY | O_APPEND);
	if (b == -1)
		return (-1);

	if (c)
		a = write(b, text_content, c);
	close(b);
	return (a == c ? 1 : -1);



}
