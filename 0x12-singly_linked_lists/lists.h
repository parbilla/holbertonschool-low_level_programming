#ifndef LISTS
#define LISTS
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
	size_t len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
