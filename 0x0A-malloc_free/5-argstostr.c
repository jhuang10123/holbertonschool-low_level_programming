#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: Concatenated string of all arguments
 */
char *argstostr(int ac, char **av)
{

	char *ptr;
	int len, i, j, k;

	len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

/* finds length of all arguments, + \n + '\0' */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
/* len ++ for \n after each argument */
		len++;
	}
/* len++ for '\0' */
	len++;


	ptr = malloc(sizeof(char) * (len));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0, k = 0; av[i][j] != '\0'; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[j] = '\n';
		k++;
	}
	ptr[k] = '\0';

	return (ptr);
}
