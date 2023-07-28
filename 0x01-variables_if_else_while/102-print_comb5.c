#include <stdio.h>
#include <stdlib.h>
/**
 * main - This prog prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, d;

	for (b = 0; b < 100; b++)
	{
		for (d = 0; d < 100; d++)
		{
			if (b < d)
			{
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				putchar(' ');
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				if (b != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
