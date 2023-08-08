#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IROTH | S_IRGRP | S_IWGRP)
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define USAGE "Usage: cp file_from file_to\n"


/**
 * main - main
 *
 * @av : argument
 *
 * @ac : argument
 *
 * Return: return
 *
 */

int main(int ac, char **av)
{
	ssize_t a;
	int f1 = 0;
	int f2 = 0;
	char buffer[READ_BUF_SIZE];

	if (!(ac == 3))
		dprintf(STDERR_FILENO, USAGE), exit(97);
	f1 = open(av[1], O_RDONLY);
	if (!(f1 != -1))
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	f2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, PERMISSIONS);
	if (f2 == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((a = read(f1, buffer, READ_BUF_SIZE)) > 0)
		if (write(f2, buffer, a) != a)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (!(a != -1))
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	f2 = close(f2);
	f1 = close(f1);
	if (f1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, f1), exit(100);
	if (f2)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, f1), exit(100);
	return (EXIT_SUCCESS);




}
