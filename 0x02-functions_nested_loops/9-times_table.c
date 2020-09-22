#include "holberton.h"

/**
 * times_table - print time tables
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int a, b, c, decena, unidad;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			c = (a - 48) * (b - 48);
			decena = c / 10; // Decenas
			unidad = c % 10; // Unidades
			if (decena == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(decena + 48);
			}
			_putchar(unidad + 48);
			if (b < '9')
			{
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
