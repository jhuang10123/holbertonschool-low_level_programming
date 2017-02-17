#include <stdio.h>
#include "holberton.h"
/**
 * main - print 1-100
 *
 * @void: void
 *
 * Description: print 1-100, replace multiples of 3 & 5 with Fizz / Buzz
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		if (a % 5 == 0)
			printf("Buzz");
		if ((a % 3 != 0) && (a % 5 != 0))
			printf("%d", a);
		printf(" ");
	}
	printf("\n");
	return (0);
}
