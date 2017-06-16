#include "variadic_functions.h"
/**
 * print_int - prints integer
 * @valist: argument passed in
 */
void print_int(va_list valist)
{
	printf("%d", va_args(valist, int));
}
/**
 * print_char - prints char
 * @valist: argument passed in
 */
void print_char(va_list valist)
{
	printf("%c", va_args(valist, int));
}

/**
 * print_float - prints float
 * @valist: argument passed in
 */
void print_float(va_list valist)
{
	printf("%f", va_args(valist, double));
}

/**
 * print_str - prints string
 * @valist: argument passed in
 */
void print_char(va_list valist)
{
	printf("%s", va_args(valist, char *));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list valist;

	id list[]{
		{'c', print_char},
		{'d', print_int},
		{'f', print_float},
		{'s', print_str},
		{NULL, NULL}
	};

	va_start(valist, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == list.type)
		{
			printf(", ");
			return (list.f);
		}
	}
}
