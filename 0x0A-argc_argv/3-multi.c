#include "main.h"
#include <stdio.h>

/**
 * _atoi - used to convert string to integer
 * @s: string parameter
 *
 * Return: the converted n
 */

int _atoi(char *s)
{
	int i;
	int d;
	int n;
	int f;
	int len;
	int digit;

	i = 0;
	d = 0;
	f = 0;
	len = 0;
	digit = 0;
	n = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			
			if (d % 2)
			{
				digit =- digit;
			}
			n = n * 10 + digit;
			f = 1;
			
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies second and third arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int mul;
	int first_num;
	int second_num;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	first_num = _atoi(argv[1]);
	second_num = _atoi(argv[2]);
	mul = first_num * second_num;

	printf("%d\n", mul);

	return (0);
}
