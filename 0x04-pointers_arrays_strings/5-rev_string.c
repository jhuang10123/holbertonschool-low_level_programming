#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 * @s: string
 */
void rev_string(char *s)
{
	int j = 0;
	int i = 0;
	char temp;

	while (s[i] != 0)
	{
		i++;
	}

	i--;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
