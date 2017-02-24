#include "holberton.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0; /* points to 1st element of array*/
	j = n - 1; /* points to last elements of array*/

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}

}
