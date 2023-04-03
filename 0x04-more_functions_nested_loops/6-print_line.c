#include "main.h"

/**
 * print_line(int n)
 * @n: number of times the line should be printed
 * Return: return nothing or 0.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
