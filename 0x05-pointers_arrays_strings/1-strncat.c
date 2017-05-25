#include "holberton.h"
/**
* _strncat - concatenates two strings
* @dest: resulting string
* @src: string to append
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
/* iterate to end of dest */
	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] += '\0';
	return (dest);
}
