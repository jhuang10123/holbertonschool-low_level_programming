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

	while (haystack[i] != '\0')
	{
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			if (*haystack != '\0');
			return (haystack);
		}
	}
	return ('null');
}
