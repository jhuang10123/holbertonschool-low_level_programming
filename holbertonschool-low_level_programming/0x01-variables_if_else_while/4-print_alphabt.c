#include <stdio.h>
/**
 * main - print lower case alphabet followed by a new line - 'q' and 'e'
 *
 * return- (0)
 */
int main(void)
{
  char al;

  for (al = 'a' ; al <= 'z' ; al++)
    {
      if (al != 'q' && al != 'e')
      {
	putchar(al);
      }
    }
  putchar('\n');
  return(0);
}
