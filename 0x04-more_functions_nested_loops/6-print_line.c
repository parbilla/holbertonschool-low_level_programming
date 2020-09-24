#include "holberton.h"

/**
 * print_line - print multiplication
 * @n: number of lines
 *
 * Return: result (Success)
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
