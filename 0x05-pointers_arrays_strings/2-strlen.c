#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: takes in the parameter
 * Return: an integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
