#include "holberton.h"
/**
 * _strpbrk - locates the 1st occurrence in str s of any bytes in str accept
 * @s: string to be searched
 * @accept: string to check against
 * Return: pointer to the byte in s that matches accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
