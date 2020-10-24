#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - program
 * @n: integer
 * @separator: char
 *
 * Return: always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lista;

	unsigned int i;

	if (n == 0)
	{
		return;
	}

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
		{
			printf("%d%s", va_arg(lista, unsigned int), separator);
		}
		else
		{
			printf("%d", va_arg(lista, unsigned int));
		}
	}
	va_end(lista);
	printf("\n");
}
