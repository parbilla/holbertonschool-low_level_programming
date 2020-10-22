#include <stdio.h>
#include <stdlib.h>

/**
 * main - program
 * @argc: row
 * @argv: col
 *
 * Return: pointer
 */

int main(int argc, char **argv)
{
	int i;
	char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < (atoi(argv[1]) - 1))
	{
		printf("%02x ", p[i]);
		i++;
	}
	i++;
	printf("%02x\n", p[i]);
	return (0);
}
