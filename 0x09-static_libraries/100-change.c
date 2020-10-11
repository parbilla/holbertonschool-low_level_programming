#include <stdio.h>
#include <stdlib.h>

/**
 * main - change in coins
 * @argc: count
 * @argv: change
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int de25, de10, de5, de2, resto, cents, monedas;

	de25 = 0;
	de10 = 0;
	de5 = 0;
	de2 = 0;
	resto = 0;
	monedas = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	de25 = cents / 25;
	resto = cents % 25;
	if (resto > 0)
	{
		de10 = resto / 10;
		resto = resto % 10;
	}
	if (resto > 0)
	{
		de5 = resto / 5;
		resto = resto % 5;
	}
	if (resto > 0)
	{
		de2 = resto / 2;
		resto = resto % 2;
	}
	monedas = de25 + de10 + de5 + de2 + resto;
	printf("%d\n", monedas);
	return (0);
}
