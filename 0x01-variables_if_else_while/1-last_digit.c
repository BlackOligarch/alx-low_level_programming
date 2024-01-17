#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - The entry point of the program
 *Description: This program prints the last random number
 *stored in the variable n as output
 *
 *Return: The return value of this program is 0
 */
int main(void)
{
	int n;

	/* Creating a new variable l_n to store the last number */
	int l_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* modulo n to get the last number */
	l_n = (n % 10);
	/* Conditional Logic for n & l_n */
	if (l_n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, l_n);
	else if (l_n == 0)
	printf("Last digit of %d is %d and is 0\n", n, l_n);
	else if (l_n < 6 && l_n != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_n);
	return (0);
}
