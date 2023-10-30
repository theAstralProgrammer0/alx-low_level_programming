#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) calloc(width, sizeof(int *));

	if (grid == NULL)
		return (NULL);
	
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) calloc(height, sizeof(int));
	}

	return (grid);
}
