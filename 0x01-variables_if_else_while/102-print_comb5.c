#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Get the numbers */
	int c, d, e, f, g, h;

	for (c = 48; c <= 57; c++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (e = 48; e <= 57; e++)
			{
				for (f = 48; f <= 57; f++)
				{
					g = c * 10 + d;
					h = e * 10 + f;
					if (g < h)
					{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);
					if (c != '9' || d != '8' || e != '9' || f != '9')
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
