#include <stdio.h>

/**
 * main - prints number of args
 * @argc: count
 * @argv: string
 *
 * Return: result
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
