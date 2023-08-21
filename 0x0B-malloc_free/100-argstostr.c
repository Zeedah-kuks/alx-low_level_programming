#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - prog concatenates all the arguments
 * @ac: the argument count
 * @av: the argument vector
 * Return: pointer to new str, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	char *strPtr;
	int p, q, s = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			len++;
	}
	len += ac;
	strPtr = malloc(sizeof(char) * len + 1);

	if (strPtr == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
		{
			strPtr[s] = av[p][q];
			s++;
		}
		if (strPtr[s] == '\0')
		{
			strPtr[s++] = '\n';
		}
	}
	return (strPtr);
}
