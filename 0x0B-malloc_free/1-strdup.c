#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - array of chars
 * @str: string
 *
 * Return: always
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
	}

	new_str = malloc((i + 1) * sizeof(char));

	if (new_str == 0)
	{
		return (NULL);
	}

	for (j = 0; j == i; j++)
	{
		new_str[j] = str[j];
	}
	return (new_str);
}
