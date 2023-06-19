#include "main.h"

/**
 * flip_bits - flips the bit of one number for another
 * @n: the number to flip
 * @m: the number to get
 *
 * Return: number of flip done
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count;
	unsigned long int num;
	unsigned long int flip_num;

	flip_num = n ^ m;
	count = 0;
	i = 63;
	while (i >= 0)
	{
		num = flip_num >> i;
		if (num & 1)
		{
			count++;
		}
		i--;
	}
	return (count);
}
