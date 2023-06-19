#include "function_pointers.h"

/**
 * print_name - it prints a name
 * @name: the name to be printed
 * @f: points to the function
 *
 * Return: Success (0)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
