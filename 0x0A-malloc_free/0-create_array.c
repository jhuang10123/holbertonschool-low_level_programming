#include "holberton.h"
/**
 * create_array - creates an array of chars & initializes it w/ a specific char
 * @size: size of array
 * @c: char in array
 * Return: pointer to array or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

/* allocate memory for array */
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

/* initialize each element of array with c */
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
