#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the allocated memory
 * @height: height of the grid
 * @grid: the allocated grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		/* Free the allocated memory for each row */
		free(grid[i]);
	}

	free(grid);
}

