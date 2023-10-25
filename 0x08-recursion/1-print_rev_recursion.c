#include "main.h"

/**
 * print_rev_recursion - the function prints a string in reverse
 *
 * @s: is a pointer to a string
 *
 * Return: void
 */

void print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
