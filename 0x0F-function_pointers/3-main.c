#include "3-calc.h"

/**
 * main - a function
 *
 * @argc : int
 *
 * @argv : char
 *
 * Return: return
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), i, j;

	if (argc != 4)
		printf("Error\n"), exit(98);
	j = atoi(argv[3]);
	i = atoi(argv[1]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && !b)
		printf("Error\n"), exit(100);
	print("%d\n", op_func(i, j));
	return (0);

}
