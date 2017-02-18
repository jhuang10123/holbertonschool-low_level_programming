#include <stdio.h>
/**
 * main - find prime number
 *
 * Return: 0
 */
int main(void)
{
	long int n = 2;
	long int i = 612852475143;

	while (n < i / 2)
	{
		if (i % n == 0)
		{
			i = i / n;
		}
		n++;
	}
	printf("%lu\n", i);
	return (0);
}
