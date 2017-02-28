#include "holberton.h"
/**
 * _strspn - gets length of a prefix substring
 *
 * @s: longer string
 * @accept: shorter string
 * Return: i
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
			}
		}
	}

	return (count);
}
