#include "holberton.h"
/**
 * _strstr - finds 1st occurrence of the substring
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
			if (haystack[i + j] == needle[j])
			{
	 /* printf("haystack = %s, i = %d\n", haystack, i);*/
	 /*  printf("%s\n", haystack + i); */
				return (haystack + i);
			}
				else
					break;
			if (needle[j] == '\0')
				return (NULL);

		}
	}
		return (NULL);

}
