#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The no. of arguments passed to the program
 * @argv: The array of string containing the
 * arguments passed to the program
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* Business rules */
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	printf("%d\n", coins);

	return (0);
}
