#ifndef FUN_POINTERS
#define FUN_POINTERS

#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void int_index(int *array, int size, int (*cmp)(int));
#endif
