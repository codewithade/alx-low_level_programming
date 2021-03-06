#include "main.h"
/**
 * create_file - creates a file with filename
 *
 * @filename: The name of the file
 * @text_content: content of the file
 *
 * Return: 1 (success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
int fd, len;
ssize_t bytes_read;

if (filename == NULL)
	return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd < 0)
	return (-1);
len = _strlen(text_content);
if (len == -1)
{
	text_content = "";
	len = 0;
}
bytes_read = write(fd, text_content, len);
if (validate(bytes_read, fd) == 0)
	return (-1);
close(fd);
return (1);
}
/**
 * validate - validates the passed params
 *
 * @num_bytes: number of bytes read
 * @fd: File Descriptor
 * Return: 1 (true) or 0 (false)
 */
int validate(ssize_t num_bytes, int fd)
{
	if (num_bytes < 0)
	{
		close(fd);
		return (0);
	}
	return (1);
}
/**
 * _strlen - calculates the length of the string
 *
 * @s: pointer to array of chars (string)
 * Return: length of string
 */
int _strlen(const char *s)
{
int i, count;

if (s == NULL)
	return (-1);
i = 0;
count = 0;
while (*(s + i) != '\0')
{
	i++;
	count++;
}
return (count);
}
