#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always (Success)
 */

int main(void)
{
	int i, x = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x += i;
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}
