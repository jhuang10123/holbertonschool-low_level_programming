#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	char *v;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		v = va_arg(ap, char*);
		if (v == NULL)
			printf("(nil)");
		else
			printf("%s", v);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}
