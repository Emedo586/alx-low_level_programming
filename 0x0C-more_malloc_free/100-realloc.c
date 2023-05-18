#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated with malloc(old_size)
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block.
 *
 * Return: ptr is not NULL and NULL if new_size = 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (p);
}
if (new_size > old_size)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
for (i = 0; i < old_size && new_size; i++)
*((char *)p + i) = *((char *)ptr + i);
free(ptr);
}
return (p);
}
