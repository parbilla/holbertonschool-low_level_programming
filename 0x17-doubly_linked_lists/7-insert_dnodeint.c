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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to dlistint_t
 * @idx: index where the new node should be added
 * @n: integer
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux = NULL;
	unsigned int i = 0;

	if (h == NULL || idx > dlistint_len(*h))
		return (NULL);
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	aux = *h;
	for (i = 0; i < idx; i++)
	{
		aux = aux->next;
	}
	new->prev = aux->prev;
	new->next = aux;
	aux->prev->next = new;
	aux->prev = new;
	return (new);
}
