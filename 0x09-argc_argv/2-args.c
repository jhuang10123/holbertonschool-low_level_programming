#include "holberton.h"
/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: pointer to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
