#include "holberton.h"
/**
* _pow_recursion - finds value of x raised to the power of y
* @x: value
* @y: power
* Return: value of x raised to y, or -1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	x = x * (_pow_recursion(x, y - 1));
	return (x);

}
