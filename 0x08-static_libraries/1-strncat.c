#include "holberton.h"
/**
 * *_strncat - concatenate 2 strings
 *
 * @dest: string one
 *
 * @src: string two - following string 1
 *
 * @n: max bytes used from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
