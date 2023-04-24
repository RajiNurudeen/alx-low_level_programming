#include "function_pointers.h"

/**
 * int_index - it searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: points to the function to be used
 *
 * Return: first element or (0)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
