#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - contains a copy of string as parameter
 * @str: string parameter
 *
 * Return: duplicated string oor null
 */

char *_strdup(char *str)
{
	int x;
	int i;
	char *s;

	x = 0;
	i = 1;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);

	if  (s == NULL)
		return (NULL);

	while (x < i)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}
