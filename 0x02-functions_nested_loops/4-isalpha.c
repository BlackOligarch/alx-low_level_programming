#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 * @c: the character to be checked.
 * Return: 1 if c is a letter 0r 0 otherwise.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
