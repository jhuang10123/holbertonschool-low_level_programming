#include <stdio.h>
#include "holberton.h"
/**
 *
 * main - print 1-100
 * Description: print 1-100, replace multiples of 3 & 5 with Fizz / Buzz
 *
 * @void: void
 *
 * return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (!(a == 100))
			printf(" ");
		if (a % 10 == 3)
			printf("Fizz ");
		if (a % 10 == 5)
			printf("Buzz ");
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d", a);
	}
	printf("\n");
	return (0);
}
