#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(width * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) malloc(height * sizeof(int));
	}

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	return (grid);
}
