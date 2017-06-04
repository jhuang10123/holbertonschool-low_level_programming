#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: pointer to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul;
	(void) argc;

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
