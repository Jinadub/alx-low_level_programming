#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid previously created
 *
 * @grid: Previously created grid
 *
 * @height: Number of columns
 *
 * Return
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(*(grid + a));
	}
	free(grid);
}
