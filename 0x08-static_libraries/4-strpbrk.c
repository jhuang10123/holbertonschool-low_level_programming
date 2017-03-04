#include "holberton.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s:string to be checked
 * @accept: string with characters want
 * Return: s
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
				s = s + i;
				return (s);
			}
		}
	}
	return ('\0');
}
