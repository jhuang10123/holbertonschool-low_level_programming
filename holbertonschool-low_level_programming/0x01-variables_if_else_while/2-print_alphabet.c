#include <stdio.h>
/**
 * main - print lower case alphabet followed by a new line
 *
 * return - (0)
 */
int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)

		putchar(al);

	putchar('\n');

	return(0);
}
