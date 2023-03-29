#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array
 * @a: first parameter
 * @n: second parameter
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
