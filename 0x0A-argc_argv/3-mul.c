#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the multiplication of two numbers
 * @argc: number if arguments
 * @argv: array of arguments
 *
 * Return: 0 foor Success and 1 for Error
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int mul;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		pprintf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
