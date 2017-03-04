#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - add positive numbers
 * @argc: argement counr
 * @argv: argement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0 && atoi(argv[i]) < 2147483647)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
			}
		}
			    printf("%d\n", sum);
	}
			return (0);
}
