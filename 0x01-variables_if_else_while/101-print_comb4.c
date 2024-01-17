#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: The return value is always 0
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	/* while begins here */
	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55 || j < 56 || k < 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
