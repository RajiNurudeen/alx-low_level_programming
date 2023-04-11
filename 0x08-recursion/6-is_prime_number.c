#include "main.h"

/**
 * _prime_actual - Checks if the number is a prime number
 * @n: the number to check
 * @i: the iterator
 *
 * Return: 1 or 0
 */

int _prime_actual(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (_prime_actual(n, i + 1));
}

/**
 * is_prime_number - calls the function _prime_actual
 *@n: the value checked
 *
 * Return: value of the prime number
 */

int is_prime_number(int n)
{
	return (_prime_actual(n, 1));
}
