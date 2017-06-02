#include "holberton.h"
/**
 * _root - check for squareroot
 * @n: number to check
 * @i: multiple
 * Return: squareroot or -1
 */
int _root(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i >= n)
		return (-1);

	return (_root(n, i + 1));
}

/**
* _sqrt_recursion - finds natural square root of a number
* @n: given number
* Return:squareroot of n, or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_root(n, 1));
}
