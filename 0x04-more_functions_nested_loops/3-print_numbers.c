#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: Always (Success)
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
