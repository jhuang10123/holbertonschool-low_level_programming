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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file to create
 * @text_content: content in file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_write, len;

	len = _strlen(text_content);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	fd_write = write(fd, text_content, len);
	if (fd_write == -1)
	{
		close(fd);
		return (-1);
	}

	return (1);

}
