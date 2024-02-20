#include "main.h"
#include <stdlib.h>
/**
 * create_array - Prog that creates an array of charecters
 * @size: input for the size of array in int
 * @c: store the strings of character
 * Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	size_t t;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (t = 0; t < size; t++)
	{
		ptr[t] = c;
	}
	return (ptr);
}
