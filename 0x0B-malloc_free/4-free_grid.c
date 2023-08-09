#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the allocated memory
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	for (i = 0; i < height; i++)
	{
		/* Free the allocated memory for each row */
		free(grid[i]);                
	}

	free(grid);
}

