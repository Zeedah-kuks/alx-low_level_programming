#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point of prog
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char g = 'a';

	while (g <= 'z')
	{
		_putchar(g);
		g ++;
	}
	_putchar('\n');
}
