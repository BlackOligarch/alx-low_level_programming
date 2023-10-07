#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: The return value is always 0
 */
int main(void)
{
	int i, j, k, m;
	/* Assign i to 48 */
	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			m = j + 1;
			k = i;
			while (k < 58)
			{
				while (m < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(m);
					if (i < 57 || j < 56 || k < 57 || m < 57)
					{
						putchar(44);
						putchar(32);
					}
					m++;
				}
				m = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
