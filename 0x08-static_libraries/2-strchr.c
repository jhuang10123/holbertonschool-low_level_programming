#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: characters in interest
 * Return: pointer to occurence of char c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;

	if (*s == c)
		return (s);

	return (0);
}
