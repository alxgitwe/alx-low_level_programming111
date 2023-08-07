#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it to the
 *
 * @filename : pointer char
 *
 * @letters : struct
 *
 * Return: return
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[8 * READ_BUF_SIZE];
	int a;
	ssize_t b;

	if (!letters || !filename)
		return (0);
	a = open(filename, 0_RDONLY);
	if (a == -1)
		return (0);
	b = read(a, &buffer[0], letters);
	b = write(STDOUT_FILENO, &BUFFER[0], b);
	close(a);
	return (b);
}
