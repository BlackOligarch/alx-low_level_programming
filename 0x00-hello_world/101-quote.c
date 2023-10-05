#include <stdio.h>
#include <unistd.h>

/**
 * main - The entry of the program
 * Description: This program prints with 
 * the low level function 'write'
 * Return: The return value is 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}	
