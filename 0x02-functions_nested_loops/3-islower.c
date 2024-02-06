#include "main.h"

/**
 * _islower - program checks if char is lowercase
 * @c: is the char to be checked
 *
 * Return: Return value is 1 if char is lowercase
 * but 0 if it isn't
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
