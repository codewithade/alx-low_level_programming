#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file
 *
 * @filename: The name of the file
 * @text_content: The content to append to the file
 * Return: 1 (success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len;
ssize_t bytes_read;

if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
	return (-1);
if (text_content == NULL)
	return (1);
len = _strlen(text_content);
bytes_read = write(fd, text_content, len);
if (bytes_read < 0)
{
	close(fd);
	return (-1);
}
close(fd);
return (1);
}
/**
 * _strlen - calculates string length
 *
 * @s: ptr to string
 * Return: string length
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
