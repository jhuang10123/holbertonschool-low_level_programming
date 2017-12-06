#include "search_algos.h"
/**
 * print_array - prints an array of int
 * @array: array to be printed
 * @start: starting point
 * @end: ending point
 */
void print_array(int *array, size_t start, size_t end)
{
  size_t i;

  printf("Searching in array: ");

  for (i = start; i < end; i++)
    printf("%d, ", array[i]);
  printf("%d\n", array[end]);
}
/**
 * binary_search - uses binary search to
 * search for a value in an array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
  size_t mid, left, right;

  if (array == NULL || size <= 0)
    return (-1);

  left = mid = 0;
  right = size - 1;

  while (left <= right)
    {
      print_array(array, left, right);
      mid = (right + left) / 2;
      if (value == array[mid])
	return (mid);
      else if (value < array[mid])
	{
	  right = mid - 1;
	}
      else
	{
	  left = mid + 1;
	}

    }
  return (-1);
}
