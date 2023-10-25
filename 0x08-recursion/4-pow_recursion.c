#include "main.h"

/**
 * _pow_recursion - returns the value of x to power y
 *
 * @x: the value
 * @y: the no. of powers
 *
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
