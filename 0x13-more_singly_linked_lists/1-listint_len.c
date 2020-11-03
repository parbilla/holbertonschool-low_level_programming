#include "lists.h"

/**
 * listint_len - return number of elements of a list.
 * @h: pointer to list
 *
 * Return: number of node.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int cdr;

	cdr = 0;
	while (h)
	{
		cdr++;
		h = h->next;
	}
	return (cdr);
}
