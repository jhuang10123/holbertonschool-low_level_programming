#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to 1 value
 * @b: pointer to other value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
