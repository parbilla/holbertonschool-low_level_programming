#ifndef LIST
#define LIST
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct node - struct to link list
 * @str: value
 * @len: string length
 * @next: node
 */

typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void print_before(void) __attribute__ ((constructor));

#endif
