#include "holberton.h"
/**
 * exit_error - returns error message
 * @num: error number
 * @str: file name
 * Return: error number
 */
int _error_msg(int num, char *str)
{
	int number;

	switch (num)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		number = 97;
		break;

	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		number = 98;
		break;

	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		number = 99;
		break;

	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", num);
		number = 100;
		break;
	}

	return (number);
}

/**
 * main - copies contentof a file to another file
 * @argc: argument count
 * @argv: argument strings
 * Return: 0 or error number
 */
int main (int argc,char **argv)
{
	int file_to, file_from, fd_read, fd_write, close_from, close_to;

	char buffer[BUFFSIZE];

	if (argc != 3)
		exit(_error_msg(97, NULL));

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit(_error_msg(98, argv[1]));

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		exit(_error_msg(99, argv[2]));

	fd_read = read(file_from, buffer, BUFFSIZE);
	if (fd_read == -1)
		exit(_error_msg(100, argv[1]));

	while (fd_read > 0)
	{
		fd_write = write(file_to, buffer, fd_read);

		if (fd_write == -1)
			exit(_error_msg(99, argv[2]));

		fd_read = read(file_from, &buffer, BUFFSIZE);
		if (fd_read == -1)
			exit(_error_msg(100, argv[1]));
	}

		     close_from = close(file_from);
		     if (close_from == -1)
			     exit(_error_msg (100, NULL));

		     close_to = close(file_to);
		     if(close_to == -1)
			     exit(_error_msg(100, NULL));

		     return (0);
}
