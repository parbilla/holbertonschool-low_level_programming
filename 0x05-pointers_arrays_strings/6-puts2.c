#include "holberton.h"

/**
 * puts2 - print stream
 * @str: parameter
 *
 * Return: length (Success)
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
