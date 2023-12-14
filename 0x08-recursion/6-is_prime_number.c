#include "main.h"
/**
 * prime_c - Calculate if a number is a prime
 * @c: input num
 * @d: divisor
 * Return: (0) Success
 */
int prime_c(int c, int d)
{
	if (c <= 1 || (c != d && c % d == 0))
		return (0);
	else if (c == d)
		return (1);
	return (prime_c(c, d + 1));
}
/**
 * is_prime_number - checks if the int is a prime num
 * @n: input number
 * Return:0 or 1
 */
int is_prime_number(int n)
{
	return (prime_c(n, 2));
}
