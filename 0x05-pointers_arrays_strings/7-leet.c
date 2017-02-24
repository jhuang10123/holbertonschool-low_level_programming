#include "holberton.h"
/**
 * *leet - changes letters to numbers
 * Description: aA=4 eE=3 oO=0 tT=7 lL=1
 * @num: characters
 * Return: num
 */
char *leet(char *num)
{
	int i, j;

	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";

	for (i = 0; num[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
		if (num[i] == a[j])
			num[i] = b[j];
		}
	}
	return (num);
}
