#include "holberton.h"

/**
 * rev_string - print string in reverse
 * @s: parameter
 *
 * Return: always (Success)
 */

void rev_string(char *s)
{
	int final, principio;

	char aux;

	final = 0;
	if (s[final] != '\0')
	{
		while (s[final] != '\0')
		{
			final++;
		}
		principio = 0;
		while (principio < final)
		{
			aux = s[final - 1];
			s[final - 1] = s[principio];
			s[principio] = aux;
			final--;
			principio++;
		}
	}
}
