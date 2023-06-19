#include "main.h"
#include <stdio.h>

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

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[x] = '\0';
	retrun (s);
}
