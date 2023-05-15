#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initialize it with a specific char.
 * @size: size of array
 * @c: char to initialize
 * Return: poiter to the initialized array or NULL
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
if (size == 0 || n == 0)
return (0);
while (size--)
n[size] = c;
return (n);
}
