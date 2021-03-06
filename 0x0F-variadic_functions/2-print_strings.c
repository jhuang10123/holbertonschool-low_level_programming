#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator:string to be printed between numbers
 * @n:number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			str = "(nil)";

		if (separator == NULL || i == (n - 1))
			printf("%s", str);

		else
			printf("%s%s", str, separator);
	}
	va_end(valist);
	printf("\n");
}
