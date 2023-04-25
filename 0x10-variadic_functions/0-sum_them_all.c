#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * @...: the parameters to sum
 *
 * Return: the sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);

	return (sum);
}
