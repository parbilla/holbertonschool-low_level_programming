#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	/* moves as long there is a 1 */
	if (n > 1)
	{
		/* loses last digit and repeats operation until first one remains */
		print_binary(n >> 1);
	}
	/* compares first digit and prints 1 or 0, and goes until last one */
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
