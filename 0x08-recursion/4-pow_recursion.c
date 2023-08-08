#include "main.h"
/**
 * _pow_recursion - The prog will return the value of x raise to the power of y
 * @x: The value of int to be raised
 * @y: The power
 *
 * Return: The result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
