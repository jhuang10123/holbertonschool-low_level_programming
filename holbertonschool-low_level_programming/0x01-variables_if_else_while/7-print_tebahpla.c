#include <stdio.h>
/**
 * main - print alphabet in reverse.
 *
 * function - only use putchar twice
 *
 * return - 0
 */
int main(void)
{
	char az;

	for (az = 'z'; az  >= 'a'; az--)
		putchar(az);

	putchar('\n');
	return (0);
}
