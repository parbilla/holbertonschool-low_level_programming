#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
void print_check(size_t index, int integ);
int binary_search(int *array, size_t size, int value);
int find_index(int *array, int value, int low, int high, size_t size);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_exp(int *array, size_t size, int value);
int find_index_exp(int *array, int value, int low, int high, size_t size);
int advanced_binary(int *array, size_t size, int value);
int find_index_adv(int *array, int value, int low, int high, size_t size);
listint_t *jump_list(listint_t *list, size_t size, int value);
void print_check_list(size_t index, int integ)

#endif /* SEARCH_H */
