#include "main.h"
/**
 * main - program entry point
 * 
 * @argc: Argument count
 * @argv: array of args vars
 *
 * Return 0 (success)
 */
int main(int argc, char **argv)
{
if (argc < 2)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file-to\n");
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
int write_fd, read_fd, res;
write_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC);
if (write_fd < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}
read_fd = open(file_from, O_RDONLY);
if (read_fd < 0)
{
	res = close(write_fd);
	if (res < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", write_fd);
	exit(100);
	}
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

}
