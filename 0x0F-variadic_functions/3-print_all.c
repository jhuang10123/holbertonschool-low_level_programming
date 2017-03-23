#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * p_char - prints char
 * @args: va_list
 */
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * p_int - prints integer
 * @args: va_list
 */
void p_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * p_float - prints float
 *
 * @args: va_list
 */
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * p_s - prints string
 * @args: va_list
 */
void p_s(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: takes in format
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep;
	va_list args;

	formats types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_s},
		{NULL, NULL},
	};
	va_start(args, format);
	sep = "";

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].type != NULL)
		{
			if (format[i] == types[j].type[0])
			{
				printf("%s", sep);
				types[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
