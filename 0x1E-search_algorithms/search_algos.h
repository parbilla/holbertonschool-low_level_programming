#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
void print_check(size_t index, int integ);
int binary_search(int *array, size_t size, int value);
int find_index(int *array, int value, int low, int high, size_t size);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_exp(int *array, size_t size, int value);
int find_index_exp(int *array, int value, int low, int high, size_t size);

#endif /* SEARCH_H */
