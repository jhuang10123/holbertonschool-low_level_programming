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


	str = va_arg(valist, char *);

	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("(nil)");

		if (separator == NULL || i < (n - 1))
			printf("%s%s", str, separator);

		else
			printf("%s", str);
	}
	va_end(valist);
	printf("\n");
}
