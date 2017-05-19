#include "holberton.h"
/**
 * _strcpy - copies a string
 * @dest: copied string
 * @src: source string
 * Return: copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest += '\0';
	return (dest);
}
