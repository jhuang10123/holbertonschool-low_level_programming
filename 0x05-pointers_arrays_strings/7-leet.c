#include "holberton.h"
/**
 * *leet - changes letters to numbers
 * Description: aA=4 eE=3 oO=0 tT=7 lL=1
 * @num: characters
 * Return: num
 */
char *leet(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		while (num[i] == 'A' || num[i] == 'a')
			num[i] = '4';
		while (num[i] == 'E' || num[i] == 'e')
			num[i] = '3';
		while (num[i] == 'O' || num[i] == 'o')
			num[i] = '0';
		while (num[i] == 'T' || num[i] == 't')
			num[i] = '7';
		while (num[i] == 'L' || num[i] == 'l')
			num[i] = '1';
	}

	return (num);
}
