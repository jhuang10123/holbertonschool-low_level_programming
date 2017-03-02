#include "holberton.h"
/**
 * factorial -returns factorial of an integer
 * @n: inreger to be tested
 * Return: factorial or -1 for error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
