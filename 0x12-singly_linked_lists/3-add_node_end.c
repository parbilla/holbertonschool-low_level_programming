#include "lists.h"

/**
 * _strlen - length of a string
 * @s: parameter
 *
 * Return: length
 */

int _strlen(const char *s)
{
	int letras;

	letras = 0;

	while (*s != '\0')
	{
		letras++;
		s++;
	}
	return (letras);
}

/**
 * add_node_end - inserts node at the end.
 * @head: pointer to pointer
 * @str: string
 *
 * Return: adress of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *aux = *head;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (new);
}
