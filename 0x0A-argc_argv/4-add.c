#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @argc: count
 * @argv: numbers
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i, res;

	res = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
