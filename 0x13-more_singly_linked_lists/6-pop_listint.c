#include "lists.h"

/**
 * pop_listint - adds a new node at the end of a list.
 * @head: pointer to list head
 *
 * Return: integer of deleted element.
 */

int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *aux = *head;

	if (!*head)
	{
		return (0);
	}
	tmp = aux->n;
	*head = aux->next;
	free(aux);
	return (tmp);
}
