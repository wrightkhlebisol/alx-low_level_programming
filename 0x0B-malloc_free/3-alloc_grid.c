#include "main.h"

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int *));
		i++;
	}
	return (grid);
}
