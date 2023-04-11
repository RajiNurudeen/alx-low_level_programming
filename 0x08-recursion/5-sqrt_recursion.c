#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * @i: first paraameter of the actual sqrt
 * @n: the number to find it's natural root
 *
 * Return: the natural square root
 */

int _sqrt_actual(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_actual(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt_actual(n, 1));
}
