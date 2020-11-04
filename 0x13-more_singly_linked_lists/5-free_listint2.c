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

/**
 * free_listint2 - frees a list.
 * @head: pointer to list head
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(*head);
	*head = NULL;
}
