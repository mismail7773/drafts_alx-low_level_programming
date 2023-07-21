#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - draft
 * @n: draft
 * Return: draft
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(p, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
