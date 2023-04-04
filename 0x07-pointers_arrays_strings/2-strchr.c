#include "main.h"

/**
 * strchr - locates a character in a string
 * @s: String that contains the character to locate
 * @c: the character to locate
 * Return: Return s where c is spotted
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
