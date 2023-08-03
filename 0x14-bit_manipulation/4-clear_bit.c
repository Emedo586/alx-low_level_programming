#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: index number
 * @index: the bit index to clear.
 *
 * Return: if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (8 * sizeof(n) <= index)
return (-1);
if (*n & 1L << index)
*n ^= 1L << index;
return (1);
}
