#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * and adds a newline
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;
	/* Initialize i */
	i = 0;
	/* while loop begins */
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
