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
	int bytes;
	char *str;

	bytes = total_len(ac, av);

	str = malloc(bytes);

	if (str == NULL)
		return (NULL);

	copy_strs(av, str);
	return (str);
}

/**
 * total_len - total length of all the strings
 * @ac: argument count
 * @av: argument vector
 * Return: sum of total length
 */
int total_len(int ac, char **av)
{
	int sum;

	sum = sum_len(av) + ac + 1;
	sum = sum * sizeof(char);
	return (sum);
}

