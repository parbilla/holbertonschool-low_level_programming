#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: string to print
 * @letters: number of characters
 * Return: letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int i;
	char buf[1024];

	i = 0;
	fd = open("file.txt", O_CREAT | O_RDONLY, 0500);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	for (i = 0; i < letters; i++)
	{
		if (filename[i] == EOF)
		{
			return (0);
		}
		write(STDOUT_FILENO, filename[i], letters);
	}
	read(fd, buf, letters);
	close (fd);
	return (letters);
}
