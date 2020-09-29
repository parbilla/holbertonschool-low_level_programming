#include "holberton.h"

/**
 * puts2 - print stream
 * @str: parameter
 *
 * Return: length (Success)
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
