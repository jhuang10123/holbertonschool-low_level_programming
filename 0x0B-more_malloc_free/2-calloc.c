#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: memory needed for array
 * @size: size of elements
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	int i, totalsize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(totalsize);
	if (p == NULL)
		return (NULL);



	return (p);

}
