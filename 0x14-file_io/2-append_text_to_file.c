#include "holberton.h"
/**
 * _strlen - finds length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fwrite, length;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	length = _strlen(text_content);
	fwrite = write(fd, text_content, length);

	if (fwrite == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
