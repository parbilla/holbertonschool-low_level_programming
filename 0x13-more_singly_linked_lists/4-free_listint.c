#include "lists.h"

/**
 * void free_listint - frees a list.
 * @head: pointer to list head
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
