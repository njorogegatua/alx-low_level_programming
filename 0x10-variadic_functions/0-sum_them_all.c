#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: the number of parameters
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list aps;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(aps, n); /*va_start is called with two arguments*/

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(aps, int);
	}
	va_end(aps);

	return (sum);
}

