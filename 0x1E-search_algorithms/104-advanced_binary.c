#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index = 0;

	if (array == 0 || size == 0)
		return (-1);
	index = find_index_adv(array, value, 0, size - 1, size);
	return (index);
}

/**
 * find_index - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @value: value to search
 * @low: lowest value of the subarray
 * @high: highest value of the subarray
 * @size: number of elements in array
 *
 * Return: first index where value is located
 */

int find_index_adv(int *array, int value, int low, int high, size_t size)
{
	int mid = low + (high - low) / 2;
	int i, res;

	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (array[mid + low] == value)
		{
			res = (find_index_adv(array, value, low - mid, low - 1, size));
			if (res == value)
				return (res);
			else
				return (mid);
		}
		if (array[mid] > value)
			return (find_index_adv(array, value, low, mid - 1, size));
		return (find_index_adv(array, value, low + mid + 1, high, size));
	}
	return (-1);
}
