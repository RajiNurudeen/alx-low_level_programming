#include "function_pointers.h"

/**
 * array_iterator - executes functions given as parameter
 * @array: the array to iterate
 * @size: the size of the array
 * @action: points to the fuction in use
 *
 * Return: Success (0)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while  (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}