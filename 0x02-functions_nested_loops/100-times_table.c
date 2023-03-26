#include "main.h"

/**
 * print_times_table - print a time table
 * @n: parameter that determine the table
 *
 * Return: Always (Success)
 */

void print_times_table(int n)
{
	int  num, prod, res;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (prod = 1; prod <= n; prod++)
			{
				_putchar(',');
				_putchar(' ');
				res = num * prod;
				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

