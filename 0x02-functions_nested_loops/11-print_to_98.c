#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - print integers to 98
 *
 * n: integer
 */
void print_to_98(int n)
{
	int c;

	if (n < 98)
	{
		for (c = n; c < 98; c++)
		{
			printf("%d, ", c);
		}
	}
	else if (n > 98)
	{
		for (c = n; c > 98; c--)
		{
			printf("%d, ", c);
		}
	}
printf("98\n");
}
