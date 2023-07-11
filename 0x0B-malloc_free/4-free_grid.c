#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created
 *
 * @grid : pointer int
 *
 * @height : int
 *
 * Return: return
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);


}
