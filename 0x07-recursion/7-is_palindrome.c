#include "holberton.h"
/**
 * is_palindrome - check if string is palindrome
 * @s: string to be tested
 * Return: 1 palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s)

	char *first = *s;
	char *last = *(s + len -1);
//_strlen_recursion from task
 */
	return (first_is_last(first, last));
}

int first_is_last(char *first, char *last)
{
	if (first != last)
		return (0);
	if (&first == &last)
		return (1);

	return (first_is_last(&first + 1, & last - 1);
}
