#include "main.h"

/**
 * isdigit - checks for a digit
 * @c: takes in the parameter to check
 * Return: Always (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
