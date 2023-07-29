#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
