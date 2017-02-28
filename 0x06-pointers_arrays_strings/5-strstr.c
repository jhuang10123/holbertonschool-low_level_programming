#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack:string to be searched
 * @needle: short string
 * Return:needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			return (needle + j);
		}
	}
	return ('\0');
}
