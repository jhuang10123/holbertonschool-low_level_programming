#include <stdio.h>

/**
 * main - outputs a-z and  A-Z
 *
 * Function: Loop and putchar to output alphabet
 *
 * Return: returns 0
 */
int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	for (al = 'A'; al <= 'Z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
