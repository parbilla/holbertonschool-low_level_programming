#include "lists.h"

/**
 * print_listint - print elements of a list.
 * @h: pointer to list
 *
 * Return: number of node.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int cdr;

	cdr = 0;
	while (h)
	{
		printf("%i\n", h->n);
		cdr++;
		h = h->next;
	}
	return (cdr);
}
