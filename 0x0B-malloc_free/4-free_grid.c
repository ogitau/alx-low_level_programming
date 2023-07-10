#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees 2d grid
 * @grid: the grid to be freed
 * @height: height of the 2d array
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
