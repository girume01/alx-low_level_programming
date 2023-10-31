#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a 2D array
 * @grid: 2D grid.
 * @height: height dimension of grid.
 * Return: grid.
 */
void free_grid(int **grid, int height)
{
	int y;

	y = 0;
	while (y < height)
	{
		free(grid[y]);
		y++;
	}
	free(grid);
}
