#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to function
 */
/* NEED CORRECTION */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{

		if (va_arg(ap, char*) == NULL)
			printf("(nil)");

		printf("%s", va_arg(ap, char*));

		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}
