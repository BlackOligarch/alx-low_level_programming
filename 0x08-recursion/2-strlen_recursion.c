#include "main.h"

/**
 * _strlen_recursion - function prints string length
 * @s: pointer to a string
 *
 * Return: The length of the no. string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
