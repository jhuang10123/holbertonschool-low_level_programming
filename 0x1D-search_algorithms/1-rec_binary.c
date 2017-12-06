#include "search_algos.h"
/**
 * rec_binary_search - searches recursively for a value in array
 * @array: array to be searched
 * @left: start of array
 * @right: end of array
 * @value: value to be searched
 * Return: index or -1
 */
int rec_binary_search(int *array, int left, int right, int value)
{
  int mid = 0, i = 0;


  printf("Searching in array: ");
  mid = left + (right - left) / 2;

  if (array[mid] == value)
    {
      printf("mid = %d\n", mid);
      return (mid);
    }
  /* for (i = left; i < right - 1; i++) */
  /*   printf("%d, ", array[i]); */
  /* printf("%d\n", array[right - 1]); */

  else if (array[mid] > value)
    {
      for (i = left; i < mid; i++)
	printf("%d, ", array[i]);
      printf("%d\n", array[mid]);
      return(rec_binary_search(array, left, mid - 1, value));
    }
  else
    {
      for (i = mid; i < right; i++)
	printf("%d, ", array[i]);
      printf("%d\n", array[right - 1]);
      return(rec_binary_search(array, mid + 1, right, value));
    }
  return (-1);

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
  int right, left;
  size_t i;

  right = size - 1;
  left = 0;
  if (array == NULL)
    return (-1);

  printf("Searching in array: ");
  for(i = 0; i < size - 1; i++)
    printf("%d, ", array[i]);
  printf("%d\n", array[size - 1]);
  printf(" value = %d\n", value);

  return (rec_binary_search(array, left, right, value));

}
