#include "holberton.h"
/**
 * main - adds positive number
 * @argc: argument count
 * @argc: pointer to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, row, j, sum, len;

	if (argc == 1)
		printf("0\n");

	len = strlen(argv[row]);
	sum = 0;

/* iterate through arguments */
	for (row = 1; row < argc; row++)
	{
/* iterate through each argument string */
		for (col = 0; col < len; col++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9');
				{
					sum += atoi(argv[i]);
					printf("%d\n", sum);
				}

				else
				{
					printf("Error\n");
					return (1);
				}
			}

	return (0);
}
