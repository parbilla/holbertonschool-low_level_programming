#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to dlistint_t
 * @index: node
 *
 * Return: address of the indexed node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	aux = head;
	for  (i = 0; i < index; i++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}

	return (aux);
}
