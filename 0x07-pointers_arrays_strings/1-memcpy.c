#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: pointer where the n bytes is copied to
 * @src: pointer from which n bytes is copied
 * @n: takes the number of bytes
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	i = 0;
	j = n;
	while (i < j)
	{
		dest[i] = src[i];
		n--;
		i++;
	}

	return (dest);
}
