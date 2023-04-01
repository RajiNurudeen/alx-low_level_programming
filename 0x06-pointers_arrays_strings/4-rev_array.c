#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: first parameter
 * @n: second parameter
 *
 * Return: it returns 0
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
