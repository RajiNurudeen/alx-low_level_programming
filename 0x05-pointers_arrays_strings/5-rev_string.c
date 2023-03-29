#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string parrameter
 * Return: ALways 0
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
