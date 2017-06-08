#include "holberton.h"
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * string_nconcat - concatenates two strings up to n byte of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concatenate
 * Return: pointed to conatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	int len1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
/*	len2 = _strlen(s2); */

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);

/* copies s1 to ptr */
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

/* copies s2 to ptr up to n bytes */
	for (j = 0; j <= n; j++)
		ptr[i] = s2[j];

	return (ptr);
}
