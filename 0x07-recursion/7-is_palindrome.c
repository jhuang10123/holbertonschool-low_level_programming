#include "holberton.h"
/**
 * _strlen_recursion - return length of string - previous task
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	i = (_strlen_recursion(s + 1));
	return (i + 1);
}

/**
 * first_is_last - checks first and last characters of string
 * @first: frist char of string
 * @last: last char of string
 * Return: value or recursive fcn.
 */
int first_is_last(char *first, char *last)
{
	if (*first != *last)
		return (0);
	else if (first >= last)
		return (1);

	return (first_is_last(first + 1, last - 1));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string to be tested
 * Return: 1 palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	char *first = s;
	char *last = (s + len - 1);

	return (first_is_last(first, last));
}
