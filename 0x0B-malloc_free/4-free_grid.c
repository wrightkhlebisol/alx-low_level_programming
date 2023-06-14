#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: Pointer to created grid
 * @height: Height of Grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
