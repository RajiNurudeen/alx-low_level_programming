#include "main.h"

/**
 * _sqrt_actual - the fuction for the actual square root
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
	
	return (_sqrt_actual(n, i + 1));
}

/**
 * _sqrt_recursion - ccalls the actual square root function
 * @n: parameter that takes the value
 * Return: the square root value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_actual(n, 1));
}
