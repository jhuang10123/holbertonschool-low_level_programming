#include "holberton.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s:string to be checked
 * @accept: string with characters want
 * Return: j
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (s[i] == accept[j] && accept[j] != '\0')
		{
			return (s);
			j++;
		}
	}
	return (0);
}
