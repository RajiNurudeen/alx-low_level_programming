#include "main.h"

/**
 * _strcat - Concatenate two strings together
 * @dest: first parameter
 * @src: second parameter
 * Return: return the pointer (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
