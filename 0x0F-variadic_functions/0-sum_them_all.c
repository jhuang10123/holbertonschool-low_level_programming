#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter to sum
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, k;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		k = va_arg(ap, int);
		sum += k;
	}
	va_end(ap);

	return (sum);
}
