#include "holberton.h"

/**
 * *rot13 - encodes string
 * @c: string
 *
 * Return: rot13
 */

char *rot13(char *c)
{
	char let[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char r13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int i, j;

	for (i = 0; c[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == let[j])
			{
				c[i] = r13[j];
				break;
			}
		}
	}
	return (c);
}
