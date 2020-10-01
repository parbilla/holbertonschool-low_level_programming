#include "holberton.h"

/**
 * *cap_string - copies string to uppercase
 * @c: string
 *
 * Return: uppercase
 */

char *cap_string(char *c)
{
	int i, j;

	for (i = 0; c[i] != 0; i++)
	{
		j = i - 1;
		if (c[j] == 9 || c[j] == 10 || c[j] == 40)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				c[i] = c[i] - 32;
			}
		}
		if ((c[j] >= 32 && c[j] <= 34) || c[j] == 41)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				c[i] = c[i] - 32;
			}
		}
		if (c[j] == 44 || c[j] == 46 || c[j] == 59)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				c[i] = c[i] - 32;
			}
		}
		if (c[j] == 63 || c[j] == 123 || c[j] == 125)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c);
}
