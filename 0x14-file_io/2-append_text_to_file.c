#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unisd.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	if (filename == NULL)
		return (0);
}
