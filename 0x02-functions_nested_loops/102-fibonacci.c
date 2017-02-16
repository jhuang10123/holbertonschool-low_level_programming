#include <stdio.h>
/**
 * main - Fibonacci sequence - first 50
 *
 * Return: 0
 */
int main(void)
{
	int f1 = 1, f2 = 2, f3, n;

	while (n < 50)
	{
		f3 = f1 + f2;
		printf("%d", f3);
		f1 = f2;
		f2 = f3;
		if (n > 49)
		{
			printf(", ");
		}
		n++;
	}
	printf("\n");
	return (0);
}
