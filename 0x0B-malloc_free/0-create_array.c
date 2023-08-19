#include "main.h"
#include <stdlib.h>
/**
 * create_array - prog creates an array of characters and
 * assigns it a specific char
 * @size: input for size of the array
 * @c: character to be assigned
 * Return: the pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
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
	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	return (ptr);
}
