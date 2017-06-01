#include "holberton.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, left_sum, right_sum;

	left_sum = 0;
	right_sum = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + 1;
		left_sum = *(a + k);

		for (j = 0; j < size; j++)
		{
			k = (j * size) + size - 1 - j;
			right_sum = *(a + k);
		}

	}
	printf(" %d, %d\n", left_sum, right_sum);
}
