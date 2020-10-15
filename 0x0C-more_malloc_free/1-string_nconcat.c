#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *f_strncat - concatenate string
 * @src: source
 * @dest: destiny
 * @n: spaces
 *
 * Return: pointed to dest
 */

char *f_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int lend, lens, i;

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
	dest[lend + lens] = 0;
	return (dest);
}

/**
 * f_strlen - string length
 * @str: string
 *
 * Return: always
 */

unsigned int f_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * string_nconcat - array of chars
 * @s1: string
 * @s2: string
 * @n: bytes of s2
 *
 * Return: always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_concat;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = f_strlen(s1);
	len2 = f_strlen(s2);

	if (n > len2)
	{
		n = len2;
	}

	new_concat = (char *) malloc((len1 + n + 1) * sizeof(char));

	if (new_concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != 0; i++)
	{
		new_concat[i] = s1[i];
	}

	for (j = 0; s2[j] != 0 && j < n; j++)
	{
		new_concat[i + j] = s2[j];
	}
	new_concat[i + j] = 0;
	return (new_concat);
}
