#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

#include <stdlib.h>

int _putchar(char c);
void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _atoi(const char *s);
void print_int(unsigned long int n);
#endif