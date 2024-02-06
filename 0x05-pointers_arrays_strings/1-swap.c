#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: int var to swap
 * @b: int var to swap
 *
 * Return: the value of @a & @b
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
