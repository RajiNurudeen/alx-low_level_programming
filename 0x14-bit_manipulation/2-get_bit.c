#include "main.h"

/**
 * get_bit - the value of the bit
 * @n: the number to get its bit
 * @index: the index for the value
 *
 * Return: bit value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	a = 0;
	while (a < 63)
	{
		if (index == a)
		{
			return (n & 1);
		}
		n >>= 1;
		a++;
	}
	return (-1);
}
