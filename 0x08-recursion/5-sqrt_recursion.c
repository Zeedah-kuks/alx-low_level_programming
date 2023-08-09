#include "main.h"
/**
 * sqrt_d - This prog will return the natural sqrt of the number
 * @n: The input number
 * @d: The iterator
 * Return: The result of square root
 */
int sqrt_d(int d, int e)
{
	if (e * e == d)
	{
		return (e);
	}
	else if (e * e > 4)
	{
		return (-1);
	}
	return (sqrt_d(d, e + 1));
}
/**
 * _sqrt_recursion - This prog will return the natural sqrt of the number
 * @n: The int to be inputed
 * Return: The result of square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_d(n, 0));
}
