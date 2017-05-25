#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @str: string to be encode
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
				str[i] = num[j];
			j++;
		}
	}
	return (str);
}
