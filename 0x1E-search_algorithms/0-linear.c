#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		print_check(i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * print_check - prints the value checked
 * @index: index of the array
 * @integ: value checked
 *
 * Return: first index where value is located
 */

void print_check(size_t index, int integ)
{
	printf("Value checked array[%lu] = [%d]\n", index, integ);
}
