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
	char buffer[READ_BUF_SIZE * 8];
	int a;
	ssize_t b;

	if (!letters || !filename)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	b = read(a, &buffer[0], letters);
	b = write(STDOUT_FILENO, &buffer[0], b);
	close(a);
	return (b);
}
