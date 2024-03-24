#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - prog that break string into two
 * @str: contains words to be splited
 * Return: pointer to the new allocated memory in the string
 */
char **strtow(char *str)
{
	char **aout;
	size_t c, height, m, n, j;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		aout = malloc((height + 1) * sizeof(char *));
	}
		if (aout == NULL || height == 0)
		{
			free(aout);
			return (NULL);
		}
	for (m = j = 0; m < height; m++)
	{
		for (c = j; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				j++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[m] = malloc((c - j + 2) * sizeof(char *));
				if (aout[m] == NULL)
				{
				ch_free_grid(aout, m);
				return (NULL);
				}
				break;
			}
		}
		for (n = 0; j <= c; j++, n++)
			aout[m][n] = str[j];
		aout[m][n] = '\0';
	}
	aout[m] = NULL;
	return (aout);
}
