#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers & \n
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);

}
