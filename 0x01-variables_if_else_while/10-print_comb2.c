#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Get the numbers */
	int c, d;

	for (c = 48; c <= 57; c++)
	{
		for (d = 48; d <= 57; d++)
		{
			putchar(c);
			putchar(d);
			if (c != 57 || d != 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
