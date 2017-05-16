#include "holberton.h"
#include <stdio.h>
/*
 * main - print 1-100, fizz of divisable by 3, buzz if divisable 5
 * Return: always 0
 */
int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
                if (i < 100)
                        printf(" ");
		else
			printf("\n");
	}
	return (0);
}
