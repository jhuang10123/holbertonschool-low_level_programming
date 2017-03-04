#include <stdio.h>
#include "holberton.h"
/**
 * main - print number of argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
