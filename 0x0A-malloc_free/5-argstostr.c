#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *newstr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	int len;

	len = ac +1 + len(av);

	a = malloc(sizeof(char) * len);
	if (a == NULL)
		return (NULL);

	return (newstr);
}



int len(av)
{
	int l = 0;
	int i, j;

	i = 0;
	j = 0;

	for (i = 0; av[i] != '\0'; i++)
	{
		for (j = 0; av[i][j] != '\0')
		{
			l++;
		}
	}

	return (l);
}

void copy_args()
