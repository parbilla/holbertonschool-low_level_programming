#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * struct op - struct print
 *
 * @c: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *c;
	void (*f)();
} prt;

/**
 * get_prt - select type
 * @s: char
 *
 * Return: pointer
 */

void (*get_prt(char *s))()
{
	prt opc[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_fl},
		{"s", print_str},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (opc[i].c != NULL)
	{
		if (strcmp(opc[i].c, s) == 0)
		{
			return (opc[i].f);
		}
		i++;
	}
}

/**
 * print_char - print char
 * @c: char
 *
 * Return: pointer
 */

void print_char(char c)
{
	printf(a + b);
}

/**
 * op_sub - substraction
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: row
 * @b: col
 *
 * Return: pointer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
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
