#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array to be reversed
 * @n:number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1; /* points to last element of a */

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
