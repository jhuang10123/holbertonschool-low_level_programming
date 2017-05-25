#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to print
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;

	while (s[i] != '\0') /* get to end of string */
		i++;
	i--; /* go to char before null byte */

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}

}
