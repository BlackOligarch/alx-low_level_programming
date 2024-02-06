#include <stdio.h>

/**
 * main - The entry point of the program
 * Description: This program prints an alphabet in
 * lowercase followed by a newline
 *
 * Return: The return value is 0
 */
int main(void)
{
	int l = 97;
	/* while loop begins */
	while (l < 123)
{
	putchar(l);
	l++;
}
	putchar('\n');
	return (0);
}

