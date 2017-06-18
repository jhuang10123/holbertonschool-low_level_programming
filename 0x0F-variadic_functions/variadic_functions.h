#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * @type: argument type
 * @f: function pointer to argument type
 */
typedef struct identifiers
{
	char *type;
	void(*f)();
}id;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /*VARIADIC_FUNCTIONS_H*/
