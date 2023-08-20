#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - prog to concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the pointer to the concatenated string
 * the memory was allocated for.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int b1, b2, j, k;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	b1 = 0;
	while (s1[b1] != '\0')
	{
		b1++;
	}
	b2 = 0;
	while (s2[b2] != '\0')
	{
		b2++;
	}
	ptr = malloc(sizeof(char) * (b1 + b2));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; j < b1; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; k <= b2; k++)
	{
		ptr[j] = s2[k];
		j++;
	}
	return (ptr);
}
