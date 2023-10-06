#include <stdio.h>

/**
 * main - The entry point of the program
 * Description: The program prints the alphabets in lowercase
 * escept for q & e
 *
 * Return: Return value must be 0
 */
int main(void)
{
	int l = 97;
	/* while loop starts here */
	while (l < 123)
	{
		if (l != 101 && l != 113)
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
