#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: pointer for b
 * @b: constant byte b to be filled
 * @n: memory bytes size
 * Return: returns the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}

