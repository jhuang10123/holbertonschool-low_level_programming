#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * p_char - prints char
 * @c: char
 */
void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * p_int - prints integer
 * @i: int
 */
void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * p_float - prints float
 *
 * @f: float
 */
void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * p_s - prints string
 * @s: string
 */
void p_s(va_list s)
{
	char *str;

	str = va_arg(s, char*);
	if (*str == '\0')
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - function that prints anything
 * @format: types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep;
	va_list ap;

	formats types[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_s},
		{NULL, NULL},
	};
	va_start(ap, format);
	sep = "";
	i = j = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (types[j].type != NULL)
		{
			if (format[i] == *(types[j]).type)
			{
				printf("%s", sep);
				types[j].f(ap);
				sep = ",";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
