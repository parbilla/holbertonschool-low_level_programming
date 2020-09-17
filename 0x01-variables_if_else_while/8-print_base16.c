#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Get the hexadecimal */
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
