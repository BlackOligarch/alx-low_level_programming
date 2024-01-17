#include "main.h"

/**
 * power_root - return the square root of a no.
 *
 * @n: value
 * @c: count variable
 *
 * Return: the square root/ -1
 */

int power_root(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	return (power_root(n, c + 1));
}
/**
 * _sqrt_recursion - returns the square rootof a no.
 *
 * @n: value
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (power_root(n, 0));
}
