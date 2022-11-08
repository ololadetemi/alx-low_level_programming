#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a 2d array of integers
 * @grid: the 2d array to be frrd
 * @height: heigh of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
