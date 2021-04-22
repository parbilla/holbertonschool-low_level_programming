#include "search_algos.h"

/**
 * binary_search_exp - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int binary_search_exp(int *array, size_t size, int value)
{
	int index = 0;

	if (array == 0)
		return (-1);
	index = find_index_exp(array, value, 0, size - 1, size);
	return (index);
}

/**
 * find_index_exp - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @value: value to search
 * @low: lowest value of the subarray
 * @high: highest value of the subarray
 * @size: number of elements in array
 *
 * Return: first index where value is located
 */

int find_index_exp(int *array, int value, int low, int high, size_t size)
{
	int mid = low + (high - low) / 2;
	int i;

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
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (find_index_exp(array, value, low, mid - 1, size));
		return (find_index_exp(array, value, mid + 1, high, size));
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in an sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	size_t lo;
	int res;

	if (array == NULL || size == 0)
		return (-1);
	if (array[idx] > value)
	{
		print_check(idx, array[idx]);
		return (-1);
	}
	if (array[idx] == value)
	{
		print_check(idx, array[idx]);
		return (idx);
	}
	idx += 1;
	while (idx < size - 1 && array[idx] <= value)
	{
		print_check(idx, array[idx]);
		lo = idx;
		idx *= 2;
	}
	if (idx < size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", lo, idx);
		return (binary_search_exp(&array[lo], idx - lo + 1, value) + lo);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", lo, size - 1);
		res = binary_search_exp(&array[lo], size - lo, value);
		if (res < 0)
			return (res);
		else
			return (res + lo);
	}
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
