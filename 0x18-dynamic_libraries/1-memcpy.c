#include "main.h"
/**
 * _memcpy - function that copies memory area
 *  memory area src to memory area dest
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return:a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
