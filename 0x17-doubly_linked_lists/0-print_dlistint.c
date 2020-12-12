#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to dlistint_t
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int cont;

	for (cont = 0; h != NULL; cont++)
	{
		/* print each int of the dlistint */
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cont);
}
