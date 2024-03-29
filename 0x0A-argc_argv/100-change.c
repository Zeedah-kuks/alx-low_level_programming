#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prog that prints minimum num of coins
 * to make change for an amount of money
 * @argc: num of command line arg..
 * @argv: array that contains command line arg..
 * Return: Always (0) Success
 */
int main(int argc, char **argv)
{
	int cents, mncoin = 0;

	if (argc ==  1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 5;
		else if (cents >= 1)
			cents -= 1;
		mncoin += 1;
	}
	printf("%d\n", mncoin);
	return (0);
}
