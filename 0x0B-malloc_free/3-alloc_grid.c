#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Entry Point
  *
  * Description: The function allocates memory dynamically for a grid of a
  * specific width and height
  *
  * @width: Width of grid
  *
  * @height: Height of grid
  *
  * Return: (grid) double pointer to array of integer pointers
  */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
