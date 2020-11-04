#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: pointer to list head
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
