#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * @list: pointer to the first element of the array
 * @size: number of nodes in array
 * @value: value to search
 *
 * Return: pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *forw, *back;
	size_t bloc = sqrt(size);
	size_t i = 0;

	if (list != NULL || size > 0)
	{
		if (list->n > value)
		{
			print_check(list->index, list->n);
			return (NULL);
		}
		back = list;
		forw = list;
		while (index < size - 1 && i < bloc)
		{	
			forw = forw->next;
			i++;
		}
		print_check(forw->index, forw->n);
		if (forw->n < value && forw->next != NULL)
		{
			if (forw->next == NULL)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", back->index, forw->index);
				v

			}
		}	
			back = forw;
		if
	
	for (i = (idx - bloc); i < size && i <= idx; i++)
	{
		print_check(i, array[i]);
		if (array[i] == value)
			return (i);
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

void print_check_list(size_t index, int integ)
{
	printf("Value checked at index[%lu] = [%d]\n", index, integ);
}
