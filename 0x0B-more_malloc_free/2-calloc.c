#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: number of bytes in each element
 * Return: pointer to address of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
		return (NULL);

	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
