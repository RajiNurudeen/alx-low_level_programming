#include "main.h"

/**
 * clear_bit - sets the value of a bit to zero
 * @n: the number to its bit
 * @index: the index of the number
 *
 * Return: 1 (Success), -1(Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
	{
		return (-1);
	}
	num = 1 << index;

	if (*n & num)
	{
		*n ^= num;
	}

	return (1);
}
