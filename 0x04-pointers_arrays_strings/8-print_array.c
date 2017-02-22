#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print n elements of an array of integers
 *
 * @n: number of elements of the array to be printed
 *
 * @a: pointer
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < (n - 1))
			printf(", ");
	}
	printf("\n");
}
