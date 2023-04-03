#include "main.h"

/**
 * print_line(int n)
 * @n: number of times the line should be printed
 * Return: return nothing or 0.
 */

void print_line(int n)
{
	int i;

	i = 0;
	do
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else if (n > 0)
		{
			_putchar('_');
		}
		i++;
	}
	while ( i < n);
	_putchar('\n');
}
