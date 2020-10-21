#include <stdlib.h>

/**
 * int_index - function to a parameter
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL && array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
