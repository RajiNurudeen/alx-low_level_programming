#include "main.h"

/**
 * _strstr - used to locate a substring
 * @haystack: string to be looped
 * @needle: the string searched for
 *
 * Return: to substring or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] == *haystack)
				return (needle);
		}
		haystack++;
	}
	return (0);
}
