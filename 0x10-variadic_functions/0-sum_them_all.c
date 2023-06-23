#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * @sum_them_all - returns the sum of all its parameters
 * @n - the number of parameters passed to the function
 * @... - a variable number of parameters to calculate the sum of
 *
 * Return - the sum of all paramters
 * 	Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
