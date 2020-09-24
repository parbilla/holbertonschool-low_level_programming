#include "holberton.h"

/**
 * print_diagonal - print diagonal
 * @n: number of lines
 *
 * Return: result (Success)
 */
void print_diagonal(int n)
{
	int a, b;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
