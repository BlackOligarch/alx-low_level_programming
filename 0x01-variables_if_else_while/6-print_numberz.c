#include <stdio.h>

/**
 * main - The main entry of the program
 * Description: This program prints base 10 numbers
 * using putchar
 *
 * Return: The return value is 0
 */
int main(void)
{
	int i = 48;
	/* while loop begins */
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
