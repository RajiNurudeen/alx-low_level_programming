#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int count = 0;
	long first_num = 1, second_num = 2, next_num = second_num;


	while (first_num + second_num < 4000000)
	{
		second_num += first_num;
		if (second_num % 2 == 0)
		{
			next_num += second_num;
		}
		first_num = second_num - first_num;
		++count;
	}
	printf("%ld\n", next_num);
	return (0);
}
