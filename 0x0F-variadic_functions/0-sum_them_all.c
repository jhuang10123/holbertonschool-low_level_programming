#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: type of parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = 0;

	for (i = 0; i <= n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	return (sum);
}
