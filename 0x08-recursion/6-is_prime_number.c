#include "main.h"
/**
 * prime_c - Should be calculated if its a prime number
 * @c: the input
 * @d: the divisor
 * Return: (0) Success
 */
int prime_c(int c, int d)
{
	if (c <= 1 || (c != d && c % d == 0))
	{
		return (0);
	}
	else if (c == d)
	{
		return (1);
	}
	return (prime_c(c, d + 1));
}
/**
 * is_prime_number - Should be found if its a prime number
 * @n: The number to be inputed
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_c(n, 2));
}
