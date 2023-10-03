#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - create 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: - If width or height is NULL, return NULL.
 *         - If width or height is 0 or negative, return NULL.
 *         - Else, return pointer to grid (Success)
 *                 return 0 id it failes.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (!width || !height || width < 0 || height < 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

