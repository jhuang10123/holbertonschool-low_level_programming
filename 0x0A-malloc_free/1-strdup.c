#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - returns pointer to newly allocated space in memory
 * that contains copy of string given as parameter
 * @str: string
 * Return: NULL of str == NULL or pointer to string
 */
char *_strdup(char *str)
{
	int i;
	int j = _strlen(str);
	char *p;

	if (str == NULL)
		return (NULL);


	p = malloc((sizeof(*str) * j) + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

	if (p == NULL)
	{
		return (NULL);
	}
	p[i] = '\0';

	return (p);
}

/**
 * _strlen - finds string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
