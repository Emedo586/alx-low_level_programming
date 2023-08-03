#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: index number.
 * @index: bit index to set.
 *
 * Return: 1 if it worked, or -1 for error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (8 * sizeof(n) <= index)
return (-1);

return (!!(*n |= 1L << index));
}
