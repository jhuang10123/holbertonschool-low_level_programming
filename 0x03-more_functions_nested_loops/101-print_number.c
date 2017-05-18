#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * Return: none
 */
void print_number(int n)
{
	int number, exponent, div, last_digit;

	exponent = 0;
	last_digit = n % 10;

	while (n > 10)
	{
		number = n / 10;
		exponent += 1;
	}

number = 


	_putchar(number);
}


check for neg, add neg back
save exponent to separate variable
