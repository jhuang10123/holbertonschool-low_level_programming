#include "holberton.h"
/**
 * *_strcpy - copy string
 *
 * @dest: new string
 *
 * @src: old string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		src[i] = dest[i];
	}
	dest[i] = 0;
	return (dest);
}
