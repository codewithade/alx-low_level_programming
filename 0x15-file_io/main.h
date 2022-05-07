#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int validate(ssize_t num_bytes, int fd);
int create_file(const char *filename, char *text_content);
int _strlen(const char *s);
#endif
