#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing alphABET
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char cas;

	for (cas = 'a'; cas <= 'z'; cas++)
		putchar(cas);

	for (cas = 'A'; cas <= 'Z'; cas++)
		putchar(cas);
	putchar('\n');

	return (0);
}
