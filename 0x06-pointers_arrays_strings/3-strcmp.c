#include "holberton.h"

/**
 * *_strcmp - compares strings pointed
 * @s1: source
 * @s2: destiny
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int len1, len2, i, dif;

	for (len1 = 0; s1[len1] != 0; len1++)
	{
	}
	for (len2 = 0; s2[len2] != 0; len2++)
	{
	}
	for (i = 0; i < len1 && i < len2; i++)
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			return (dif);
		}
	}
	return (0);
}
