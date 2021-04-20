#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	size_t bloc = sqrt(size);
	size_t i = 0;

	if (array == 0)
		return (-1);
	if (array[idx] > value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		return (-1);
	}
	while (idx < size)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (value);
		if (array[idx] > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", idx - bloc, idx);
			for (i = (idx - bloc + 1); i < idx; i++)
			{
				if (array[i] == value)
					return (i);
				if (array[i] > value)
					return (-1);
			}
		}
		idx += bloc;
	}
	for (i = (idx - bloc + 1); i < size; i++)
	{
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			return (-1);
	}
	return (-1);
}
