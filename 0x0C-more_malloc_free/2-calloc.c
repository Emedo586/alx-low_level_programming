#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory witj constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n:max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: length of the array
 * @size: element size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
l = nmemb * size;
p = malloc(l);
if (p == NULL)
return (NULL);
while (i < l)
{
p[i] = 0;
i++;
}
return (p);
}
