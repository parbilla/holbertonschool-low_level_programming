#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - program
 * @n: integer
 *
 * Return: always
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lista;

	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lista, unsigned int);
	}
	va_end(lista);
	return (sum);
}
