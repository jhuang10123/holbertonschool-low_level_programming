#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFLEN 1024

int _putchar(char c);
void exit_fcn(int n, char *file);
ssize_t read_textfile(const char *filename, size_t letters);
int check_close(int fd, char *file);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /*HOLBERTON_H*/
