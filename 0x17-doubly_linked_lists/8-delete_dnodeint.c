#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to dlistint_t
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cont;

	for (cont = 0; h != NULL; cont++)
		h = h->next;
	return (cont);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: double pointer to dlistint_t
 * @index: index of the node to be deleted
 *
 * Return: address of the new node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL || index >= dlistint_len(*head))
		return (-1);
	aux = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	for (i = 0; i < index; i++)
		aux = aux->next;
	if (index == dlistint_len(*head) - 1)
	{
		aux->prev->next = NULL;
		free(aux);
		return (1);
	}
	aux->prev->next = aux->next;
	aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
