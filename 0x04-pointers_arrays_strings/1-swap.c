#include "holberton.h"
/**
 * swap_int - swap values of 2 integers
 *
 * @a: 1st integer
 *
 * @b: 2nd integer
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
