#include "lists.h"

/**
 * free_list - inserts node at the end.
 * @head: pointer to pointer
 *
 * Return: adress of new element.
 */

void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		aux = head;
		free(aux->str);
		free(aux);
		head = head->next;
	}
}
