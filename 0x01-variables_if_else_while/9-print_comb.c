#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: The return value is always 0
 */
int main(void)
{
	int i = 48;
	/* while lopp begins */
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
