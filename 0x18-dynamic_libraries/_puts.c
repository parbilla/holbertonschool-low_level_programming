#include "holberton.h"

/**
 * _puts - print stream
 * @str: parameter
 *
 * Return: length (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
