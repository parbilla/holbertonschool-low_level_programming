#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destiny
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
