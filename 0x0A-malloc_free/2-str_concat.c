#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1, following contents of s2
 * @s2: string 2
 * Return: NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = 0; j < len2; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';

	return (p);

}
