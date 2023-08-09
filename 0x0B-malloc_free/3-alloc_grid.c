
/**
* **alloc_grid - create a grid of integers
* @width: width of the grid
* @height: height of the grid
*
* Return: pointer to 2D array (Success)
*         0 (Failure)
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	/* Allocate memory for one pointer to each row */
	grid = (int **)malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		/* Allocate memory for each row */
		grid[i] = (int *)malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

