#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - prog frees 2 dimensional grid previously created
 * @grid: address of the 2 dimensional array of ints
 * @height: the height of grid
 * Return: none
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		free(grid[height]);
		free(grid);
	}
}
