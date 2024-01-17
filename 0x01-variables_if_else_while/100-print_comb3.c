#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: The return value is 0
 */
int main(void)
{
	int i = 48;
	int j = 48;
	/* while loop begins */
	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
