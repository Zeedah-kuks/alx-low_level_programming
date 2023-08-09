#include "main.h"
/**
 * _strlen_recursion - To get the length of the string
 * @s: the string
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * measure_string - To measure the character of each string
 * @s: string
 * @a: the smallest iterator
 * @z: the largest iterator
 * Return: the int
 */
int measure_string(char *s, int a, int z)
{
	if (*(s + a) == *(s + z))
	{
		if (a == z || a == z + 1)
			return (1);
		return (0 + measure_string(s, a + 1, z - 1));
	}
	return (0);
}
/**
 * is_palindrome - To determine if a string is a palindrome
 * @s: The string to be tested
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (measure_string(s, 0, _strlen_recursion(s) - 1));
}
