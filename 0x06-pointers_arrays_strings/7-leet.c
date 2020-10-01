#include "holberton.h"

/**
 * *leet - encodes string
 * @c: string
 *
 * Return: uppercase
 */

char *leet(char *c)
{
	char letras[] = {"AaEeOoTtLl"};
	char num[] = {"4433007711"};
	int i, j;

	for (i = 0; c[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == letras[j])
			{
				c[i] = num[j];
				break;
			}
		}
	}
	return (c);
}
