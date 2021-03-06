#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: string to print
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
