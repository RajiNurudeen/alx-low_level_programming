#include "main.h"

/**
 *print_alphabet - print he alphabets
 *
 *Return: Always (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}