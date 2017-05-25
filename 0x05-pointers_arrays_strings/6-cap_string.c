#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to change
 * Return: updated string
 */
char *cap_string(char *str)
{
	int i, j;

	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
			j++;
		}
	}
	return (str);
}
