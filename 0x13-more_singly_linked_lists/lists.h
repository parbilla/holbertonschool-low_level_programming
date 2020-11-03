#ifndef LIST
#define LIST
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct listint_s - single linked
 * @n: integer
 * @next: pointer to list
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
