#include "holberton.h"

/**
 * main - copies file to file.
 * @argc: number of file
 * @argv: files to copy
 * Return: 1 on success.
 */

int main(int argc, char **argv)
{
	int fdfrom, fdto, escr;
	char *buffer[1024];
	int leer = 1;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdfrom = open(argv[1], O_RDONLY);
	fdto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fdto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]), exit(99);
	while (leer > 0)
	{
		leer = read(fdfrom, buffer, 1024);
		if (leer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		else if (leer >= 1)
		{
			escr = write(fdto, buffer, leer);
			if (escr == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
				exit(99);
			}
		}
	}
	close(fdto);
	close(fdfrom);
	if (fdto == -1 || fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE"), exit(100);
	}
	return (0);
}
