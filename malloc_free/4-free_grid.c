#include <stdlib.h>

/**
* free_grid - frees a 2D array
* @grid: pointer of pointer -  'grid to free'
* @height: int - height of the grid to free
* Return: void
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
