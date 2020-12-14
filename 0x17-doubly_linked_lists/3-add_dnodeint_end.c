#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to pointer to dlistint_t
 * @n: integer
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	aux = *head;
	while (aux->next != NULL)
		aux = aux->next;
	new->prev = aux;
	aux->next = new;
	return (new);
}
