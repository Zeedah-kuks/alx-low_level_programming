#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - prog that returns a pointer to
 * dimensional array of int
 * @width: the width of array
 * @height: the height of array
 * Return: NULL if width or height is 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
	}
	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(width * sizeof(int));
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(gridout[a]);
			free(gridout);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;
	return (gridout);
}
