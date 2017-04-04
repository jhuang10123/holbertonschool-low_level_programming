#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file
 * @filename: file name
 * @letters: letters to read
 * Return: 0 or number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int read_file, write_file, close_file;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	read_file = read(fd, buf, letters);
	if (read_file == -1)
		return (0);

	write_file = (STDOUT_FILENO, buf, read_file);
	if (write_file == -1)
		return (0);

	close_file = close(fd);
		if (close_file == -1)
			return (0);

	free(buf);
	return (read_file);

}
