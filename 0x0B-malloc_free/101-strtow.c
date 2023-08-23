#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * ch_free_grid - main entry of prog
 * @grid: the input
 * @height: the input
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid);
	}
}
/**
 * strtow - prog divides string into two
 * @str: the string with divided words
 * Return: a pointer to the new array of strings
 */
char **strtow(char *str)
{
	char **strPtr;
	unsigned int a, height, b, d, f;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = height = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
	{
		strPtr = malloc((height + 1) * sizeof(char *));
	}
		if (strPtr == NULL || height == 0)
		{
			free(strPtr);
			return (NULL);
		}
	for (b = f = 0; b < height; b++)
	{
		for (a = f; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				f++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				strPtr[b] = malloc((a - f + 2) * sizeof(char));
				if (strPtr[b] == NULL)
				{
				ch_free_grid(strPtr, b);
				return (NULL);
				}
				break;
			}
		}
		for (d = 0; f <= a; f++, d++)
			strPtr[b][d] = str[f];
		strPtr[b][d] = '\0';
	}
	strPtr[b] = NULL;
	return (strPtr);
}
