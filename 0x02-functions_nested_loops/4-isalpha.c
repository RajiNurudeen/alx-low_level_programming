#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: takes in the value
 * Return: Always (Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
