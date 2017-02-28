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
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
	}
	return (needle);
}
