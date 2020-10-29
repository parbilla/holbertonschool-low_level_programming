#include "lists.h"

/**
 * list_len - returns the number of elements of a list.
 * @h: string
 *
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
