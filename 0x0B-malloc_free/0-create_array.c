#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create and intialises an array of chars
 * @size: number of memory
 * @c: size of memory
 *
 * Return: a pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
