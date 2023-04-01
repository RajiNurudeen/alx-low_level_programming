#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: returns a character
 */

char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	i = 0;
	/* Check through the string */
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			/* Check and replace the letters of string s in letter and replace with leet */
			if (letter[j] == s[i])
			{
				s[i] = leet[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}

