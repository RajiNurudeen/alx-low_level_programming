#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array of element
 * @size: the memory size
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, l;
	char *p;

	i = 0, l = 0;
	if (nmemb == 0 ||  size == 0)
		return (NULL);
	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
