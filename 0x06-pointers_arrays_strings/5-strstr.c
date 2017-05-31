#include "holberton.h"
/**
 * _strstr - finds 1st occurrence of the substring needle in the string haystack
 * @haystack: string to be searched
 * @needle: substring
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{

			}

		}
	}

}
/* take care of null */
