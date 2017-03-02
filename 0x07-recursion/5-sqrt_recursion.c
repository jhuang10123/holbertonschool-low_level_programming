#include "holberton.h"
/**
 * root - add to parameter, test for sqrt root
 * @n: to be tested
 * @i: multiples of int n
 * Return: natural sqrt root or -1
 */
int root(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
		return (root(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: to be tested
 * Return: natural sqrt root or -1
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	n = root(i, n);
	return (n);
}
