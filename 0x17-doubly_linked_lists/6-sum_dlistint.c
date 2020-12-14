#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to dlistint_t
 *
 * Return: address of the new node
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	aux = head;
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
