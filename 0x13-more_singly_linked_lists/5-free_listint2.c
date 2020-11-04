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

/**
 * free_listint2 - frees a list.
 * @head: pointer to list head
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	free(*head);
	*head = NULL;
}
