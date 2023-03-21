#include <stdio.h>
/**
 * main -- Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit, plus;

	for (digit = '0'; digit < '9'; digit++)
	{
		for (plus = digit + 1; plus <= '9'; plus++)
		{
			if (plus != digit)
			{
				putchar(digit);
				putchar(plus);
				if (digit == '8' && plus == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

