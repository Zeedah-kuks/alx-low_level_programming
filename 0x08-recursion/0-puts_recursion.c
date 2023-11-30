#include "main.h"
/**
 * _puts_recursion - a prog that prints a string
 * @s: Input
 * Return: 0 Success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
