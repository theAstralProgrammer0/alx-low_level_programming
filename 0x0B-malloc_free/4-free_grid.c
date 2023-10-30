#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - Entry Point
  *
  * Description: A function that deallocates memory of a grid that has been
  * previously allocated
  *
  * @grid: Pointer to an array of integer pointers
  *
  * @height: Height of the grid
  *
  * Return: Nothing
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
