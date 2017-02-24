#include "holberton.h"
/**
 * *cap_string - capitalizes all words in a string
 *
 * @cap:
 *
 * Return: char
 */
char *cap_string(char *cap)
{
	int i;
	char c;

	while (cap[i] != '\0')
	{
		c = cap[i - 1];
		if ((c == ' ' || c == '\t' || c == '\n'
		     || c == ',' || c == ';' || c == '.'
		     || c == '!' || c == '?' || c == '"' ||
		     c == '(' || c == ')' || c == '{' ||
		     c == '}') && cap[i] >= 'a' && cap[i] <= 'z')
		{
			cap[i] = cap[i] - 32;
		}
		i++;
	}
	return (cap);
}
