#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 *
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read;
char *buf;

bytes_read = 0;
if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);

if (fd < 0)
	return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
	close(fd);
	return (0);
}
bytes_read = read(fd, buf, letters);

if (bytes_read < 0)
{
	close(fd);
	return (0);
}

buf[bytes_read] = '\0';

bytes_read = write(STDIN_FILENO, buf, bytes_read);

if (bytes_read < 0)
{
	close(fd);
	return (0);
}

free(buf);
close(fd);

return (bytes_read);
}
