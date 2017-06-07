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
 * _strdup - duplicate str
 * @str: string to be duplicated
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * _strlen(str));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	ptr[i] += '\0';
	return (ptr);
}
