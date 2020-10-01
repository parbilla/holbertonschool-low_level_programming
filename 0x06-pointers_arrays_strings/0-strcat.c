#include "holberton.h"

/**
 * *_strcat - concatenates string pointed
 * @src: source
 * @dest: destiny
 *
 * Return: pointed to dest
 */

char *_strcat(char *dest, char *src)
{
	int lend, lens, i;

	for (lend = 0; dest[lend] != 0; lend++)
	{
	}
	for (lens = 0; src[lens] != 0; lens++)
	{
	}
	for (i = 0; i <= lens; i++)
	{
		dest[lend + i] = src[i];
	}
	return (dest);
}
