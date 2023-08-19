#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - prog returns the pointer and duplicates
 * the string held to a new space
 * @str: inpt char
 * Return: on success pointer to the duplicated str,
 * NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	int c, d;
	char *strdout;

	if (str == NULL)

	{
		return (NULL);
	}
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	strdout = (char *)malloc(sizeof(char) * (c + 1));
	if (strdout == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < c; d++)
	{
		strdout[d] = str[d];
	}
	return (strdout);
}
