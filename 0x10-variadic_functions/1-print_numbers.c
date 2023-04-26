#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @seperator: the string to be printed between numbers
 * @n: the number of integer passed to the function
 * @...: the numbers to be printed
 *
 * Return: Success (0)
 */

void print_numbers(const char *seperator, unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(num);
}
