#include "main.h"

/**
 * print_array - print n element of an array
 * @a: first parameter
 * @n: second parameter
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	prinf("\n");
}
