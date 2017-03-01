#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - print sum of diagnals of a matrix
 * @a: pointer to array
 * @size: size of array
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x <= size * size;  x = (size + 1))
	{
		sum1 = sum1 + a[x];
	}
	for (y = size - 1; y < (size * size) - 1; y = y + (size - 1))
	{
		sum2 = sum2 + a[y];
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
