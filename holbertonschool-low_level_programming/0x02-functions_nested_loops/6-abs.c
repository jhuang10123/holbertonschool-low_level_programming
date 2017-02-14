#include <stdio.h>
#include "holberton.h"
/**
 * _abs - absolute value
 * Description: print abs. value of any integer
 * @n: any integer
 * Return: n
 */
int _abs(int n)
{
	if  (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
