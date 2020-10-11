#include <stdio.h>

/**
 * main - prints all args
 * @argc: count
 * @argv: string
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != 0; i++)
	{
	}
	for (argc = 0; argc < i; argc++)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
