#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sums a & b
  * @a: 1st num
  * @b: 2nd num
  *
  * Return: sum of a & b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts a & b
  * @a: 1st num
  * @b: 2nd num
  *
  * Return: the difference of a & b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies a & b
  * @a: 1st num
  * @b: 2nd num
  *
  * Return: product of a & b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - dvides a & b
  * @a: 1st num
  * @b: 2nd num
  *
  * Return: result of division a/b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Modulo of a & b
  * @a: 1st num
  * @b: 2nd num
  *
  * Return: remainder
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
