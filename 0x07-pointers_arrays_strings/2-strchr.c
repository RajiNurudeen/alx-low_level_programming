#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String that contains the character to locate
 * @c: the character to locate
 * Return: conditional return function
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0; 
	while (s[i] != '\0')
	{
		if  (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
