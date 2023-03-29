#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps thhe value of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
