#include "main.h"

/**
 *print_alphabet_x10 - Print 10 times the alphabet
 *
 * Return: Always (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while(i <= 10)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
