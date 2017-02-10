#include <stdio.h>

/**
 * main - outputs a-z, then A-Z
 *
 * Description: Uses a for loop and putchar to output a-z and then a new line
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
