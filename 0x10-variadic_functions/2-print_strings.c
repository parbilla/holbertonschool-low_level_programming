#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - program
 * @n: integer
 * @separator: char
 *
 * Return: always
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	char *s;
	unsigned int i;

	if (n == 0)
	{
		return;
	}

	va_start(lista, n);
	for (i = 0; i < (n - 1); i++)
	{
		s = va_arg(lista, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		if (separator != NULL)
		{
		printf("%s%s", s, separator);
		}
		else
		{
		printf("%s", s);
		}
	}
	s = va_arg(lista, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s\n", s);
	va_end(lista);
}
