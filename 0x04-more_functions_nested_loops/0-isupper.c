#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: takes in argument to check
 * Return: Always (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <=90)
	{
		return (1);
	}
	return (0);
}
