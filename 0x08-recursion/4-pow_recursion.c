#include "main.h"

/**
 * _pow_recursion - to calculate the power of any number
 * @x: number to calculate
 * @y: power to raise the number to
 *
 * Return: thhe result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}