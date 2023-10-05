#include <stdio.h>

/**
 * main - Entry of the main function
 * Description: The function prints the size of data types
 * using the sizeof keyword
 *
 * Return: The return value is always (0)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n" (int) sizeof(a));
	printf("Size of a int: %lu byte(s)\n" (int) sizeof(b));
	printf("Size of a long int: %lu byte(s)\n" (int) sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n" (int) sizeof(d));
	printf("Size of a float: %lu byte(s)\n" (int) sizeof(f));
	return (0);
}
