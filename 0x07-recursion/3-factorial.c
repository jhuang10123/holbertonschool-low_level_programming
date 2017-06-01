#include "holberton.h"
/**
* factorial - finds factorial of a given number
* @n: given number
* Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	n = n * factorial(n - 1);
	return (n);
}
