#include "main.h"

/**
 * factorial - returns the factorial of a given no.
 *
 * @n: the factorial no.
 *
 * Return: nth factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
