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
	{
		/* print each int of the dlistint */
		h = h->next;
	}
	return (cont);
}
