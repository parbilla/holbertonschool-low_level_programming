#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: number of hashtags
 *
 * Return: result (Success)
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (b == size)
			{
				_putchar('#');
				_putchar('\n');
			}
			else
			{
				if (a < size - b)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		}
	}
}
