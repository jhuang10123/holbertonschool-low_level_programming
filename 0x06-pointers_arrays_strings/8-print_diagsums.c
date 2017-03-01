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
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= (size * size);  i = (size + 1))
	{
		sum1 = sum1 + a[i];
	}
	for (j = 0; j < size * size - 1; j = j + (size - 1))
	{
		sum2 = sum2 + a[j];
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
