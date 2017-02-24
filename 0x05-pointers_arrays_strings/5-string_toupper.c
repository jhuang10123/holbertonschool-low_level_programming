#include "holberton.h"
/**
 * *string_toupper - changes string to uppercase
 * @ar: array
 * Return: uppercase
 */
char *string_toupper(char *ar)
{
	int i = 0;

	while (ar[i] != '\0')
	{
	if (ar[i] >= 'a' && ar[i] <= 'z')
	{
		ar[i] -= 32;
	}
	i++;
	}
	return (ar);
}
