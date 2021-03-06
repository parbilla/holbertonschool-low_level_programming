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
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i] != 0)
		{
			i++;
		}
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
