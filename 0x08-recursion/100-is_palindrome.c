#include "main.h"

/**
 * _strlen_recursion - to get the length of a string
 *
 * @s: string to be returned
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compares 2 strings
 *
 * @s: string
 * @left: minimum iterator
 * @right: maximum iterator
 *
 * Return: integer
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
