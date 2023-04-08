#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be searched
 * @accept: string to check its occurence in *s
 *
 * Return: a pointer to the byte in s or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
