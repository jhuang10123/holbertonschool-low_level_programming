#include "holberton.h"
/**
 * exit_fcn - error handling
 * @n: error code
 * @file: name of file
 */
void exit_fcn(int n, char *file)
{
	switch (n)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
	default:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
			exit(100);
	}
}
/**
 * check_close - close file descriptor
 * @fd: file descriptor
 * @file: name of file
 * Return: n if close success
 */
int check_close(int fd, char *file)
{
	int n;

	n = close(fd);
	if (n == -1)
		exit_fcn(100, file);
	return (n);
}
/**
 * main - copies content of one file to the other
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_count, write_count;
	char *buffer, *file_from, *file_to;

	file_from = argv[1], file_to = argv[2];

	if (argc != 3)
		exit_fcn(97, NULL);

	fd_from = open(file_from, O_RDONLY);
		if (fd_from == -1)
			exit_fcn(98, file_from);

	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		check_close(fd_from, file_from);
		exit_fcn(99, file_to);
	}
	buffer = malloc(sizeof(char) * BUFLEN);
	if (buffer == NULL)
		return (1);
	read_count = read(fd_from, buffer, BUFLEN);
	if (read_count == -1)
	{
		check_close(fd_from, file_from), check_close(fd_to, file_to);
		exit_fcn(98, file_from);
	}
	while (read_count > 0)
	{
		write_count = write(fd_to, buffer, read_count);
		if (write_count == -1)
		{
			check_close(fd_from, file_from);
			check_close(fd_to, file_to);
			exit_fcn(99, file_to);
		}
		read_count = read(fd_from, buffer, BUFLEN);
		if (read_count == -1)
		{
			check_close(fd_from, file_from);
			check_close(fd_to, file_to);
			exit_fcn(98, file_from);
		}
	}
	check_close(fd_from, NULL);
	check_close(fd_to, NULL);
	free(buffer);
	return (0);
}
