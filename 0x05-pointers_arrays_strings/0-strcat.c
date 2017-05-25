#include "holberton.h"
/**
* _strcat - concatenates two strings
* @dest: resulting string
* @src: string to append
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
/* iterate to end of dest */
	while (dest[i] != '\0')
		i++;

/* append scr to dest starting at end of dest(nul) */
/* increment i to add, incr. j to iterate through src */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

/* add nul to end of new dest string */
	dest = '\0';
	return (dest);
}
