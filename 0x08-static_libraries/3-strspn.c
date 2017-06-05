#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: bytes to check for string s
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;

			}

		}
		if (s[i] != accept[j])
		break;
	}
	return (count);
}
