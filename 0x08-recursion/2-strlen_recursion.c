#include "main.h"
/**
 * _strlen_recursion - A prog that returns the length of a string
 * @s: The string that will be measured
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
