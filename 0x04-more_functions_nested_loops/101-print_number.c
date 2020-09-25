#include <stdio.h>

/**
 * print_number - prints a number
 * @n: number
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int cifras, i, j, m, digitos, potencia;

	if (n < 0)
	{
		n = (-1) * n;
		putchar('-');
	}
	m = n;
	while (m / 10 != 0)
	{
		cifras++;
		m = m / 10;
	}
	for (i = 0; i < cifras; i++)
	{
		potencia = 1;
		for (j = i; j < cifras; j++)
		{
			potencia = potencia * 10;
		}
		digitos = n / potencia;
		putchar(digitos + 48);
	}
	digitos = n % 10;
	putchar(digitos + 48);
	putchar('\n');
}
