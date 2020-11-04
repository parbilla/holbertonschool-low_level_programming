#include "lists.h"

/**
 * sum_listint - return the sum of the data of a list.
 * @head: pointer to list head
 *
 * Return: list node.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
