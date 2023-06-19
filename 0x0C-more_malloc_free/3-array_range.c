#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: new array or NULL
 */

int *array_range(int min, int max)
{
	int *n, i;

	i = 0;
	if (min > max)
		return (NULL);
	n = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (n == NULL)
		return (NULL);
	while (min <= max)
	{
		n[i] = min;
		i++;
		min++;
	}
	return (n);
}
