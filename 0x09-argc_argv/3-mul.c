#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplication of 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, k;

	k = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		for (i = 0; i < argc; i++)
			k *= atoi(argv[i]);
	}
	printf("%d\n", k);

	return (0);

}
