#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value);
int binary_rec_search(int *array, int start, int end, int val);
void print_array(int *array, int start,int end);

#endif /*SEARCH_ALGOS*/
