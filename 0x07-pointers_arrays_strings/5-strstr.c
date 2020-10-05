#include "holberton.h"

/**
 * _strstr - searches a string
 * @haystack: string
 * @needle: substring
 *
 * Return: substring
 */

char  *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != 0; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 1; needle[j] != 0 && haystack[i + j] != 0; j++)
			{
				if (needle[j] != haystack[i + j])
			{
				break;
			}
			}
		}
		if (needle[j + 1] == 0)
		{
			return (needle);
		}
	}
	return (0);
}
