#include <stdio.h>

/**
 * main - The entry point of the program
 * Description: The program prints the alphabets in
 * lowercase and uppercase
 *
 * Return: The return value is 0
 */
int main(void)
{
	int l = 97;
	int u = 65;
	/* The while loop starts here */
	while (l < 123)
	{
		putchar(l);
		l++;
	}
	while (u < 91)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
