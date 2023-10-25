#include "main.h"

/**
 * prime_a - Calculates a prime
 *
 * @a: value to receive
 * @b: denominator
 *
 * Return: Sucess (0)
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
