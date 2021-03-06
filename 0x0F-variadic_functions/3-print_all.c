#include "variadic_functions.h"
/**
 * print_int - prints integer
 * @valist: argument passed in
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * print_char - prints char
 * @valist: argument passed in
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_float - prints float
 * @valist: argument passed in
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_str - prints string
 * @valist: argument passed in
 */
void print_str(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator;
	va_list valist;

	id list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(valist, format);

	separator = "";

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (list[j].type != NULL)
		{
			if (format[i] == list[j].type[0])
			{
				printf("%s", separator);
				list[j].f(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);

}
