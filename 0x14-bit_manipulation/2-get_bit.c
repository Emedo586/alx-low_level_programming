#include "main.h"

/**
 * get_bit - To return value of a bit at a given index.
 * @n: the number of index.
 * @index: bit index
 * Return: value of the bit at index or -1 for error.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (8 * sizeof(n) <= index)
return (-1);

return (n >> index & 1);
}
