#include"holberton.h"
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	unsigned int i;

        for (i = 0; s[i] != '\0'; i++)
		;

        return (i);
}


/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content in file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd_write, len;
/*
	mode_t mode = S_IRUSR|S_IWUSR;
*/

	fd = open(filename, O_RDWR| O_CREAT| O_TRUNC, S_IRUSR|S_IWUSR);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);

	fd_write = write(fd, filename, len);
	if (fd_write == -1 || text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
