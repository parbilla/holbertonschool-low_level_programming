#include <stdlib.h>

/**
 * print_name - includes pointer to a function
 * @name: name of the person
 * @f: pointer to function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		(*f)(name);
	}
	else
	{
		return;
	}
}
