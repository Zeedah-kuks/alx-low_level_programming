#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Prog that creates an array of integers
 * @min: minimum value
 * @max: mavmimum value
 * Return: the integer pointer to the allocated memmory
 */
int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
