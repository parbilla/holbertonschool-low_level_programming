#include "holberton.h"

/**
 * main - copies file to file.
 * @argc: number of file
 * @av: files to copy
 * Return: 1 on success.
 */

int main(int argc, char **av)
{
	int fdfrom, fdto, escr, clto, clfr;
	char *buffer[1024];
	int leer = 1;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdfrom = open(av[1], O_RDONLY);
	fdto = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	if (fdto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (leer > 0)
	{
		leer = read(fdfrom, buffer, 1024);
		if (leer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		else if (leer >= 1)
		{
			escr = write(fdto, buffer, leer);
			if (escr == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	}
	clto = close(fdto);
	clfr = close(fdfrom);
	if (clto == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", clto), exit(100);
	if (clfr == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", clfr), exit(100);
	return (0);
}
