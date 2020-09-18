#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Get the numbers */
	int c, d, e;

	for (c = 48; c < 56; c++)
	{
		for (d = 49; d < 57; d++)
		{
			for (e = 50; e < 58; e++)
			{
				if (c != d && c != e && d != e && c < d && d < e)
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if (c != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
