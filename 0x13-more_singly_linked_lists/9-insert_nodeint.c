#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node.
 * @head: pointer to list head
 * @idx: index
 * @n: integer
 *
 * Return: list node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *aux;

	aux = *head;
	if (!*head)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = aux->next;
		*head = node;
	}
	else
	{
		for (i = 0; i <= idx; i++)
		{
			if (i == idx - 1)
			{
				node->next = aux->next;
				aux->next = node;
			}
			if (!aux->next)
			{
				return (NULL);
			}
			aux = aux->next;
		}
	}
	return (node);
}
