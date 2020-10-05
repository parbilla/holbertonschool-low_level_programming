#include "holberton.h"

/**
 * print_chessboard - prints chessboard
 * @a: array
 *
 * Return: always
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(0);
	}
}
