#include "holberton.h"

/**
 * _strchr - searches a char
 * @c: character
 * @s: string
 *
 * Return: pointer to character
 */

char  *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
