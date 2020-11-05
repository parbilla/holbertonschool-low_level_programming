#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node.
 * @head: pointer to list head
 * @index: index
 *
 * Return: list node.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *aux1, *aux2;

	if (!*head)
	{
		return (-1);
	}
	aux1 = *head;
	aux2 = (*head)->next;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux1);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (!aux2)
			{
				return (-1);
			}
			aux1 = aux1->next;
			aux2 = aux2->next;
		}
		if (!aux2)
		{
			return (-1);
		}
		aux1->next = aux2->next;
		free(aux2);
	}
	return (1);
}
