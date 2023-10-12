#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list j;
	unsigned int i, sum = 0;

	va_start(j, n);

	for (i = 0; i < n; i++)
		sum += va_arg(j, int);

	va_end(j);

	return (sum);
}
