#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocate old memory to new memory
 * @ptr: old pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: new pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nptr;
	char *helppt;

	if (new_size == 0)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		{
			if (nptr == NULL)
				return (NULL);
		}
		return (nptr);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	helppt = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = helppt[i];
	}
	else
		for (i = 0; i < new_size; i++)
			nptr[i] = helppt[i];

	free(ptr);

	return (nptr);
}
