#include "main.h"
/**
 * main - program entry point
 *
 * @argc: Argument count
 * @argv: array of args vars
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
if (argc < 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
_copy(argv[1], argv[2]);
return (0);
}
/**
 * _copy - copies a file's content to another file
 *
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: Always 0
 */
int _copy(char *file_from, char *file_to)
{
int write_fd, read_fd, len;
char *buf;
write_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (write_fd < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}
read_fd = open(file_from, O_RDONLY);
if (read_fd < 0)
{
	close(write_fd);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}
buf = malloc(sizeof(char) * BUFFER_SIZE);
while (read(read_fd, buf, BUFFER_SIZE))
{
	len = _strlen(buf);
	write(write_fd, buf, len);
	memset(buf, 0, len);
}
if (_close(write_fd) == 0 || _close(read_fd) == 0)
	exit(100);
return (0);
}
/**
 * _strlen - returns the string length
 *
 * @s: array of chars
 * Return: length of char array
 */
int _strlen(const char *s)
{
int i, count;

i = 0;
count = 0;
while (*(s + i) != '\0')
{
	count++;
	i++;
}
return (count);
}
/**
 * _close - closes a fd
 *
 * @fd: file descriptor
 * Return: (1) success or (0) failure
 */
int _close(int fd)
{
int ret;

ret = close(fd);
if (ret < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (0);
}

return (1);
}
