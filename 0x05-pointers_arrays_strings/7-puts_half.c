#include "holberton.h"

/**
 * puts_half - print second half of the string
 * @str: parameter
 *
 * Return: always (Success)
 */

void puts_half(char *str)
{
	int len, mid;

	for (len = 0; str[len] != 0; len++)
	{
	}
	if (len % 2 != 0)
	{
		mid = (len + 1) / 2;
	}
	else
	{
		mid = len / 2;
	}
	for (; mid < len; mid++)
	{
		_putchar(str[mid]);
	}
	_putchar('\n');
}
