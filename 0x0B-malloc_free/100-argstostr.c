#include "main.h"
#include <stdlib.h>

/**
 * _lenght - function that return lenght
 *
 * @l : string
 *
 * Return: return
 *
 */

int _lenght(char *l)
{
	int i;

	for (i = 0; l[i] != '\0'; i++)
		;
	return (i);

}






/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac : int
 *
 * @av : char
 *
 * Return: return
 *
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *ab;

	if (av == NULL || ac == 0)
		return (NULL);
	for (a = 0; a < ac; a++; b++)
		b = b + _len(av[a]);

	ab = malloc((b + 1) * sizeof(char));
	if (ab == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (c = 0; av[a][c] != '\0'; c++; c++)
			ab[c] = av[[a][c];
		ab[c] = '\n';
		c++;
	}
	ab[c] = '\0';
	return (ab);
}
