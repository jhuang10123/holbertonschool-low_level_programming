#include "holberton.h"
/**
 * _exit - error handling
 * @n: error code
 * @file: name of file
 */
void _exit(int n, char *file)
{
	switch (n)
	{
	case 97:
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", file);
			exit(98);
	case 99:
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
			exit(99);
	default:
		dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", n);
			exit(100);

	}

}

/**
 * main - copies content of one file to the other
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int fd_from, fd_to, fd_read, fd_write, fd_close, fd_close2;
	char *buffer, *file_from, *file_to;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
		_exit(97);

	fd_from = open(file_from, O_RDONLY);
		if (fd_from == -1)
			_exit(98, file_from);

	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 00664);
	if (fd_to == -1)
		_exit(99, file_to);

	buffer = malloc(sizeof(char) * 1204);
	if (buffer == NULL)
		return (1);

	fd_read = read(fd_from, buffer, 1204);
	if (fd_read == -1)
		_exit(98, file_from);

	while (fd_read > 0)
	{
		fd_write = write(fd_to, buffer, 1204);
		if (fd_write == -1)
			_exit(99, file_to);

		fd_read = read(fd_from, buffer, 1204);
		if (fd_read == -1)
			_exit(98, file_from);
	}

	fd_close = close(fd_from);
	if (fd_close == -1)
		_exit(100, NULL);

	fd_close2 = close(fd_to);
		if (fd_close2 == -1)
			_exit(100, NULL);

	free(buffer);
	return(0);
}
