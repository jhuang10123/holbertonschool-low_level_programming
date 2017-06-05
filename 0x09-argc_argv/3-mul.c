#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: pointer to argument strings
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int mul;
	(void) argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
