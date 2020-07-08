#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - free a 2D dimansional grid
 * @grid: pointer 
 * @height:  columns.
 **/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
