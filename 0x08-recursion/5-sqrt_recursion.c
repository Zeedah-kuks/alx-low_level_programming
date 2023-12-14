#include "main.h"
/**
 * sqrt_b - return natural square root of the number
 * @b:the input num
 * @d: iterator
 * Return: square root or -1
 */
int sqrt_b(int b, int d)
{
	if (d * d == b)
	{
		return (b);
	}
	else if (d * d > b)
	{
		return (-1);
	}
	return (sqrt_b(b, d + 1));

}
/**
 * _sqrt_recursion - return the natural square root of the number
 * @n: the input number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_b(n, 0));

}
