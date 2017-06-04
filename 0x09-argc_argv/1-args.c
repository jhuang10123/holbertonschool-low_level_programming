#include "holberton.h"
/**
 * main - prints the number of arguments passed in
 * @argc: argument count
 * @argv: pointer to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)**argv;
	printf("%d\n", argc);
	return (0);
}
