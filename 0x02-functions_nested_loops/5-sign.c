#include "main.h"

/**
 * sign.c - print the sign of a number
 * @n: take the parameter input
 *
 * Return: Always (Success)
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
