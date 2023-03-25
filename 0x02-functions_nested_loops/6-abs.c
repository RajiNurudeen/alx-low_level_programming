#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: initialize the number to be computed
 *
 * Return: Always (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		int new_num;

		new_num = n * -1;
		return (new_num);
	}
	return (n);
}

