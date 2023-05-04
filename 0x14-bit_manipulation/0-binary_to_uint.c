#include <unistd.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 *
 * Return: the unsigned integer in base 10
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int base;
	int length;

	if (!b)
	{
		return (0);
	}

	length = 0;
	while (b[length] != '\0')
	{
		length++;
	}

	num = 0;
	length--;
	base = 1;
	while (length >= 0)
	{
		if (b[length] & 1)
		{
			num = num + base;
		}
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		length--;
		base *= 2;
	}
	return (num);
}

