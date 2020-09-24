#include "holberton.h"

/**
 * more_numbers - prints numbers
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	char t, c, d;

	for (t = '0'; t <= '9'; t++)
	{
		for (c = '0'; c <= '1'; c++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				if (c != '0' && d <= '4')
				{
					_putchar(c);
				}
				if (c == '0' || (c == '1' && d <= '4'))
				{
					_putchar(d);
				}
			}
		}
		_putchar('\n');
	}
}
