#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * Description: return pointer -> point to newly
 * allocated memory containing s1, first n bytes,
 * s2, null terminated.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (len2 < n)
		n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = 0; j < n; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';

	return (p);

}
