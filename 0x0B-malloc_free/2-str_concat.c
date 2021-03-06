#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *f_strncat - concatenate string
 * @src: source
 * @dest: destiny
 *
 * Return: pointed to dest
 */

char *f_strncat(char *dest, char *src)
{
	int lend, lens, i;

	for (lend = 0; dest[lend] != 0; lend++)
	{
	}
	for (lens = 0; src[lens] != 0; lens++)
	{
	}
	for (i = 0; i < lens; i++)
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

int f_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * str_concat - array of chars
 * @s1: string
 * @s2: string
 *
 * Return: always
 */

char *str_concat(char *s1, char *s2)
{
	char *new_concat;
	int len1, len2;

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

	new_concat = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (new_concat == NULL)
	{
		return (NULL);
	}

	new_concat[0] = 0;

	f_strncat(new_concat, s1);
	f_strncat(new_concat, s2);
	return (new_concat);
}
