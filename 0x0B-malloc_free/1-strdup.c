#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Prog returns a pointer to a newly allocated space in memory
 * and also duplicates the string it hold to the new space
 *
 * @str: the initial input string
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	size_t m, n;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}

	strdout = (char *)malloc(sizeof(char) * (m + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (n = 0; n <= m; n++)
	{
		strdout[n] = str[n];
	}
	return (strdout);
}
