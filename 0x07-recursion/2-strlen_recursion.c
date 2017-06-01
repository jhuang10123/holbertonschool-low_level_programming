#include "holberton.h"
/**
* _strlen_recursion - finds string length
* @s: string
* Return: string length
*/
int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
		return (0);

	count = 1;

	count += _strlen_recursion(s + 1);
	return(count);
}
