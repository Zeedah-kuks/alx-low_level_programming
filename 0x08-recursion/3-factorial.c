#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number to return the factorial from
 * Return: facrorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
