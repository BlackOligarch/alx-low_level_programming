#include "main.h"

/**
 * _puts - is a function that prints a string
 * @str: is the parameter to the function
 *
 * Return: The pointer *str will be returned
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
