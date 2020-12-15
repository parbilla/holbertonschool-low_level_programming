#include "holberton.h"

/**
 * _atoi - copy string pointed
 * @s: character
 *
 * Return: pointed to dest
 */

int _atoi(char *s)
{
	int len, signo, g, h, i, j, k, inicio, fin, largo, pot, sg, resultado;

	sg = 1;
	signo = 0;
	inicio = 0;
	fin = 0;
	for (len = 0; s[len] != 0; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		if (*(s + i) == 45)
		{
			signo++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			inicio = i;
			fin = i;
			break;
		}
	}
	for (k = i; k <= len; k++)
	{
		if (s[k] >= 48 && s[k] <= 57)
		{
			fin++;
		}
		else
		{
			break;
		}
	}
	for (g = 0; g < signo; g++)
	{
		sg *= (-1);
	}
	resultado = 0;
	largo = fin - inicio;
	for (j = 0; j < largo; j++)
	{
		pot = 1;
		for (h = j; h < largo - 1; h++)
		{
			pot = pot * 10;
		}
		resultado += (s[inicio + j] - 48) * pot;
	}
	return (resultado * sg);
}
