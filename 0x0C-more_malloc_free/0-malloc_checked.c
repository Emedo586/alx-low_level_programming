#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc,
 * and exit if failed.
 * @b: size to allocate
 * Return: pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
