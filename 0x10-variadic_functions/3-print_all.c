#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - program
 * @format: arguments
 *
 * Return: always
 */

void print_all(const char * const format, ...)
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
