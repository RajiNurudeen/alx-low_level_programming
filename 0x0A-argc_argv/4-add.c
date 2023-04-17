#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - Adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * 
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *e;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			e = argv[i];

			j = 0;
			while (j < strlen(e))
			{
				if  (e[j] < 48 || e[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			sum += atoi(e);
			e++;

			i++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
