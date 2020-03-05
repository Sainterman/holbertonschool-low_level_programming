#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid previousluy created by alloc_grid
 * @grid: address to first in grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
