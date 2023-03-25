#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: parameter  to be checked
 *
 * Return: Always (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
