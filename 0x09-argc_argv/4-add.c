#include "holberton.h"
/**
 * main - adds positive number
 * @argc: argument count
 * @argc: pointer to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum, len, col;

	if (argc == 1)
		printf("0\n");

	sum = 0;

/* iterate through arguments */
	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);
/* iterate through each argument string */
		for (col = 0; col < len; col++)
			{
				if(argv[i][col] >= '0' && argv[i][col] <= '9')
				{
					sum += atoi(argv[i]);
				}

				else
				{
					printf("Error\n");
					return (1);
				}
			}
	}

	printf("%d\n", sum);
	return (0);
}
