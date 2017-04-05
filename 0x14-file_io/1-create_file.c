#include "holberton.h"
/**
 * _strlen - finds length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char * s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	int fd, fwrite,  length;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);

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
