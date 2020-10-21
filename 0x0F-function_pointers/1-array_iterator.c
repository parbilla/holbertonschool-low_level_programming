#include <stdlib.h>

/**
 * array_iterator - function to a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
	else
	{
		return;
	}
}
