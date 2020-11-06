#include "lists.h"

/**
 * reverse _listint - inserts a new node.
 * @head: pointer to list head
 *
 * Return: pointer to list node.
 */

listint_t *reverse_listint(listint_t **head)
{
	unsigned int i;
	listint_t *aux1, *aux2;

	if (*head && head->next)
	{
	aux1 = head;
	aux2 = head->next;
	aux1->next = NULL;

	head = aux2;
	aux2 = aux2->next;
	head->next= aux1;
	aux1 = head;


	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	if (!*head || idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!aux->next)
			{
				return (NULL);
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
