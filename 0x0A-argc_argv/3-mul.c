#include "main.h"

/**
 * main - Entry point of the program
 *
 * @argc: The no. of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	results = num1 * num2;

	printf("%d\n", results);

	return (0);
}
