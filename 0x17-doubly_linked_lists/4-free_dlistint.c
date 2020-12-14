#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to pointer to dlistint_t
 *
 * Return: always
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	if (head == NULL)
		return;
	aux = head;
	while (aux->next != NULL)
		aux = aux->next;
	while (aux->prev != NULL)
	{
		aux = aux->prev;
		free(aux->next);
	}
	free(head);
}
