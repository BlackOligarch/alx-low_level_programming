#include <stdio.h>

/**
 * main -The entry to the porgram
 * Description: This program prints all single
 * digit numbers of base 10
 * Return: The return value is 0
 */
int main(void)
{
	int i = 48;
	/* beginning of the while loop */
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
