#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: string to print
 * @letters: number of characters
 * Return: number of char printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int i;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	i = read(fd, buf, letters);
	buf[i + 1] = '\0';

	write(STDOUT_FILENO, buf, i);

	close(fd);
	free(buf);
	return (i);
}
