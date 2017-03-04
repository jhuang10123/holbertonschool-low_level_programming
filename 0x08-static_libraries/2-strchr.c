#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: character located
 * Return: occurance of c or null
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
		return (0);
}
