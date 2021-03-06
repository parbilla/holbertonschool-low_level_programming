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
 * add_node - inserts node at the head.
 * @head: pointer to pointer
 * @str: string
 *
 * Return: adress of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
