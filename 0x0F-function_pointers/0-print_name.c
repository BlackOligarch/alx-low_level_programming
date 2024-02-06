#include "function_pointers.h"

/**
  * print_name - Prints a name
  *
  * @name: The name to print cahr
  * @f: Pointer to the function
  *
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
