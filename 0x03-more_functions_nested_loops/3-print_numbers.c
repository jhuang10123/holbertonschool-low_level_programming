#include "holberton.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 - 9
 * Return: none
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);

	_putchar('\n');
}
