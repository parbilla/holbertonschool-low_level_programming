#include "holberton.h"

/**
 * _strlen - length of a stream
 * @s: parameter
 *
 * Return: length (Success)
 */

int _strlen(char *s)
{
	int letras;

	letras = 0;

	while (*s != '\0')
	{
		letras++;
		s++;
	}
	return (letras);
}
