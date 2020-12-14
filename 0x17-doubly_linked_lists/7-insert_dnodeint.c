#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to dlistint_t
 * @idx: index where the new node should be added
 * @n: integer
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux1, *aux2 = NULL;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	else if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		*h = new;
	}
	else if (*h == NULL)
		return (NULL);
	aux2 = *h;
	for (i = 0; i < idx; i++)
	{
		aux2 = aux2->next;
		aux1 = aux2->prev;
		if (aux2 == NULL)
			return (NULL);
	}

	new->prev = aux1;
	new->next = aux2;
	aux1->next = new;
	aux2->prev = new;
	return (new);
}
