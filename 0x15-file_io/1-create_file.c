#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: file to create
 * @text_content: text to put in file
 * Return: 1 on success.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != 0; i++)
	{
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write(fd, text_content, i + 1);
	}
	close(fd);
	return (1);
}
