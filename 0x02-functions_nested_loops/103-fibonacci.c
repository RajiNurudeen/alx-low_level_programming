#include <stdio>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	count = 0;
	long first_num, second_num;
	long next_num = second_num;

	first_num = 1, second_num = 2;
	while (first_num + second_num < 4000000)
	{
		second_num += first_num;
	       if (next_num % 2 == 0)
	       {
		       next_num += second_num;
		       first_num = second num - first_num;
	       }
	       count++;
	}
	printf("%lu\n", next_num);
	return (0);
}
