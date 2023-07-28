#include <stdio.h>
/**
 * main - Entry point of prog
 * Return: Always 0 (Success)
 */

int main(void)
{
		char g;

		g = 'a';
		while
			(g <= 'z') {
				if ((g != 'q' && g != 'e') && g <= 'z') putchar(g);
				g++;
			}
		putchar('\n');
		return (0);
}
