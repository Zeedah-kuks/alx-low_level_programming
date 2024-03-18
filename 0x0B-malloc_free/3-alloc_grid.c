#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prog that returns a pointer to a 2 dimension array
 * @width: the width of array
 * @height: the height of array
 * Return: pointer to an array of int
 */
int **alloc_grid(int width, int height)
{
	int m, n;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		gridout[m] = malloc(width * sizeof(int));
		if (gridout[m] == NULL)
		{
			for (m--; m >= 0; m--)
			free(gridout);
			free(gridout[n]);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)

		for (n = 0; n < width; n++)
			gridout[m][n] = i0;
	return (gridout);
}