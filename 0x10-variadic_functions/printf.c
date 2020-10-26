#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_c(va_list);
int print_s(va_list);
int print_p(va_list);
int print_i(va_list);

typedef struct function
{
	char *s;
	int (*f)(va_list);
}print_fx;



int main(void)
{
	int c =	_printf("%i", 47985);
	printf("\n");
	printf("%d\n", c);
	return (0);
}


int _printf(const char *format, ...)
{

	int  i, j;
	int contador = 0;
	va_list args;
	print_fx fx[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{"i", print_i},
		{"d", print_i},
		{NULL, NULL}
	};


va_start(args, format);

if (!*format || format[0] == '%' && !format[1])
{
	return (-1);
}

while(*format)
{
	if (*format == '%' && *(format + 1) != 0)
	{
		format++;
		i = 0;
		while (fx[i].s)
		{
		       	if (*format == *fx[i].s)
			{
				contador += fx[i].f(args);
    			}
			i++;
		}
		format++;

	}
	else
	{
	putchar(*format);
	contador++;
	format++;
	}
}
	va_end(args);
	return (contador);
}

int print_c(va_list args)
{
	char c = va_arg(args, int);
	putchar(c);
	return(1);
}


int print_s(va_list args)
{
	int i;
	char *c = va_arg(args, char *);
	for (i = 0; c[i] != '\0'; i++)
	{
	/* while (*c)
		   putchar(*c);
		   c++; */
		putchar(c[i]);
	}
	return(i);
}

int print_p(va_list args)
{
	putchar('%');
	return(1);
}
int print_i(va_list args)
{
	int cifras, i, j, digitos, potencia;
	int n = va_arg(args, int);
	unsigned int m, un;

	if (n < 0)
	{
		un = (-1) * n;
		putchar('-');
	}
	else
	{
		un = n;
	}
	m = un;
	cifras = 0;
	while (m / 10 != 0)
	{
		cifras++;
		m = m / 10;
	}
	for (i = 0; i < cifras; i++)
	{
		potencia = 1;
		for (j = i; j < cifras; j++)
		{
			potencia = potencia * 10;
		}
		digitos = un / potencia;
		un = un - (digitos * potencia);
		putchar(digitos + 48);
	}
	putchar(un + 48);
	return (cifras + 1);
}
