#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a list.
 * @head: pointer to list head
 * @index: node to return
 * Return: list node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		node = head->next;
		head = head->next;
		if (!node)
		{
			return (NULL);
		}
	}
	return (node);
}
