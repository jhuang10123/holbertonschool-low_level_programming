#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer
 * Return: none
 */
void print_number(int n)
{
	int lfdg, rdgt, num, exp;

	rdgt = n % 10;
	n = n / 10;
	num = n;
	exp = 1;

	if (rdgt < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		rdgt = -rdgt;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num /= 10;
		}

		num = n;

		while (exp > 0)
		{
			lfdg = num / exp;
			_putchar(lfdg + '0');
			num -= lfdg * exp;
			exp /= 10;
		}
	}
	_putchar(rdgt + '0');
}
