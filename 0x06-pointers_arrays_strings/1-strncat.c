#include "main.h"

/**
 * _strncat - Concate strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: Always character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
