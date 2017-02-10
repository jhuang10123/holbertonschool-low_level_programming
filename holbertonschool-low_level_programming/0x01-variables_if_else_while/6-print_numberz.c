#include <stdio.h>

/**
 * main - outputs all digits in base 10 number system using putchar
 * Description: Loop to putchar numbers from 0-9
 * Return: returns 0
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
