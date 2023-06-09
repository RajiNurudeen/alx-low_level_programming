#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number for which the factorial is returned
 *
 * Return: an integer
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
