#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return:  0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');

	return (0);
}
