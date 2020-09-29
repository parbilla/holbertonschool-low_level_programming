#include "holberton.h"

/**
 * *_strcpy - copy string pointed
 * @src: source
 * @dest: destiny
 *
 * Return: pointed to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != 0; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
