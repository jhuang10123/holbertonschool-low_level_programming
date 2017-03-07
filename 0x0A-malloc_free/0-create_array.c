#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create & initialize array of chars with a specific char.
 * @size: size of array
 * @c: character
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == NULL)
		return (NULL);

	p = malloc(sizeof(char) * size);
	for (i = 0; i <= size; i++)
	{
		p[i] = c;
	}

	return (p);
}
