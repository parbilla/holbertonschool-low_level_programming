#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: parameter
 *
 * Return: always (Success)
 */

void print_rev(char *s)
{
	char *principio;

	principio = s;
	if (*s != '\0')
	{
		while (*s != '\0')
		{
			s++;
		}
		s--;
		while (s != principio)
		{
			_putchar(*s);
			s--;
		}
	}
	_putchar(*s);
	_putchar('\n');
}
