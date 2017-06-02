#include "holberton.h"
/**
 * _strlen - finds length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _check_palindrome - check if 2 chars are equal
 * @s: string to be checked
 * @i: index for beginning of string
 * @j: index for end of string
 * Return: 1 or 0
 */
int _check_palindrome(char *s, int i, int j)
{

	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	else
		return(_check_palindrome(s, i + 1, j - 1));
}

/**
* is_palindrome - check if string is palindrome
* @s: string
* Return: 1 if palindrome, else 0
*/
int is_palindrome(char *s)
{
	int len;
	len = _strlen(s) - 1;

	return (_check_palindrome(s, 0, len));
}
