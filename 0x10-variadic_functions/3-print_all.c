#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_chr - print char
 * @args: va_list type
 *
 * Return: always
 */

void print_chr(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print int
 * @args: va_list type
 *
 * Return: always
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_flt - print float
 * @args: va_list args
 *
 * Return: always
 */

void print_flt(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  * print_str - print string
  * @args: str
  *
  * Return: always
  */

void print_str(va_list args)
{
	char *n;

	n = va_arg(args, char*);
	if (n == NULL)
	{
		n = "(nil)";
	}
	printf("%s", n);
}

/**
 * print_all - program
 * @format: arguments
 *
 * Return: always
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *s;
	prt opc[] = {
		{"c", print_chr},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_str},
		{NULL, NULL}
	};


	va_start(args, format);
	s = "";
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (opc[j].c != NULL)
		{
			if (format[i] == opc[j].c[0])
			{
				printf("%s", s);
				opc[j].f(args);
				s = ", ";
			}
		j++;
		}
	i++;
	}
	printf("\n");
	va_end(args);
}
