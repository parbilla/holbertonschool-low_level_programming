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
	listint_t *aux;

	aux = *head;
	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = head->next;
		free(aux);
		return (1);
	}
	else
	{
		for (i = 0; i < idx; i++)
		{
			if (!aux->next)
			{
				return (-1);
			}
			aux = aux->next;
		}
		if (!aux)
		{
			return (NULL);
		}
		node->next = aux->next;
		aux->next = node;
	}
	return (node);
}
