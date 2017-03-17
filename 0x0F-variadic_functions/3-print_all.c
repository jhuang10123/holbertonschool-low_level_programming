#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	va_start(ap, format);

	while (format != NULL)
	{
		
	}
	va_end(ap);
}
