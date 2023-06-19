#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: sum or 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: difference or 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product or 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division or 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the modulus
 * @a: first number
 * @b: second number
 *
 * Return: reminder or 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
