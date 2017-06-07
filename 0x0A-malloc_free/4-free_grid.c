#include "holberton.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid to be freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(*grid);
}
