#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * *@n: the nuber of bytes
 *
 * Return: memory copied with the n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int u = n;

	for (; t < u; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
