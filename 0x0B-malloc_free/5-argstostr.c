#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates arguments of program
 * @ac: argc
 * @av: argv
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int pal, len, tot, i, esp;

	if (ac == 0 || av == 0)
	{
		return (0);
	}

	tot = 0;
	for (pal = 0; pal < ac; pal++)
	{
		for (len = 0; av[pal][len] != 0; len++)
		{
			tot++;
		}
	}
	esp = tot + ac + 1;
	p = (char *) malloc(esp * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	for (pal = 0; pal < ac; pal++)
	{
		for (len = 0; av[pal][len] != 0; len++)
		{
			p[i] = av[pal][len];
			i++;
		}
		p[i] = '\n';
		i++;
	}

	return (p);
}
