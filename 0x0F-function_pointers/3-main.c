#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program
 * @argc: row
 * @argv: col
 *
 * Return: pointer
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (*operator != '+' || *operator != '-' || *operator != '*' ||
	    *operator != '/' || *operator != '%')
	{
		printf("Error\n");
		return (99);
	}
	if ((*operator == '/' || *operator == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d", (*get_op_func(operator))(num1, num2));
	return (0);
}
