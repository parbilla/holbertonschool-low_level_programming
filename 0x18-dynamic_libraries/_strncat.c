#include "holberton.h"

/**
 * *_strncat - concatenate string pointed
 * @src: source
 * @dest: destiny
 * @n: bytes max
 *
 * Return: pointed to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lend, lens, i;

	for (lend = 0; dest[lend] != 0; lend++)
	{
	}
	for (lens = 0; src[lens] != 0; lens++)
	{
	}
	for (i = 0; i < n && i < lens; i++)
	{
		dest[lend + i] = src[i];
	}
	return (dest);
}
