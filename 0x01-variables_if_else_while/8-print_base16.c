#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: The return value is always 0
 */
int main(void)
{
	int i = 0;
	/* while loop starts here */
	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar('\n');
	return (0);
}
