#include"holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: number of letters could actually read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_read, fd_write, fd_close;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(size_t) * letters);
	if (buffer == NULL)
		return (0);

	fd_read = read(fd, buffer, letters);
	if (fd_read == -1)
		return (0);

/* use fd_read bc want bytes of what was actually read */
	fd_write = write(STDOUT_FILENO, buffer, fd_read);
	if (fd_write == -1)
		return (0);

	fd_close = close(fd);
	if (fd_close == -1)
		return (0);

	free(buffer);
	return (fd_read);


}
