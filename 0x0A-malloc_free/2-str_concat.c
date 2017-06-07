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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len;
	char *ptr;

	len = _strlen(s1) + _strlen(s2) + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

/* ptr[i] at end of s1, start here s1 left off at ptr[i] */
	for (j = 0; s2[j] != '\0'; i++, j++)
		ptr[i] = s2[j];

	ptr[i] = '\0';
	return (ptr);
}
