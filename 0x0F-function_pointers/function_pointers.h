#ifndef FUNCTION_POINTERS_HEADER_FILE
#define FUNCTION_POINTERS_HEADER_FILE

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*function_pointers.h*/
