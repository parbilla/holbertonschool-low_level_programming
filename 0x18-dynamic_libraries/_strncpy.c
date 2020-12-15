#include "holberton.h"

/**
 * *_strncpy - copies string pointed
 * @src: source
 * @dest: destiny
 * @n: bytes max
 *
 * Return: pointed to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lens, i;

	for (lens = 0; src[lens] != 0; lens++)
	{
	}
	if (n < lens)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < lens; i++)
		{
			dest[i] = src[i];
		}
		for (i = lens; i < n; i++)
		{
			dest[i] = 0;
		}
	}
	return (dest);
}
